/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisiah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:30:45 by cisiah            #+#    #+#             */
/*   Updated: 2019/06/11 22:51:04 by cisiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char *ret;

	ret = dest;
	while (*dest != 0 && *src != 0 && n != 0)
	{
		n--;
		*dest = *src;
		dest++;
		src++;
	}
	while (n--)
		*dest++ = 0;
	return (ret);
}
