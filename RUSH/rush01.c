/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avachero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:38:13 by avachero          #+#    #+#             */
/*   Updated: 2021/07/03 18:03:17 by avachero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void rush(int x, int y)
{
	int w;
	int z;
	int q;
	q=0;
	z = 0;
	w = 0;
	write(1, "/", 1);
		if (x  >=2  &&  x != 0 )
			while( w <= x-3 )
			{

				write(1, "*", 1);
					w++;
			
			}
		if( x == 1 ||  x >=2)
			write(1, "\\", 1);
		write(1, "\n", 1);
		if (y >=3)
			while(z <= y)
			{
				if (x >= 3)
					write(1, "*", 1);
					while(q <= x-3)
				{
				write(1," ", 1);
						q++;
					}
				write(1, "*", 1);
				write(1, "\n", 1);
				z++;
			}

}


int main(void)
{
	rush(5,3);
}
