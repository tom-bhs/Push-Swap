/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombihoues <tombihoues@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:41:38 by tombihoues        #+#    #+#             */
/*   Updated: 2024/04/26 11:42:21 by tombihoues       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void push(t_stack *from, t_stack *to)
{
    t_node *temp;

    if (from -> top == NULL)
        return;
    
    temp = from -> top;
    from ->top = from->top->next;
    temp->next = to->top;
    to ->top = temp;
}