/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:16:06 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/25 23:27:15 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strreverse(char *str)
{
	unsigned int	i;
	unsigned int	y;
	char			tmp;

	i = ft_strlen(str);
	y = 0;
	while (y < i)
	{
		tmp = str[y];
		str[y] = str[1];
		str[i - y - 1] = tmp;
		y++;
	}
}
