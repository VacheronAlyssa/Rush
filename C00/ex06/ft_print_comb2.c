/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avachero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:16:25 by avachero          #+#    #+#             */
/*   Updated: 2021/06/30 17:24:03 by avachero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while(a <= 99)
	{
		b = a+1;
		while(b <=99)
		{
			ft_putchar(a/10 +'0');
			ft_putchar(a%10 + '0');
			ft_putchar(' ');
			ft_putchar(b/10 + '0');
			ft_putchar(b%10 + '0');

			if (a <98)
			   write(1, ", ", 2);
		b++;
		}a++;
	}
}	