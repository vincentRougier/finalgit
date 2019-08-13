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

char    *ft_strcat(char *s1, char *s2);

int 	main()
{
//int y;
//char a[] = "baammp";
//char b[] = "baacmpainscestpool";
char a[11];
a[0] = 50;
a[1] = 50;
a[2] = 50;
a[3] = 50;
a[4] = 50;
a[5] = 50; 
a[6] = 50;
a[7] = 50;
a[8] = 50;
a[9] = 50;


 char b[17];
a[0] = 52;
a[1] = 52;
a[2] = 52;
a[3] = 52;


char *y;

y = ft_strcat(a,b);
int i;
i = 0;
char *x;
x = strcat(a,b);
y = ft_strcat(a,b);

while (*x != '\0')
{
    printf("ceci est la fonction d origine %d \n",*x);
    ++x;
}
while (*y != '\0')
    {
     printf("ceci est la fonction des familles %d \n",*y);
     ++y;
    }


return 0;
}
