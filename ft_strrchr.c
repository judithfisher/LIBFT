/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:33:21 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/23 09:45:39 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	a;

	a = (char) c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == a)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

// int main (void)
// {
// 		int c;
// 		char *string = "Flying monkey circus!";
// 		char *result = ft_strrchr(string, c);

// 	// Test 1: Character is in the string
// 	c = 'i';
//     printf("Searching for '%c': %s\n", c, result);

//     // Test 2: Character is not in the string
//     c = 'x';
//     printf("Searching for '%c': %s\n", c, result);

//     // Test 3: Character is at the beginning
//     c = 'F';
//     printf("Searching for '%c': %s\n", c, result);

//     // Test 4: Character is at the end
//     c = '!';
//     printf("Searching for '%c': %s\n", c, result);

// 	// Test 5: Searching for the null terminator
//     c = '\0';
//     printf("Searching for '\\0': %s\n", result);
// }