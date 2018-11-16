/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshvets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:22:08 by mshvets           #+#    #+#             */
/*   Updated: 2018/10/31 13:46:51 by mshvets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destptr, const void *srcptr, size_t count)
{
	size_t i;

	if ((unsigned char *)destptr <= (unsigned char *)srcptr)
	{
		ft_memcpy(destptr, srcptr, count);
	}
	else
	{
		i = count;
		while (i--)
		{
			((unsigned char *)destptr)[i] = ((unsigned char *)srcptr)[i];
		}
	}
	return (destptr);
}
