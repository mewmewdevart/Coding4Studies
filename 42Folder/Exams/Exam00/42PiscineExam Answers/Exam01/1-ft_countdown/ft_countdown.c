/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:55:56 by larcrist          #+#    #+#             */
/*   Updated: 2023/05/24 15:02:03 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char	nb;

	nb = '9';
	while (nb >= '0')
	{
		write(1, &nb, 1);
		nb--;
	}
	return ;
}

int	main(void)
{
	ft_countdown();
	return (0);
}
