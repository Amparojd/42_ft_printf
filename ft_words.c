/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:16:11 by ampjimen          #+#    #+#             */
/*   Updated: 2023/10/19 17:51:30 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_length(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

void	ft_putstr(char *s, int *length)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		(*length) += 6;
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar_length(s[i], length);
		i++;
	}
}

/* int main(void)
{
	char *a ="hola";
	//int *i = malloc(sizeof(int));
	int length = 0;
	int *i = &length;

	// if (i == NULL)
	//{
		//printf("Error, no se pudo asignar memoria");
		//return (0);
	//} 
	ft_putstr(a, i);
	printf("\n" "Length: %d\n", length);
	return 0;
}
*/