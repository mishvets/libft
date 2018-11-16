/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshvets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:43:51 by mshvets           #+#    #+#             */
/*   Updated: 2018/10/31 18:11:52 by mshvets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *strptr)
{
	char			*new;
	unsigned long	i;

	i = 0;
	new = (char *)malloc(sizeof(*new) * (ft_strlen(strptr) + 1));
	if (new == NULL)
		return (NULL);
	while (i <= ft_strlen(strptr))
	{
		new[i] = strptr[i];
		i++;
	}
	return (new);
}
