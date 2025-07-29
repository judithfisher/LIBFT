/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:14:15 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/23 09:48:27 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*source;
	char	*dest;

	i = 0;
	source = (char *)src;
	dest = (char *)dst;
	if (!src && !dst)
		return (0);
	if (dest > source)
	{
		while (len > 0)
		{
			len--;
			dest[len] = source[len];
		}
	}
	while (i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char dest[] = "Help me";
// 	char src[] = "Please";
// 	ft_memmove(dest, src, 6);
// 	// memcpy(dest, src, 6);
// 	printf ("%s", dest);
// }