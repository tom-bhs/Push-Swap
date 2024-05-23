/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:41:31 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/23 18:41:20 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	init_stack(t_stack *stack, int size) //pour initiaiser la stack 
{
	stack->data = (int *)malloc(sizeof(int) * size);
	if (!stack->data)
	{
		printf("Error allocating memory"); //ft_printf
		exit(EXIT_FAILURE); //verif si exit cest ok
	}
	stack->size = 0;
}

void	parse_args(t_stack *a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		a->data[a->size] = ft_atoi(argv[i]);
		a->size++;
		i++;
	}
}

int	get_max_bits(t_stack *stack)
{
	int	max;
	int	i;
	int	max_bits;

	max = stack->data[0];
	i = 1;
	while (i < stack->size)
	{
		if (stack->data[i] > max)
			max = stack->data[i];
		i++;
	}
	max_bits = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

int	get_bit(int num, int bit)
{
	return ((num >> bit) & 1);
}
