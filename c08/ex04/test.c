/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 00:05:36 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/25 00:18:53 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

typedef struct	 s_testalacon
{
	int		age;
	int		height;
	char	*gender;
	char	*name;
}				t_niquetoifdp;

int	main()
{
	t_niquetoifdp person1;

	person1.age = 18;
	person1.height = 180;
	person1.gender = "Male";
	person1.name = "Tamer";

	printf("This is %s, he is %i.\nHis gender identity refers to %s.\nHe is %icm tall.\nMeet %s", person1.name, person1.age, person1.gender, person1.height, person1.name);
}*/
#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

// function prototype
struct student getInformation();

int main()
{
    struct student s;

    s = getInformation();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);

    return 0;
}
struct student getInformation()
{
  struct student s1;

  printf("Enter name: ");
  scanf ("%[^\n]%*c", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);

  return s1;
}
