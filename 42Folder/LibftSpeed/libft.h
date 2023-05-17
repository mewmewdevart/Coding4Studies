/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:15:35 by larcrist          #+#    #+#             */
/*   Updated: 2023/05/10 13:01:07 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);

size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
//char		*ft_strlcpy(char *dest, const char *src, size_t size);
//char		*ft_strlcat(char *dest, const char *src, size_t size);
//int			*ft_strcmp(const char *s1, const char *s2);
//int			ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
