/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bit_print.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jesmith <jesmith@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/08 15:25:14 by jesmith        #+#    #+#                */
/*   Updated: 2020/01/08 15:47:59 by jesmith       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bit_print(unsigned int number, size_t size)
{
	size_t			index;
	unsigned int	max_pow;
	size_t			count;

	index = 0;
	count = 0;
	max_pow = 1U << (size * 8 - 1);
	while (index < size)
	{
		ft_putnbr(number & max_pow ? 1 : 0);
		number <<= 1U;
		count++;
		if (count % 4 == 0)
			ft_putchar(' ');
		index++;
	}
	ft_putchar('\n');
}
