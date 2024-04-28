/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombihoues <tombihoues@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:35:42 by tbihoues          #+#    #+#             */
/*   Updated: 2024/04/26 23:46:19 by tombihoues       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>


typedef struct s_node	{
	int value;
	struct s_node *next;
}	t_node;



typedef struct s_stack	{
	t_node *top;
}	t_stack;

t_stack *initialize_stack(void);
int fill_stack(t_stack *stack, int argc, char **argv);
void sort_stack(t_stack *a, t_stack *b);
void print_operations(void);
void free_stack(t_stack *stack);

#endif