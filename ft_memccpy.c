/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshvets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:00:56 by mshvets           #+#    #+#             */
/*   Updated: 2018/10/31 16:30:23 by mshvets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destptr, const void *srcptr, int ch, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char*)srcptr)[i] == (unsigned char)ch)
		{
			((unsigned char*)destptr)[i] = ((unsigned char*)srcptr)[i];
			return (&destptr[i + 1]);
		}
		((unsigned char*)destptr)[i] = ((unsigned char*)srcptr)[i];
		i++;
	}
	return (NULL);
}
