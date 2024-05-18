/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:35:42 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/18 19:20:12 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct	s_stack
{
	int *data;
	int size;
} t_stack;

void init_stack(t_stack *stack, int size);
void push_swap(t_stack *a, t_stack *b);
void sa(t_stack *a);
void parse_args(t_stack *a, int argc, char **argv);


//		OPERATIONS

void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);


#endif