/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisiah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:05:52 by cisiah            #+#    #+#             */
/*   Updated: 2019/06/11 16:47:22 by cisiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *ret;
	char *pattern;

	while (*str)
	{
		ret = str;
		pattern = to_find;
		while (*str == *pattern && *str && pattern)
		{
			str++;
			pattern++;
		}
		if (!*pattern)
			return (ret);
		str = ret + 1;
	}
	return (0);
}
