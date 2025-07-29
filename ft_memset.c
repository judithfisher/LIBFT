/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:25:55 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/26 12:56:56 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	j;

	i = 0;
	j = (unsigned char) c;
	while (i < len)
	{
		((unsigned char *)b)[i] = j;
		i++;
	}
	return (b);
}

// int	main(void)
// {
//     char str[5];
//     int fill_char = 'a';
//     size_t len = 15;
//     ft_memset(str, fill_char, len);
//     printf("%s\n", str);
//     return 0;
// }