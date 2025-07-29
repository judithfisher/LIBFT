/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:39:56 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/26 12:57:40 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s2;

	i = 0;
	if (s == NULL)
		return (NULL);
	s2 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// char	ft_uppercase_mapping(unsigned int index, char c)
// {
// 		(void) index;
// 		if (c >= 97 && c <= 122)
// 			c = c - 32;
// 		return (c); 
// }

// int main(void)
// {
// 	char *str = "hello"; 
// 	printf("Original string: %s\n", str);
// 	char *string2 = ft_strmapi(str, ft_uppercase_mapping);

// 	if (string2 != NULL)
// 	{
// 		printf ("All uppercase: %s\n", string2); 
// 		free(string2);	
// 	}
// 	else 
// 	printf ("Memory Allocation failed!\n");
// }