/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:03:23 by ychihab           #+#    #+#             */
/*   Updated: 2022/05/31 20:11:26 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
	{
		ptr = 0;
		*range = ptr;
		return (0);
	}
	i = 0;
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (-1);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (i);
}
//#include <stdio.h>
//int     main(void)
//{
//    int i = 0;
//    int max = 24;
//    int min = 5;
//    int range = max - min;
//    int     *tab;
//    printf("%d", ft_ultimate_range(&tab, min, max));
//    return (0);
//}
