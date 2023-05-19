/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:54:15 by larcrist          #+#    #+#             */
/*   Updated: 2023/05/10 12:01:24 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;
	int	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while(str1[i] == str2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

int	main(void)
{
	char s1[] = "ABCDE";
	char s2[] = "JZ";

	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
