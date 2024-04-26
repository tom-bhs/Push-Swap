/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombihoues <tombihoues@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:48:22 by tombihoues        #+#    #+#             */
/*   Updated: 2024/04/26 11:53:16 by tombihoues       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void rotate(t_stack *stack)
{
    t_node *first, *last;

    if (stack->top == NULL || stack->top->next == NULL)
        return;

    first = stack->top;
    last = stack->top;


while (last->next != NULL)
{
    last =last->next;
}

stack->top = first->next;
first->next = NULL;
last->next = first;
}