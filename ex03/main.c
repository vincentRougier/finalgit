/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrougier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 02:34:45 by vrougier          #+#    #+#             */
/*   Updated: 2019/08/12 04:11:23 by vrougier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strncat(char *s1, char *s2,unsigned int n);

int 	main()
{
//int y;
char a[50] = "aaaaaabbbbbbbccccccciiiiii";
char b[] = "LLLLLLLLLLLLLLL";
//char a[11];
//a[0] = 50;
//a[1] = 50;
//a[2] = 50;
//a[3] = 50;
//a[4] = 50;
//a[5] = 50; 
//a[6] = 50;
//a[7] = 50;
//a[8] = 50;
//a[9] = 50;


 //char b[5];
//a[0] = 52;
//a[1] = 52;
//a[2] = 52;
//a[3] = 52;

unsigned int n = 15;
char *y;

int i;
i = 20;
char *x;
x = strncat(a,b,n);
y = ft_strncat(a,b,n);

while (*x != '\0')
{
    printf("%c",*x);
    ++x;
}

printf("\n\n Ceci est la fonction d origine \n\n ");
while (*y != '\0')
    {
     printf("%c",*y);
     ++y;
    }


return 0;
}
