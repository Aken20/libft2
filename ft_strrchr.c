/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahibrahi <ahibrahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:52:10 by ahibrahi          #+#    #+#             */
/*   Updated: 2023/07/11 14:52:46 by ahibrahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;
    int n;
    n = strlen(s) - 1;
    while(n != 0)
    {
        ++s;
        --n;
    }   
    while (*s != c && *s)
        {
        --s;
        ++n;
        }
        if (*s == c)
        {
        char *c_s = (char *) s;
        return c_s;
        }
    return NULL;
}

int main()
{
char s[] = "minkdoksa987i";
int c;
c = 'k';
char *ptr = strrchr (s,c);
printf("str: %s\n", ptr);
char *mptr = ft_strrchr (s,c);
printf("my str: %s\n", mptr);
}