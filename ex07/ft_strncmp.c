/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisiah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:05:52 by cisiah            #+#    #+#             */
/*   Updated: 2019/06/11 16:59:07 by cisiah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && (n - 1))
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}