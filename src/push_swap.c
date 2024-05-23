/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:36:43 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/23 22:42:36 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size -1)
	{
		if (a->data[i] > a->data[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	push_swap(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	size;
	int	i;
	int	j;

	max_bits = get_max_bits(a);
	size = a->size;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (get_bit(a->data[0], i) == 0)
			{
				pb(a, b);
				write(1, "pb\n", 3);
			}
			else
			{
				ra(a);
				write(1, "ra\n", 3);
			}
			j++;
		}
		while (b->size > 0)
		{
			pa(a, b);
			write(1, "pa\n", 3);
		}
		i++;
	}
}


// void push_swap(t_stack *a, t_stack *b)
// {
    // int max_bits = get_max_bits(a);
    // int size = a->size;
// 
    // for (int i = 0; i < max_bits; i++)
    // {
        // int num_pushes = 0;
        // for (int j = 0; j < size; j++)
        // {
            // if ((a->data[0] >> i) & 1)
            // {
                // ra(a);
                // write(1, "ra\n", 3);
            // }
            // else
            // {
                // pb(a, b);
                // write(1, "pb\n", 3);
                // num_pushes++;
            // }
        // }
        // while (num_pushes--)
        // {
            // pa(a, b);
            // write(1, "pa\n", 3);
        // }
    // }
// }
// 
