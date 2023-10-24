/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 20:12:30 by migenc            #+#    #+#             */
/*   Updated: 2023/10/22 20:05:15 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*nw;
	size_t	len;

	len = ft_strlen(s) + 1;
	nw = (char *)malloc(sizeof(*nw) * len);
	if (!nw)
		return (NULL);
	return ((char *)ft_memcpy(nw, s, len));
}
