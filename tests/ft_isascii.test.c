/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:44:52 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/23 15:11:16 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(char c);

int	main(void)
{
	printf("%d\n", ft_isascii(-5) == 0);
	printf("%d\n", isascii(-5) == 0);
	printf("%d\n", isascii(128) == 0);
	printf("%d\n", ft_isascii(128) == 0);
	printf("%d\n", ft_isascii(40) > 0);
	printf("%d\n", isascii(40) > 0);

	printf("%d\n", ft_isascii('A') > 0);
	printf("%d\n", isascii('A') > 0);
}
