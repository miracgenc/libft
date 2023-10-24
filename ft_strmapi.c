/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:49:51 by migenc            #+#    #+#             */
/*   Updated: 2023/10/24 19:51:22 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	len = (unsigned int)ft_strlen(s);
	str = (char *)malloc(sizeof(char) * ((int)len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[(int)i]);
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}
