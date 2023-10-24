/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:18:11 by migenc            #+#    #+#             */
/*   Updated: 2023/10/21 16:43:50 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	while (n--)
	{
		((unsigned char *) dst)[n] = ((unsigned char *) src)[n];
	}
	return (dst);
}

/* 

int main()
{
	char dst[] = "1234";
	const char *src = "asdfh";
	size_t n = 5;
	printf("%s", ft_memcpy(dst, "678910", 5));
}

*/ 