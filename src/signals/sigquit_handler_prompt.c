/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sigquit_handler_prompt.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flegg <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:57:45 by flegg             #+#    #+#             */
/*   Updated: 2021/09/15 22:57:45 by flegg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	sigquit_handler_prompt(int num)
{
	(void)num;
	rl_on_new_line();
	rl_redisplay();
	write(2, "  \b\b", 4);
}
