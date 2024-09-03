/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <sqbuelez@42amman.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:37:18 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/09/02 22:58:49 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h> // For malloc, free, exit
# include <string.h> // For size_t
# include <unistd.h> // For write, close, read

int		ft_isascii(int i);
int		ft_isprint(int i);
int		ft_isdigit(int i);
int		ft_isalpha(int i);
int		ft_isalnum(int i);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	*ft_memset(void *ptr, int value, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memchr(const void *ptr, int value, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_bzero(void *ptr, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
