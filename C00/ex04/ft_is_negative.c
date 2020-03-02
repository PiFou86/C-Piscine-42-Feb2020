/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:07:16 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/05 12:07:20 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char test;

	if (n >= 0)
	{
		test = 'P';
	}
	else
	{
		test = 'N';
	}
	write(1, &test, sizeof(test));
}
