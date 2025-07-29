/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:39:32 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/26 12:56:44 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	i = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((string1[i] != string2[i]))
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	int test;
// 	char *s1 = "Hello";
// 	char *s2 = "Heil0";
// 	test = ft_memcmp(s1, s2, 3);
// 	printf("%d", test);
// }