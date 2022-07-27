/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbosnak <bbosnak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:38:58 by bbosnak           #+#    #+#             */
/*   Updated: 2021/12/07 21:39:40 by bbosnak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_is_letter(*str))
			return (0);
		str++;
	}
	return (1);
}
