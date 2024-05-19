/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:41:31 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/19 19:19:01 by tbihoues         ###   ########.fr       */
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