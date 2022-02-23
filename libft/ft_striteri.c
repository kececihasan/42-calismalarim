/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:13:50 by hkececi           #+#    #+#             */
/*   Updated: 2022/02/23 15:50:23 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
	{
	i = 0;
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}
/*void	f(unsigned int a, char *b)
{
	printf("f a: %d and adress s[i]: %s\n",a, b);
}
int main()
{
	char c[20] = "adresligezi";
	ft_striteri(c,f);
	printf("%s\n", c);

	return (0);
}*/
