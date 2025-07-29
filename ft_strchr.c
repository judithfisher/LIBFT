/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:32:45 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/26 12:57:19 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s != '\0' && *s != a)
		s++;
	if (*s == a)
		return ((char *)s);
	return (NULL);
}

// int main (void)
// {
// 	int c;
// 	char *string = "Flying monkey circus!";
// 	char *result = ft_strchr(string, c);

// 	// Test 1: Character is in the string
// 	c = 'm';
//     printf("Searching for '%c': %s\n", c, result);

//     // Test 2: Character is not in the string
//     c = 'x';
// 	printf("Searching for '%c': %s\n", c, result);

//     // Test 3: Character is at the beginning
//     c = 'F';
// 	printf("Searching for '%c': %s\n", c, result);

//     // Test 4: Character is at the end
//     c = '!';
//     printf("Searching for '%c': %s\n", c, result);

// 	// Test 5: Searching for the null terminator
//     c = '\0';
//     printf("Searching for '\\0': %s\n", result);
// }