/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 14:24:31 by snechaev          #+#    #+#             */
/*   Updated: 2019/03/05 14:26:04 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_print_mem(unsigned char *str, size_t size)
{
	while (size)
	{
		printf("%02x ", *str);
		str++;
		size--;
	}
}
