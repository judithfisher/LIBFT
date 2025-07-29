/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:02:14 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/26 17:05:01 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_charcheck(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s);
		i++;
	}
	if (c == *s)
		return ((char *)s);
	return (NULL);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	int		start;
	int		end;
	char	*s2;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_charcheck(set, s1[start]) && start <= end)
		start++;
	if (start >= end)
		return (ft_strdup(""));
	while (end >= 0 && ft_charcheck(set, s1[end]))
		end--;
	s2 = malloc(sizeof(char) * (end - start + 2));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, &s1[start], end - start + 2);
	return (s2);
}

// int main (void)
// {
// 	char *string1 = "Will it even work? It works!";
// 	char *set = "Will it even work? ";
// 	char *string2; 
// 	string2 = ft_strtrim(string1, set);
// 	printf ("%s", string2);
// }
