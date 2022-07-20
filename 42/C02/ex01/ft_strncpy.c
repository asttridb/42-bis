/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:16:07 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/20 09:41:10 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*strncpy(char *dest, const char *src, unsigned int n)
{
	int 	n;
	unsigned int	u_n;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
}

