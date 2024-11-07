/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:08:20 by juanmar2          #+#    #+#             */
/*   Updated: 2024/11/07 13:40:22 by juanmar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

/*############################# FUNCTIONS ####################################*/

int	print_char(int c);
int	print_str(char *str);

#endif
