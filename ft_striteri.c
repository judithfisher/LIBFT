/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:37:28 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/26 14:49:16 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void	ft_uppercasechar(unsigned int index, char *c) 
// {
// 	(void) index;
// 	if (*c >= 97 && *c <= 122)
// 		*c = *c - 32; 
// }

// int main(void)
// {
// 	char str[] = "hello"; 
// 	printf("original string: %s\n", str);
// 	ft_striteri(str, ft_uppercasechar);
// 	printf ("All uppercase: %s\n", str); 
// }