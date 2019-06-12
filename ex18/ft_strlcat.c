/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisiah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 20:39:12 by cisiah            #+#    #+#             */
/*   Updated: 2019/06/11 22:52:24 by cisiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	char			*s;

	s = src;
	res = 0;
	while (*dest && size)
	{
		dest++;
		res++;
		size--;
	}
	while (*s++)
		res++;
	while (*src && size)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = *src;
	return (res);
}
