/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:29:33 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/24 21:13:35 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
/* 
int 	main(void)
{
	ft_putchar('L');
	return (0);
}

 */