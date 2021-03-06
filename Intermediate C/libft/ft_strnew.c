/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hagalsty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:00:20 by hagalsty          #+#    #+#             */
/*   Updated: 2021/02/09 17:00:26 by hagalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = malloc(sizeof(char) * size + 1);
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
