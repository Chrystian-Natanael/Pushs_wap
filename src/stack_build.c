/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_build.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:20:17 by cnatanae          #+#    #+#             */
/*   Updated: 2024/03/20 09:09:39 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_build(t_push *push, char **argv)
{
	t_element	*new;
	int			idx;
	int			odx;
	char		**args;
	int			*nbr;

	idx = 0;
	while (argv[++idx])
	{
		odx = -1;
		args = ft_split(argv[idx], ' ');
		while (args[++odx])
		{
			nbr = ft_calloc(1, sizeof(int));
			*nbr = ft_atoi(args[odx]);
			new = ft_lstnewelement((void *)nbr);
			if (!push->stacks.stack_a)
				create_lst(new, &push->stacks.stack_a);
			else
				ft_dolstadd_back(&push->stacks.stack_a, new);
		}
		ft_free_split(args);
	}
}
