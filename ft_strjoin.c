/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jesmith <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/21 13:02:24 by jesmith       #+#    #+#                 */
/*   Updated: 2019/02/08 16:32:35 by jesmith       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*new;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	new = (char *)ft_memalloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (*s1 != '\0')
	{
		new[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		new[i] = *s2;
		i++;
		s2++;
	}
	new[i] = 0;
	return (new);
}
