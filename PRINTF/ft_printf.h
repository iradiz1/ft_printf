/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzibari <hzibari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:11:52 by hzibari           #+#    #+#             */
/*   Updated: 2023/11/28 11:49:14 by hzibari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		char_printer(int c);
int		ft_printf(const char *str, ...);
int		numbr_printer(int i);
char	*ft_itoa(int n);
int		string_printer(char *p);
int		unsigned_printer(unsigned int i);
int		hex_printer(const char cons, unsigned int i);
int		adress_printer(uintptr_t i);

#endif