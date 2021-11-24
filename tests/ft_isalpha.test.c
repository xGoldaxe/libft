/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:10:37 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/23 14:20:38 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c);

int	main(void)
{
	printf("%d\n", ft_isalpha('a') == 1);
	printf("%d\n", ft_isalpha('W') == 1);
	printf("%d\n", ft_isalpha('Z') == 1);
	printf("%d\n", ft_isalpha('5') == 0);
	printf("%d\n", ft_isalpha('/') == 0);
	printf("%d\n", ft_isalpha('\n') == 0);
}
