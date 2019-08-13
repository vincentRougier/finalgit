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

//char    *ft_strstr(char *str, char *to_find);

int 	main()
{
char a[] = "Laaaabbbbbbccccciiiiii";
char b[] = "L";
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

//char *y;
char *x;
x = strstr(a,b);
//y = ft_strstr(a,b);

while (*x != '\0')
{
    printf("%c",*x);
    ++x;
}

//printf("\n\n Ceci est la fonction d origine \n\n ");
//while (*y != '\0')
    //{
     //printf("%c",*y);
     //++y;
    //}


return 0;
}
