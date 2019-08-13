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

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int 	main()
{
int x;
int y;
unsigned int n = 5;
char a[] = "baammp";
char b[] = "baacmpainscestpool";
y = ft_strncmp(a,b,n);
x = strncmp(a,b,n);
printf("ceci est la fonction d origine %d \n",x);
printf("ceci est la fonction  des familles %d \n",y);

return 0;
}
