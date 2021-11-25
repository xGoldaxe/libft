/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:22:08 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/25 12:00:42 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;

	str = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (str[i] == c)
			return (str+=i);
		i--;
	}
	if (*str == c)
		return (str);
	return (0);
}
