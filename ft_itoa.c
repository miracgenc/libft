/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:43:33 by migenc            #+#    #+#             */
/*   Updated: 2023/10/24 18:46:39 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	c;

	if (n == 0)
		return (1);
	c = 0;
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static void	ft_strrev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	i;

	is_neg = (n < 0);
	str = (char *) malloc((ft_count_digit(n) + is_neg + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (n == 0)
	{
		str[0] = '0';
		i++;
	}
	while (n != 0)
	{
		str[i++] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (is_neg)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
