/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombihoues <tombihoues@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:44:00 by tombihoues        #+#    #+#             */
/*   Updated: 2024/04/26 11:48:38 by tombihoues       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void swap(t_stack *stack)
{
    t_node *first, *second;

    if (stack->top == NULL || stack->top->next == NULL)
        return;

    first = stack->top;
    second = stack->top->next;

    first->next = second->next;
    second->next = first;
    stack->top = second;
}