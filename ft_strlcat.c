/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:01:15 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/21 19:34:28 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size == 0)
		return (srclen);
	while (src[i] != '\0' && destlen + i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	if (destlen > size)
		return (srclen + size);
	return (srclen + destlen);
}

// int	main(void)
// {
// 	char src[] = "lorem";
// 	char dest[16] = "a";
// 	size_t len; 
// 	// srclen = strlcat(dest, src, 10);
// 	len = ft_strlcat(dest, src, 15);
// 	printf ("return value: %zu\n", len);
// 	printf ("%s", dest);
// }