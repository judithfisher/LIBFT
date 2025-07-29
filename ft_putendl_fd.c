/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:48:48 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/23 13:56:37 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
		i++;
	write (fd, s, i);
	write (fd, "\n", 1);
}

// int main (void)
// {
// 	int filedescriptor = 1; 
// 	char *s = "Hello"; 
// 	ft_putendl_fd(s, filedescriptor);
// }