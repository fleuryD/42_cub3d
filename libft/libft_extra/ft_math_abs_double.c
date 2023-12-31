/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_abs_double.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfleury <dfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:14:03 by dfleury           #+#    #+#             */
/*   Updated: 2023/07/06 10:47:58 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

double	ft_math_abs_double(double dbl)
{
	if (dbl < 0)
		return (-dbl);
	return (dbl);
}
