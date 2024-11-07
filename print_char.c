/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:05:55 by juanmar2          #+#    #+#             */
/*   Updated: 2024/11/07 13:23:17 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

/*int	main(void)
{
	print_char(97);
	print_char('\n');
	printf("%c\n", 97);
	print_char(-5);
	print_char('\n');
	printf("%c\n", -5);
	print_char(0);
	print_char('\n');
	printf("%c\n", 0);
	printf("%d\n", printf("%c", 97));
	printf("%d\n", print_char(97));
	return (0);
}*/
