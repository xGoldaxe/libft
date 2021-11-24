/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:44:52 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/23 15:00:12 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("%d\n", ft_isdigit(310) > 0);
	printf("%d\n", isdigit(310) == 0);
	printf("%d\n", ft_isdigit('2') > 0);
	printf("%d\n", isdigit('2') > 0);
}
