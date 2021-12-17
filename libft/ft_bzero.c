/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:18:14 by jremy             #+#    #+#             */
/*   Updated: 2021/11/24 10:35:44 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *pt, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		((unsigned char *) pt)[i] = 0;
		i++;
	}
}