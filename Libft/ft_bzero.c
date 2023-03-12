/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalvett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:55:56 by fsalvett          #+#    #+#             */
/*   Updated: 2022/10/13 10:56:01 by fsalvett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{	
	size_t	i;
	char	*erase;

	erase = s;
	i = 0;
	while (i < n)
	{
		erase[i] = '\0';
		i++;
	}
}