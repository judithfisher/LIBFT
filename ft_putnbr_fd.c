/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfischer <jfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:49:49 by jfischer          #+#    #+#             */
/*   Updated: 2023/11/23 19:25:10 by jfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 2147483647)
		ft_putstr_fd("2147483647", fd);
	else if (n < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int main (void)
// {
// 	int fd = 1; 
// 	ft_putnbr_fd(-42, fd);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd(0, fd);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd(42, fd);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd(2147483647, fd);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd(-2147483648, fd);
// 	write (1, "\n", 1);
// }