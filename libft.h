/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshvets <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:31:50 by mshvets           #+#    #+#             */
/*   Updated: 2018/11/08 15:26:44 by mshvets          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	*ft_memset(void *buf, int ch, size_t count);
void	ft_bzero(void *buf, size_t count);
void	*ft_memcpy(void *destptr, const void *srcptr, size_t count);
void	*ft_memccpy(void *destptr, const void *srcptr, int ch, size_t count);
void	*ft_memmove(void *destptr, const void *srcptr, size_t count);
void	*ft_memchr(const void *buf, int ch, size_t count);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t count);
size_t	ft_strlen(const char *strptr);
char	*ft_strdup(const char *strptr);
char	*ft_strcpy(char *destptr, const char *srcptr);
char	*ft_strncpy(char *destptr, const char *srcptr, size_t n);
char	*ft_strcat(char *destptr, const char *srcptr);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_atoi(const char *strptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
