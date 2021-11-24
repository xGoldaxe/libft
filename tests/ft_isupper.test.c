/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:02:13 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/23 14:43:05 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isupper(char c);

int	main(void)
{
	printf("%d\n", ft_isupper('a') == 0);
	printf("%d\n", ft_isupper(84) != 0);
	printf("%d\n", ft_isupper('A') != 0);
}
