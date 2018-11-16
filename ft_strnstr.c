/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshvets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:13:07 by mshvets           #+#    #+#             */
/*   Updated: 2018/11/08 15:26:40 by mshvets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;

	i = 0;
	if (!*str && n < 1)
		return (NULL);
	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		if (*str == to_find[i])
		{
			while (str[i] == to_find[i] && n - 1 < i)
			{
				++i;
				if (to_find[i] == '\0')
					return ((char *)str);
				else if (str[i] == '\0')
					return (NULL);
			}
			i = 0;
		}
		++str;
	}
	return (NULL);
}
