/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotev <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 12:47:09 by vbotev            #+#    #+#             */
/*   Updated: 2021/07/25 18:44:30 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

typedef    struct    key_wrd
{
    char    *key;
    char    *wrd;
} keywrd;

int    err_unsignedint(int argc, char **argv)
{
    int i;
    int pos;
    int flag;

	pos = 0;
    flag = 0;
    i = 0;
    if (argc == 2)
        pos = 1;
    else if (argc == 3)
        pos = 2;

    while(argv[pos][i] != 0)
    {
        if(argv[pos][i] >= '0' && argv[pos][i] <= '9')
            i++;
        else
        {
            flag = 1;
            break ;
        }
    }
    return (flag);
}

char	*number(int argc, char **argv)
{
	char	*num;
    
    if(err_unsignedint(argc,argv))
        write(1, "Error\n", 6);

	if(argc == 2)
		num = argv[1];
	if(argc == 3)
		num = argv[2];
	return (num);
}

int	nb_triplets(int argc, char **argv)
{
	int nb_triplets;
	int len;

	len = ft_strlen(number(argc,argv));
	nb_triplets = len / 3 + len % 3;
	return(nb_triplets);
}
char    *num2wrd(char   *str, int pos, const keywrd *dict)
{
    int i;
    
    i = 0;
    if(pos != 1)
    {
        while(ft_strcmp(dict[i].key, str) != 0)
        {
        i++;
        }
    }
    
    if(pos == 1 && str[0] > '1')
    {
        i = 20;
        while(ft_strcmp(dict[i].key, str) != 0)
            i++;
        
    }
    else if(pos == 1 && str[0] == '1')
    {
        i = 10;
        while(ft_strcmp(dict[i].key, str) != 0)
            i++;
    }
    
    return(dict[i].wrd);
}

void	disp_triplet(const keywrd *dict, char *triplet)
{
	int	    trip_size;
	int     pos;
    char    str[3];
    
    trip_size = ft_strlen(triplet);
    pos = 0;
    while(pos < trip_size)
    {
        if(trip_size == 1)
        {
            pos = pos + 2;
        }
        if(trip_size == 2)
        {
            pos++;
        }
        if(pos == 0)
        {
            str[0] = triplet[pos];
            str[1] = 0;
        
            ft_putstr(num2wrd(str, pos, dict));
            write(1, " ", 1);
            ft_putstr(dict[28].wrd);
            write(1, " ", 1);
        }
        if (pos == 1)
        {
            if (triplet[pos] == '1')
            {
                str[0] = triplet[pos];
                str[1] = triplet[pos + 1];
                str[2] = 0;
                
            }
            if (triplet[pos] > '1')
            {
                str[0] = triplet[pos];
                str[1] = '0';
                str[2] = 0;
                ft_putstr(num2wrd(str, pos, dict));
                write(1, " ", 1);
            }
        }
        if (pos == 2 && triplet[1] != '1')
        {
            str[0] = triplet[pos];
            str[1] = 0;
            ft_putstr(num2wrd(str, pos, dict));
            write(1, "\n", 1);
        }
        pos++;
    }
}

int main(int argc, char	**argv)
{
    keywrd tbl[41];
    int row;
    
    row = 0;
    while(row < 41)
    {
        tbl[row].key = malloc(40*sizeof(char));
        tbl[row].wrd = malloc(40*sizeof(char));
        row++;
    }
    tbl[0].key = "0";
    tbl[0].wrd = "zero";
    tbl[1].key = "1";
    tbl[1].wrd = "one";
    tbl[2].key = "2";
    tbl[2].wrd = "two";
    tbl[3].key = "3";
    tbl[3].wrd = "three";
    tbl[4].key = "4";
    tbl[4].wrd = "four";
    tbl[5].key = "5";
    tbl[5].wrd = "five";
    tbl[6].key = "6";
    tbl[6].wrd = "six";
    tbl[7].key = "7";
    tbl[7].wrd = "seven";
    tbl[8].key = "8";
    tbl[8].wrd = "eight";
    tbl[9].key = "9";
    tbl[9].wrd = "nine";
    tbl[10].key = "10";
    tbl[10].wrd = "ten";
    tbl[11].key = "11";
    tbl[11].wrd = "eleven";
    tbl[12].key = "12";
    tbl[12].wrd = "twelve";
    tbl[13].key = "13";
    tbl[13].wrd = "thirteen";
    tbl[14].key = "14";
    tbl[14].wrd = "fourteen";
    tbl[15].key = "15";
    tbl[15].wrd = "fifteen";
    tbl[16].key = "16";
    tbl[16].wrd = "sixteen";
    tbl[17].key = "17";
    tbl[17].wrd = "seventeen";
    tbl[18].key = "18";
    tbl[18].wrd = "eighteen";
    tbl[19].key = "19";
    tbl[19].wrd = "nineteen";
    tbl[20].key = "20";
    tbl[20].wrd = "twenty";
    tbl[21].key = "30";
    tbl[21].wrd = "thirty";
    tbl[22].key = "40";
    tbl[22].wrd = "forty";
    tbl[23].key = "50";
    tbl[23].wrd = "fifty";
    tbl[24].key = "60";
    tbl[24].wrd = "sixty";
    tbl[25].key = "70";
    tbl[25].wrd = "seventy";
    tbl[26].key = "80";
    tbl[26].wrd = "eighty";
    tbl[27].key = "90";
    tbl[27].wrd = "ninety";
    tbl[28].key = "100";
    tbl[28].wrd = "hundred";
    tbl[29].key = "1000";
    tbl[29].wrd = "thousand";
    tbl[30].key = "1000000";
    tbl[30].wrd = "million";
    tbl[31].key = "1000000000";
    tbl[31].wrd = "billion";
    tbl[32].key = "1000000000000";
    tbl[32].wrd = "trillion";
    tbl[33].key = "1000000000000000";
    tbl[33].wrd = "quadrillion";
    tbl[34].key = "1000000000000000000";
    tbl[34].wrd = "quintillion";
    tbl[35].key = "1000000000000000000000";
    tbl[35].wrd = "sextillion";
    tbl[36].key = "1000000000000000000000000";
    tbl[36].wrd = "septillion";
    tbl[37].key = "1000000000000000000000000000";
    tbl[37].wrd = "octillion";
    tbl[38].key = "1000000000000000000000000000000";
    tbl[38].wrd = "nonillion";
    tbl[39].key = "1000000000000000000000000000000000";
    tbl[39].wrd = "decillion";
    tbl[40].key = "1000000000000000000000000000000000000";
    tbl[40].wrd = "undecillion";
  
  
    disp_triplet(tbl, number(argc, argv));

	/*row = 0;		// why doesn't it work ?? :(
    while(row < 40)
    {
        free(tbl[row].key);
        free(tbl[row].wrd);
        row++;
    }*/
    
	return(0);
}
