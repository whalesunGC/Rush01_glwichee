/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   height.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atan-xi <atan-xi@student.42singapore.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:18:52 by atan-xi           #+#    #+#             */
/*   Updated: 2024/03/09 15:28:48 by atan-xi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	height(char *s)
{
	int	h;
	int	tallest;
	int	i;

	h = 1;
	i = 1;
	tallest = s[0];
	while (s[i] != '\0')
	{
		if (s[i] > tallest)
		{
			h++;
			tallest = s[i];
		}
		i++;
	}
	return (h);
}

int	main(void)
{
	printf("%d", height("1243"));
}
