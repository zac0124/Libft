/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:53:07 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 12:32:08 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for a digit (0 through 9).*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
