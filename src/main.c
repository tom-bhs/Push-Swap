/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tombihoues <tombihoues@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:33:24 by tombihoues        #+#    #+#             */
/*   Updated: 2024/04/26 23:45:52 by tombihoues       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;

	if (argc < 2)
	{
		fprintf(stderr, "Use: %s num1, 2, 3 ....\n", argv[0]);
		return (1);
	}

	stack_a = initialize_stack();
	stack_b = initialize_stack();

	if (!fill_stack(stack_a, argc, argv))
	{
		fprintf(stderr, "Error: C'est pas valide\n");
		return (1);
	}

	sort_stack(stack_a, stack_b);

	print_operations();

	free_stack(stack_a);
	free_stack(stack_b);

	return (0);
}
