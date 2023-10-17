/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <nbiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:08:56 by rmidou            #+#    #+#             */
/*   Updated: 2023/10/17 16:55:05 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <libft.h>

char	*addc(char *str, char c, int *i);
char	*adds(char *str, char *c, int *i);
char	*arg(char *str, char *input, va_list params, int *i);
char	*ft_convert_base(unsigned int nbr, char *base_to);
char	*ft_itoau(unsigned int n, int *i);
char	*ft_putptr(unsigned long long int n, char *str, int *i);
int		ft_printf(const char *s, ...);
int		ft_hexalen(unsigned long long int n);

#endif