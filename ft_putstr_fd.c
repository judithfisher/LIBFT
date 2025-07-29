/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:45:39 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/23 13:58:07 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	if (!s)
		return ;
	while (s[len] != '\0')
		len++;
	write (fd, s, len);
}

// int main (void)
// {
// 	char *string = "Hello";
// 	int filedescriptor = 2; 
// 	ft_putstr_fd(string, filedescriptor);
// }