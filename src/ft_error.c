/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:06:26 by tbihoues          #+#    #+#             */
/*   Updated: 2024/05/23 18:26:58 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// void	check_space(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == ' ')
// 			return ;
// 		i++;
// 	}
// 	printf("Error\n"); //ft_printf
// }

int	error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	if_not_number(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' ||str[i] == '+')&& ft_isdigit(str[i + 1]))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error();
		i++;
	}
}