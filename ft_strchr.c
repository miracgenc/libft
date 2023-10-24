/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:08:11 by migenc            #+#    #+#             */
/*   Updated: 2023/10/21 20:08:12 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*word;

	word = (unsigned char *)s;
	while (*word)
	{
		if (*word == (unsigned char)c)
			return ((char *)word);
		word++;
	}
	if (*word == (unsigned char)c)
		return ((char *)word);
	return (NULL);
}
