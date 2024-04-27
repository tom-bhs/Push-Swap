/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombihoues <tombihoues@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:53:26 by tombihoues        #+#    #+#             */
/*   Updated: 2024/04/26 11:58:20 by tombihoues       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void reverse_rotate(t_stack *stack)
{
    t_node *second_last, *last;

    if (stack->top == NULL || stack->top->next == NULL)
        return;
    
    second_last = NULL;
    last = stack->top;

    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }

    second_last->next = NULL;
    last->next = stack->top;
    stack->top = last;
}