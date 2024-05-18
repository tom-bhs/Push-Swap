/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:41:31 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/18 19:15:29 by tbihoues         ###   ########.fr       */
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

    //mettre boucle while
    for (i = 1; i < argc; i++)
    {
        a->data[a->size] = atoi(argv[i]);
        a->size++; 
    }
}