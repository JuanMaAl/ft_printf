/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:46:36 by juanmar2          #+#    #+#             */
/*   Updated: 2024/11/08 15:07:20 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

static int	length_address(unsigned long ptr)
{
	int	i;

	i = 0;
	while (ptr / 16 > 0)
	{
		i++;
		ptr /= 16;
	}
	return (i);
}

int	print_ptr(void *ptr)
{
	char				*set;
	int					i;
	int					counter;
	unsigned long		n;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	i = length_address((unsigned long)ptr);
	counter = i + 3;
	n = 1;
	set = "0123456789abcdef";
	while (i > 0)
	{
		n *= 16;
		i--;
	}
	write(1, "0x", 2);
	while (n > 0)
	{
		write(1, &set[((unsigned long)ptr / n) % 16], 1);
		n /= 16;
	}
	return (counter);
}

/*int	main(void)
{
	int	n = 42;
	int	*ptr = &n; 
	int	*ptr2 = NULL;
	char	*ptr3 = "Hola mundo";
	char	*ptr4 = NULL;
	print_ptr(ptr);
	printf("\n");
	printf("%p\n", ptr);
	printf("%d\n", print_ptr(ptr));
	printf("%d\n", printf("%p", ptr));
	print_ptr(ptr2);
	printf("\n");
	printf("%p\n", ptr2);
	printf("%d\n", print_ptr(ptr2));
	printf("%d\n", printf("%p", ptr2));
	printf("%d\n", print_ptr(ptr3));
	printf("%d\n", printf("%p", ptr3));
	printf("%d\n", print_ptr(ptr4));
	printf("%d\n", printf("%p", ptr4));
	return (0);
}*/
