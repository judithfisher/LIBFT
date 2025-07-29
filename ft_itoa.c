/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:49:16 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/25 22:35:53 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_intlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	while (len >= 0 && n != 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

// int main(void)
// {
//  int n;
// 	char *str;

//  n = 0;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);	
//  n = 42;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	n = -42;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	n = -2147483648;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	n = 2147483647;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// }
