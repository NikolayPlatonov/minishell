/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sigint_handler_heredoc.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flegg <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:57:45 by flegg             #+#    #+#             */
/*   Updated: 2021/09/15 22:57:45 by flegg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	sigint_handler_heredoc(int num)
{
	(void)num;
	g_sh.last_exit_code = 1;
	g_sh.heredoc_exit_status = 1;
	if (g_sh.heredoc_pid)
	{
		kill(g_sh.heredoc_pid, SIGKILL);
		write(2, "\b\b  \b\b", 6);
		write(1, "\n", 1);
	}
}
