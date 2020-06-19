/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoloi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:03:23 by thmoloi           #+#    #+#             */
/*   Updated: 2020/06/19 13:44:03 by thmoloi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar( char c)
{ 
	write (1, &c, 1);
	return (0);
}
void ft_print_alphabet(void)
{
	char c;
	c='a';
	while ( c<= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
int main (){
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
	

