/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:00:31 by cnatanae          #+#    #+#             */
/*   Updated: 2024/03/05 17:56:49 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push	push;
	int		idx;

	idx = 0;
	validade_args(argc, argv, &push);
	ft_printf ("Node %d: %d and your type is %d\n",idx, push.a->value, push.a->type);
	push.a = push.a->next;
	idx++;
	while (push.a->type != TOP)
	{
		ft_printf ("Node %d: %d and your type is %d\n",idx, push.a->value, push.a->type);
		push.a = push.a->next;
		idx++;
	}
	return (0);
}

