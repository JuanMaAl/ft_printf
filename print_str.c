/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:24:57 by juanmar2          #+#    #+#             */
/*   Updated: 2024/11/07 13:36:57 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int a;
	int b;
	print_str("Hola mundo");
	print_str("\n");
	printf("%s\n", "Hola mundo");
	print_str("");
	print_str("\n");
	printf("%s\n", "");
	a = print_str("Hola mundo");
	b = printf("%s", "Hola mundo");
	printf("a:%d b:%d\n", a, b);
	return (0);
}*/
