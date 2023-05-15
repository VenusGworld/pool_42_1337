/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:14:17 by ychihab           #+#    #+#             */
/*   Updated: 2022/05/31 17:55:35 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	while (*str)
		str++;
	return (*str);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * ft_strlen(src));
	if (ptr == NULL )
		return (0);
	while (*src)
	{
		ptr[i] = *src++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	char *str;
//
//	if (argc == 2)
//	{
//		str = ft_strdup(argv[1]);
//		printf("%s\n", str);
//	}
//	return (0);
//}
