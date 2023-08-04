/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aken <aken@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:03:28 by ahibrahi          #+#    #+#             */
/*   Updated: 2023/08/04 06:49:56 by aken             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft2str(const char *s_in, const char *s_for, size_t len)
{
	int	n;

	n = 0;
	while (s_in[n] == s_for[n] && s_for[n] && len)
	{
		++n;
		--len;
	}
	if (s_for[n] == 0)
	{
		return (s_in);
	}
	return (NULL);
}

char	*ft_strnstr(const char *s_in, const char *s_for, size_t len)
{
	char	*p;

	if (!s_in && !s_for)
		return (NULL);
	if (*s_for == 0)
	{
		p = (char *) s_in;
		return (p);
	}
	while (*s_in != *s_for && s_in != 0 && len > 0)
	{
		++s_in;
		--len;
	}
	if (*s_in == *s_for)
	{
		p = (char *) ft2str(s_in, s_for, len);
		return (p);
	}
	return (NULL);
}
/*
int main()
{
    //char m[] = "you get hacked123";
    //char m2[] = "hacked";
    char k[] = "booooring city123";
    char k2[] = "city";
    //printf("org: %s\n", strnstr(m, m2, 13));
    printf("my: %s\n", ft_strnstr(k, k2, 13));
}
*/