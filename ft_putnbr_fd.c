/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:44:35 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/26 18:00:33 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_recu(int n, int fd)
{
	if (n != 0)
	{
		ft_putnbr_fd_recu(n / 10, fd);
		ft_putchar_fd('0' - n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n = -n;
	ft_putnbr_fd_recu(n, fd);
}
