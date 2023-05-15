/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:01:39 by ychihab           #+#    #+#             */
/*   Updated: 2022/05/31 21:11:06 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
	{
		ptr = 0;
		return (ptr);
	}
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (0);
	while (min < max)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
//#include <stdio.h>
//int main()
//{
//	int min = -6;
//	int max = 5;
//	int range = max-min;
//	int i = 0;
//	int tab[i];
//	*tab = ft_range(min,max);
//	{
//		while(i < range)
//		{
//			printf("%d | ", tab[i]);
//			i++;
//		}
//	}
//	return (0);
//}
