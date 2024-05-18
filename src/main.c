/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:41:41 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/18 19:15:54 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_stack a;
	t_stack b;

	if (argc < 2)
		return (0);
	
	init_stack(&a, argc -1);
	init_stack(&b, argc -1);

	parse_args(&a, argc, argv);


	//pour afficher la pile pour verif le parsing
	for (int i = 0; i < a.size; i++)
		printf ("%d", a.data[i]);
	printf("\n");
	//boucle while et ft_printf

	push_swap(&a, &b);

	free(a.data);
	free(b.data);

	return (0);
}