/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:16:05 by ampjimen          #+#    #+#             */
/*   Updated: 2023/11/04 11:15:58 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h> 
# include <stdio.h>

void	ft_putchar_length(char c, int *length);
void	ft_putstr(char *s, int *length);

void	ft_ptnumber(int n, int *length);
void	ft_pthexa(unsigned long long num, char *base, int *length);
void	ft_unsigned_int(unsigned int num, int *length);

void	ft_check_type(va_list args, const char str, int *length);
int		ft_printf(const char *str, ...);

#endif
