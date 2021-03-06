/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flegg <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:13:17 by flegg             #+#    #+#             */
/*   Updated: 2021/09/10 23:13:17 by flegg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	echo(int argc, char **argv)
{
	int	nflag;
	int	i;

	nflag = 0;
	i = 1;
	while (i < argc && argv[i] && my_strcmp(argv[i], "-n"))
	{
		nflag = 1;
		i++;
	}
	while (i < argc && argv[i])
	{
		ft_putstr_fd(argv[i], 1);
		if (i != argc - 1)
			write(1, " ", 1);
		i++;
	}
	if (!nflag)
		write(1, "\n", 1);
	return (0);
}
