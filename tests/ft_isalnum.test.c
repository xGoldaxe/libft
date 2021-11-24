/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:44:52 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/23 16:26:25 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("%d\n", ft_isalnum('.') == 0);
	printf("%d\n", isalnum('.') == 0);
	printf("%d\n", ft_isalnum('A') > 0);
	printf("%d\n", isalnum('A') > 0);
	printf("%d\n", ft_isalnum('z') > 0);
	printf("%d\n", isalnum('z') > 0);
}
