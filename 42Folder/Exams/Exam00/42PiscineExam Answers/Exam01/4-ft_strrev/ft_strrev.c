/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:17:40 by larcrist          #+#    #+#             */
/*   Updated: 2023/05/24 17:43:18 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
´	int	tmp;

	len = 0;
	while(str[len] != '\0')
		len++;
	i = 0;
	while(i < len/2)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
	}
	return (str);
}

int	main(void)
{
	char s1[] = "larissa";

	ft_strrev(s1);
	printf("%s", s1);
	return (0);
}

