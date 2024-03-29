/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:35:42 by tbihoues          #+#    #+#             */
/*   Updated: 2024/01/31 19:27:06 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include <unistd.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct	t_stacks
{
	struct	t_stack_a *head_a;
	struct	t_stack_b *head_b;
}			t_stacks;

int		main(int argc, char **argv);
void	error(int argc, char **argv);

#endif