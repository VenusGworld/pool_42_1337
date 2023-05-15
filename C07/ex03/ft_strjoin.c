/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:49:52 by ychihab           #+#    #+#             */
/*   Updated: 2022/05/31 21:14:20 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	while (*str)
		str++;
	return (*str);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	strlen_sum(char **strs, int size, char *sep)
{
	int	len_sum;
	int	i;
	int	j;

	i = 0;
	j = size;
	len_sum = 0;
	while (j && strs[i])
	{
		len_sum += ft_strlen(strs[i]);
		if (i < size -1)
			len_sum += ft_strlen(sep);
		i++;
		j--;
	}
	return (len_sum);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = size;
	if (size <= 0)
		return (0);
	ptr = malloc(strlen_sum(strs, size, sep) + 1);
	if (!ptr)
		return (0);
		ptr[0] = 0;
	while (j && strs[i])
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	printf("%s", ft_strjoin(argc - 1, &argv[1], "@"));
//	return (0);
//}
