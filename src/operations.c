/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:40:09 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/19 18:37:45 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void sa(t_stack *a)
{
	if (a-> size > 1)
	{
		int temp = a->data[0];
		a->data[0] = a->data[1];
		a->data[1] = temp;
	}
}

void sb(t_stack *b)
{
	if (b->size > 1)
	{
		int temp = b->data[0];
		b->data[0] = b->data[1];
		b->data[1] = temp;
	}
}

void ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void pa(t_stack *a, t_stack *b)
{
	if (b->size > 0)
	{
		int i;

		i = a->size;
		while(i > 0)
		{
			a->data[i] = a->data[i - 1];
			i--;
		}
		a->data[0] = b->data[0];

		i = 0;
		while(i < b->size - 1)
		{
			b->data[i] = b->data[i + 1];
			i++;
		}
		a->size++;
		b->size--;
	}
}

void pb(t_stack *a, t_stack *b)
{
	if (a->size > 0)
	{
		int i;

		i = b->size;
		while(i > 0)
		{
			b->data[i] = b->data[i - 1];
			i--;
		}
		b->data[0] = a->data[0];

		i = 0;
		while (i < a->size -1)
		{
			a->data[i] = a->data[i + 1];
			i++;
		}
		b->size++;
		a->size--;
	}
}

void ra(t_stack *a)
{
	if (a->size > 1)
	{
		int temp;
		int i;

		temp = a->data[0];
		i = 0;
		while(i < a->size - 1)
		{
			a->data[i] = a->data[i + 1];
			i++;
		}
		a->data[a->size - 1] = temp;
	}
}

void rb(t_stack *b)
{
	if (b->size > 1)
	{
		int temp = b->data[0];
		for (int i = 0; i < b->size -1; i++)
			b->data[i] = b->data[i + 1];
		b->data[b->size - 1] = temp;
	}
}

void rr(t_stack *a,t_stack *b)
{
	ra(a);
	rb(b);
}

void rra(t_stack *a)
{
	if (a->size > 1)
	{
		int temp = a->data[a->size - 1];
		for (int i = a->size - 1; i > 0; i--)
			a->data[i] =a->data[i - 1];
		a->data[0] = temp;
	}
}

void rrb(t_stack *b)
{
	if (b->size > 1)
	{
		int temp = b->data[b->size - 1];
		for (int i = b->size - 1; i > 0; i--)
			b->data[i] = b->data[i - 1];
		b->data[0] = temp;
	}
}

void rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
