/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_stdout.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flegg <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:00:43 by flegg             #+#    #+#             */
/*   Updated: 2021/09/15 22:00:43 by flegg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

static void	add_redirect_stdout(char *path, t_cmd *tmp_cmd)
{
	t_redirect	*r;

	r = new_redirect_data(path);
	r->this_redirect_fd = -1;
	r->fd_to_change = 1;
	r->flags = O_WRONLY | O_CREAT | O_TRUNC;
	r->mode = 0777;
	add_redirect(tmp_cmd, r);
}

int	parser_stdout(t_parser_data *pdata, t_list **param)
{
	if (check_for_data_arg((*param)->next, 0))
		return (258);
	if (check_and_remove_quotes((*param)->next->content))
		return (258);
	add_redirect_stdout((*param)->next->content, pdata->tmp_cmd);
	*param = (*param)->next;
	return (0);
}
