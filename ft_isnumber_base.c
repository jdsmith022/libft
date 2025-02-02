/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isnumber_base.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jessicasmith <jessicasmith@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/13 21:02:41 by jessicasmit    #+#    #+#                */
/*   Updated: 2020/02/05 16:31:38 by jesmith       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_isnumber_base(char *str, int base)
{
	size_t		index;
	size_t		digits;

	index = 0;
	digits = 0;
	while (ft_iswhitespace(str[index]))
		index++;
	if (base != 10 && ft_has_prefix(&str[index], base) == 0)
		return (0);
	if (base == 2 || base == 16)
		index += 2;
	else if (base == 8)
		index++;
	else if (base == 10 && (str[index] == '-' || str[index] == '+'))
		index++;
	while (ft_isdigit_base(str[index], base) >= 0)
	{
		index++;
		digits++;
	}
	if (str[index] == '\0' && digits)
		return (1);
	return (0);
}
