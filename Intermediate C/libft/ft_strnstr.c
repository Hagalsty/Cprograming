/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagalsty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:14:57 by hagalsty          #+#    #+#             */
/*   Updated: 2021/01/25 23:14:59 by hagalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *haystack,
	const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[j])
		return (char*)(haystack);
	while (haystack[i] && needle[j] && len)
	{
		if (haystack[i] == needle[j])
			j++;
		else if (j)
		{
			j = 0;
			continue;
		}
		i++;
		len--;
	}
	if (!needle[j])
		return (char*)(haystack + i - j);
	return (0);
}
