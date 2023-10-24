/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:48:15 by migenc            #+#    #+#             */
/*   Updated: 2023/10/24 20:06:05 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	char	*nw;

	i = 0;
	k = 0;
	nw = (char *)malloc(sizeof(char)
			*((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (nw == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		nw[i] = s1[i];
		i++;
	}
	while (k < ft_strlen(s2))
	{
		nw[i + k] = s2[k];
		k++;
	}
	nw[i + k] = '\0';
	return (nw);
}
