/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_bit_value.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jessicasmith <jessicasmith@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/02 09:36:55 by jessicasmit    #+#    #+#                */
/*   Updated: 2020/02/02 09:37:29 by jessicasmit   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		get_bit_value(int start, int end, double percentage)
{
	return ((int)((1 - percentage) * start + percentage * end));
}
