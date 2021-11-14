/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flegg <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 23:32:55 by flegg             #+#    #+#             */
/*   Updated: 2020/11/18 17:58:24 by flegg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	endl;

	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
	endl = '\n';
	write(fd, &endl, 1);
	return ;
}
