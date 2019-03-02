/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothraven <gothraven@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:41:00 by gothraven         #+#    #+#             */
/*   Updated: 2018/09/03 20:14:54 by gothraven        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char * format, ...)
{
	va_list args;
	int done;

	va_start (args, format);
	done = ft_vfprintf(STDOUT, format, args);
	va_end (args);
	return (done);
}


int main(int argc, char const *argv[])
{
	ft_printf("print: %0.7d and %2s", 2, "test");
	return 0;
}
