
#include <stdio.h>




char *ft_strstr(char *str, char *to_find)
	{
int		i = 0;
int     k = 0;
		while (str[i] == to_find[i])
		{	
            ++i;
		}
        while (str[i] != '\0')
        {
        str[i] = to_find[k];
        ++i;
        ++k;
        }
		return to_find;
	}
