/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_switch.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jesmith <jesmith@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/31 11:35:08 by jesmith        #+#    #+#                */
/*   Updated: 2019/05/31 11:36:03 by jesmith       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_switch(void **a, void **b)
{
	void *h;

	h = *a;
	*a = *b;
	*b = h;
}