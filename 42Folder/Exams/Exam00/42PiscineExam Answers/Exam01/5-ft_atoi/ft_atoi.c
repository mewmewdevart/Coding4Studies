/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:57:07 by larcrist          #+#    #+#             */
/*   Updated: 2023/05/24 19:26:21 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

static	int	ft_isspace(const char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	symbol;
	int	convert;

	index = 0;
	symbol = 1;
	convert = 0;
	if (!str)
		return (0);
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			symbol *= -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		convert = (convert * 10) + (str[index] - 48);
		index++;
	}
	return (symbol * convert);
}
/*
int	main(void)
{
	char str[] = "99";
	int number;

	number = ft_atoi(str);
	number += 1;
	printf("%d\n", number);
	return (0);
} */
