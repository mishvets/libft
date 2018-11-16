/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshvets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:20:56 by mshvets           #+#    #+#             */
/*   Updated: 2018/10/31 17:10:43 by mshvets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *strptr)
{
	int					i;
	int					sign;
	unsigned long int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (ft_isspace(strptr[i]))
		i++;
	if (strptr[i] == '+')
		i++;
	else if (strptr[i] == '-')
	{
		i++;
		sign = -1;
	}
	while (ft_isdigit(strptr[i]))
		num = num * 10 + strptr[i++] - '0';
	if (num > 9223372036854775807 && sign == 1)
		return (-1);
	else if (num > 9223372036854775807)
		return (0);
	return (num * sign);
}
