/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 00:22:38 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/25 02:56:47 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*parser() // we could add a filename entry on a func
{
	int		open_d;
	int		read_d;
	int		count;
	char	*dict_tmp;
	char	*dict;

	count = 0;
	dict_tmp = (char*)malloc(2500 * sizeof(char));
	open_d = open("numbers.dict", O_RDONLY); // we could target filename opening just before O_RDONLY
	if (open_d < 0)
		return (1);		//maybe we can input an error massage here
	read_d = read(open_d, dict_tmp, 2500);
	dict = (char*)malloc((read_d + 1) * sizeof(char));
	while (count < read_d)
	{
		dict[count] = dict_tmp[count];
		count++;
	}
	dict[count] = '\0';
	free(dict_tmp);
	close(open_d);
	return (dict);
}

int	main (int	argc, char	**argv)
{
	char	*dict;
	char	*love;
	love = argv[0]; // this is to mute flags too :)
	if (argc < 1)
		return (1);	//this is just to mute the flags when compiling

	dict = parser();
	printf("%s", dict);
}
