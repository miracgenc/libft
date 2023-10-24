/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:16:58 by migenc            #+#    #+#             */
/*   Updated: 2023/10/20 19:42:03 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] == '\0' && (unsigned char)s2[i] == '\0')
			return (0);
		if ((unsigned char)s1[i] && (unsigned char)s2[i])
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			else if ((unsigned char)s1[i] < (unsigned char)s2[i])
				return (-1);
		}
		else if ((unsigned char)s1[i] && !((unsigned char)s2[i]))
			return (1);
		else if (!((unsigned char)s1[i]) && (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}
