/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:36:43 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/19 19:16:16 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int is_sorted(t_stack *a)
{
	int i;

	i = 0;
	while (i < a->size -1)
	{
		if (a->data[i] > a->data[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void push_swap(t_stack *a, t_stack *b)
{
	while (!is_sorted(a))
	{
		if (a->data[0] > a->data[1])
		{
			sa(a);
			write(1, "sa\n", 3);
		}
		else
		{
			pb(a, b);
			write(1, "pb\n", 3);
		}
	}

	while (b->size > 0)
	{
		pa(a, b);
		write(1, "pa\n", 3);
	}
}
