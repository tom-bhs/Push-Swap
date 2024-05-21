/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:41:41 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/21 23:43:05 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	//check_space(argv[1]);
	init_stack(&a, argc -1);
	init_stack(&b, argc -1);
	parse_args(&a, argc, argv); //pour afficher la pile pour verif le parsing
	i = 0;
	while (i < a.size)
	{
		printf("%d", a.data[i]);
		i++;
	}
	printf("\n"); //ft_printf
	push_swap(&a, &b);
	free(a.data);
	free(b.data);
	return (0);
}
