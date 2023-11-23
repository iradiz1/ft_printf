/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzibari <hzibari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:11:52 by hzibari           #+#    #+#             */
/*   Updated: 2023/11/21 14:55:53 by hzibari          ###   ########.fr       */
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
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putchar_fd(char c, int fd);
int		numbr_printer(int i);
char	*ft_itoa(int n);
int		string_printer(char *p);
int		unsigned_printer(unsigned int i);
int		hex_printer(const char cons, unsigned int i);
int		adress_printer(uintptr_t i);

#endif