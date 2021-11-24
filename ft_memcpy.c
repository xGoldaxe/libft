/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:05:53 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/24 12:16:07 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *tempDest;
    unsigned char   *tempSrc;

    tempDest = (unsigned char *)dest;
    tempSrc = (unsigned char *)src;
    while (n > 0)
    {
        tempDest[i] = tempSrc[i];
        n--;
    }
    return (dest);
}