/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kvodorez <kvodorez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 18:08:48 by kvodorez      #+#    #+#                 */
/*   Updated: 2021/12/17 19:11:21 by kvodorez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_check_type(const char *fmt, va_list args, int num_printed);
int		ft_conversion(char vartype, va_list args, int num_printed);
int		ft_count_digit_num_long(unsigned long n, int base);
int		ft_count_digit_num(unsigned int n, int base);
int		ft_create_pointer_address(unsigned long addr_ptr);
int		ft_dec_to_hex(unsigned int i_dec, char vartype);
int		ft_is_in_the_set(char c, char const *set);
int		ft_put_unsigned_int_fd(unsigned int n, int fd);
int		ft_printf(const char *fmt, ...);
int		ft_put_unsigned_int_fd(unsigned int n, int fd);
int		ft_putnbr_fd_n(int n, int fd);
int		ft_putstr_fd_n(char *s, int fd);
char	ft_translate_hex(unsigned int i_dec, char vartype);
int		ft_uintptr_to_hex(unsigned long i_ptr);
int		ft_wrap_c(va_list args);
int		ft_wrap_d_i(va_list args);
int		ft_wrap_p(va_list args);
int		ft_wrap_s(va_list args);
int		ft_wrap_u(va_list args);
int		ft_wrap_x(va_list args, char vartype);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);

#endif
