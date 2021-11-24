/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:08:10 by pleveque          #+#    #+#             */
/*   Updated: 2021/11/24 12:08:36 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	ft_bzero(void *s, size_t n)

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_islower(int c);
int	ft_islower(int c);
int	ft_isdigit(int c);
int	ft_isupper(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);

void	*ft_memset(void *s, int c, size_t n);

#endif