/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:13:39 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/26 17:02:18 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	ft_wordlen(const char *s, char c, size_t i)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		wordlen++;
		i++;
	}
	return (wordlen);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wordlen;
	char	**splitarray;

	splitarray = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (splitarray == NULL || s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0' && ft_countwords(s, c) > j)
	{
		while (s[i] == c)
			i++;
		wordlen = ft_wordlen(s, c, i);
		splitarray[j] = ft_substr(&s[i], 0, wordlen);
		j++;
		i += wordlen;
	}
	splitarray[j] = NULL;
	return (splitarray);
}

// int main (void)
// {
// 	char *s = "cut my string into pieces";
// 	char c = ' ';
// 	size_t wordcount;	
// 	wordcount = ft_countwords(s, c);
// 	printf("word count: %zu \n", wordcount);
// 	char **s2;
// 	s2 = ft_split(s, c);
// 	int i = 0;
// 	while (s2[i] != NULL)
// 	{
// 		printf ("%s \n", s2[i]);
// 		i++; 	
// 	}
// }