/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sigquit_handler_heredoc.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flegg <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:57:45 by flegg             #+#    #+#             */
/*   Updated: 2021/09/15 22:57:45 by flegg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	sigquit_handler_heredoc(int num)
{
	(void)num;
	if (g_sh.heredoc_pid)
		write(2, "\b\b  \b\b", 6);
}
