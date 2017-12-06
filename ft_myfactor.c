/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myfactor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:57:40 by omakovsk          #+#    #+#             */
/*   Updated: 2017/11/07 10:57:47 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_myfactor(int nb)
{
	int x;

	x = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (nb >= 1)
		{
			x = x * nb;
			nb--;
		}
		return (x);
	}
}
