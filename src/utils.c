/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:41:31 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/21 22:23:36 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//pour initiaiser la stack 
void init_stack(t_stack *stack, int size)
{
    stack->data = (int *)malloc(sizeof(int) * size);
    if(!stack->data)
    {
        //mettre ft_printf
        printf("Error allocating memory");
        exit(EXIT_FAILURE);
    }
    stack->size = 0;
}

void parse_args(t_stack *a, int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		a->data[a->size] = atoi(argv[i]);
		a->size++;
		i++;
	}
}

int get_max_bits(t_stack *stack)
{
    int max;

    max = stack->data[0];
    for (int i = 1; i < stack->size; i++)
    {
        if (stack->data[i] > max)
        max = stack->data[i];
    }
    int max_bits;

    max_bits = 0;
    while ((max >> max_bits) != 0)
        max_bits++;
    return max_bits;
}

int get_bit(int num, int bit)
{
    return (num >> bit) & 1;
}