/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychihab <ychihab@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:45:15 by ychihab           #+#    #+#             */
/*   Updated: 2022/05/19 10:15:14 by ychihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)

{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] <= 'z' && str[0] >= 'a')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
		{
			if (!(str[i] <= 'Z' && str[i] >= 'A'))
			{
				if (!(str[i] <= 'z' && str[i] >= 'a'))
				{
					if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
						str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	i++;
	}
	return (str);
}
