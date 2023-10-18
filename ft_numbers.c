/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:18:05 by prossi            #+#    #+#             */
/*   Updated: 2023/10/18 19:11:47 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h> 
# include <stdio.h>

void	ft_putchar_length(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}
void	ft_ptnumber(int n, int *length)
{
	long	num;
	num = n;

	if(num < 0)
	{
		ft_putchar_length('-', length);
		ft_ptnumber(num * -1, length);
	}
	else
	 	if(num >= 10)
		{
			ft_ptnumber(num / 10, length);
			ft_ptnumber(num % 10, length);
		}
		else
			ft_putchar_length(num + '0', length);
}
void	ft_unsigned_int(unsigned int num, int *length)
{
	if (num >= 10)
		ft_unsigned_int(num / 10, length);
	ft_putchar_length(num % 10 + '0', length);
}


void	ft_pthexa(unsigned long long num, char *base, int *length)
{
	if (num >= 16)
	{
		ft_pthexa(num / 16, base, length);
		ft_pthexa(num % 16, base, length);
	}
	else
		ft_putchar_length(base[num], length);
}

/* int main(void)
{
	int n = -44534376;
	unsigned int num = 44564;
	int length = 0;
	int *i = &length;

	ft_ptnumber(n, i);
	printf("\n" "Length: %d\n", length);
	printf("\n\n");
	ft_unsigned_int(num, i);
	printf("\n" "Length: %d\n", length);
} */