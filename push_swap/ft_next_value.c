/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:51:48 by ablondel          #+#    #+#             */
/*   Updated: 2021/03/10 16:43:31 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	ft_next_value(char *av, int *i)
{
	int j;

	j = *i;
	if (av[j] == '\0')
		return ;
	while (av[j] && ((av[j] >= '0' && av[j] <= '9') || av[j] == '-'))
		j++;
	while (av[j] && (av[j] == ' ' || av[j] == '\t'))
		j++;
	*i = j;
}
