/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenjot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:16:30 by jmenjot           #+#    #+#             */
/*   Updated: 2022/09/24 15:18:25 by jmenjot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)

{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 'A' || str[i] > 'Z'
				&& str[i] < 'a' || str[i] > 'z' )
		{
			return(0);
		}
		i++;
	}
	return(1);
}

int	main(void)

{
	printf("%d\n", ft_str_is_alpha("34"));
	return(0);
}
