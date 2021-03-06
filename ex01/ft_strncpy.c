/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsimelan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:26:01 by bsimelan          #+#    #+#             */
/*   Updated: 2020/06/26 16:26:20 by bsimelan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int i;
	i = 0;
	while (i < n && src[i] != '\0');
	*dest++ = *src++;;
	i++;
}
    while (i < n)
{
	(*dest + i++) = '\0';
	return (dest);
}

