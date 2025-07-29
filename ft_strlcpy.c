/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:40:25 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/21 19:37:55 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}

// int main(void)
// {
// 	int size;
// 	char source[] = "0123456789";
// 	char dest[11] = "Da";
// 	size = ft_strlcpy (dest, source, 10);
// 	// size = strlcpy (dest, source, 10);
// 	printf("%s \n", dest);
// 	printf("%d", size);
// }
