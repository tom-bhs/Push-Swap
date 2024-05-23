/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:35:42 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/23 21:46:09 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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


//		GENERAL		//


int		ft_isdigit(int i);
int		ft_atoi(const char *str);
int		get_max_bits(t_stack *stack);
int		get_bit(int num, int bit);
void	init_stack(t_stack *stack, int size);
void	push_swap(t_stack *a, t_stack *b);
void	parse_args(t_stack *a, int argc, char **argv);


//		OPERATIONS		//


void sa(t_stack *a);
void sb(t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rr(t_stack *a,t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void rrr(t_stack *a, t_stack *b);


//		ERROR		//


int		print_error(void);
void	check_space(char *str);
void	if_not_number(char *str);
void	if_doubles(int *data, int size);

#endif