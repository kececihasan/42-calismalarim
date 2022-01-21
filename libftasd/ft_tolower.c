/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:57:50 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/18 12:57:50 by hkececi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c + 32);
    }
    else
        return (c);
}

/*int main()
{
    printf("%d",ft_tolower('D'));
}*/