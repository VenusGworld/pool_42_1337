/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:32:56 by ychihab           #+#    #+#             */
/*   Updated: 2022/05/16 10:09:23 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 0;
	size -= 1;
	while (i < size)
	{
		rev = tab[i];
		tab[i] = tab[size];
		tab[size] = rev;
		i++;
		size--;
	}
}
