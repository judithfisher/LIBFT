/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:08:07 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/26 12:55:27 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == 0)
		return (0);
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

// int main (void)
// {
// 	size_t count = 10; 
// 	size_t size = sizeof(int);
// 	int *array = ft_calloc(count, size); 
// 	if (array == 0)
// 		printf("Memory allocation failed"); 	
// 	size_t i = 0; 
// 	while (array[i] != '\0')
// 	{
// 		if (array[i] != 0)
// 			printf("Calloc failed");
// 		i++;
// 	}
// 	printf ("Memory allocation successful");
// 	free(array);
// }