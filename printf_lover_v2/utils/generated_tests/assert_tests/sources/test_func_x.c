/*
** charmstr@student.42.fr
*/

#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libftprintf.h"
#include "../includes/libft.h"
#include <stdio.h>
#include <assert.h>
#include "../includes/printf_lover_test_func.h"

int	test_func_x(unsigned int x)
{
setbuf(stdout, NULL);
assert(printf("-->|%-4.x|<--\n", x) == ft_printf("-->|%-4.x|<--\n", x));
assert(printf("-->|%-4.*x|<--\n", -4, x) == ft_printf("-->|%-4.*x|<--\n", -4, x));
assert(printf("-->|%-4.*x|<--\n", -3, x) == ft_printf("-->|%-4.*x|<--\n", -3, x));
assert(printf("-->|%-4.*x|<--\n", -2, x) == ft_printf("-->|%-4.*x|<--\n", -2, x));
assert(printf("-->|%-4.*x|<--\n", -1, x) == ft_printf("-->|%-4.*x|<--\n", -1, x));
assert(printf("-->|%-4.*x|<--\n", 0, x) == ft_printf("-->|%-4.*x|<--\n", 0, x));
assert(printf("-->|%-4.*x|<--\n", 1, x) == ft_printf("-->|%-4.*x|<--\n", 1, x));
assert(printf("-->|%-4.*x|<--\n", 2, x) == ft_printf("-->|%-4.*x|<--\n", 2, x));
assert(printf("-->|%-4.*x|<--\n", 3, x) == ft_printf("-->|%-4.*x|<--\n", 3, x));
assert(printf("-->|%-4.*x|<--\n", 4, x) == ft_printf("-->|%-4.*x|<--\n", 4, x));
assert(printf("-->|%-4.0x|<--\n", x) == ft_printf("-->|%-4.0x|<--\n", x));
assert(printf("-->|%-4.1x|<--\n", x) == ft_printf("-->|%-4.1x|<--\n", x));
assert(printf("-->|%-4.2x|<--\n", x) == ft_printf("-->|%-4.2x|<--\n", x));
assert(printf("-->|%-4.3x|<--\n", x) == ft_printf("-->|%-4.3x|<--\n", x));
assert(printf("-->|%-4.4x|<--\n", x) == ft_printf("-->|%-4.4x|<--\n", x));
assert(printf("-->|%-4x|<--\n", x) == ft_printf("-->|%-4x|<--\n", x));
assert(printf("-->|%-3.x|<--\n", x) == ft_printf("-->|%-3.x|<--\n", x));
assert(printf("-->|%-3.*x|<--\n", -4, x) == ft_printf("-->|%-3.*x|<--\n", -4, x));
assert(printf("-->|%-3.*x|<--\n", -3, x) == ft_printf("-->|%-3.*x|<--\n", -3, x));
assert(printf("-->|%-3.*x|<--\n", -2, x) == ft_printf("-->|%-3.*x|<--\n", -2, x));
assert(printf("-->|%-3.*x|<--\n", -1, x) == ft_printf("-->|%-3.*x|<--\n", -1, x));
assert(printf("-->|%-3.*x|<--\n", 0, x) == ft_printf("-->|%-3.*x|<--\n", 0, x));
assert(printf("-->|%-3.*x|<--\n", 1, x) == ft_printf("-->|%-3.*x|<--\n", 1, x));
assert(printf("-->|%-3.*x|<--\n", 2, x) == ft_printf("-->|%-3.*x|<--\n", 2, x));
assert(printf("-->|%-3.*x|<--\n", 3, x) == ft_printf("-->|%-3.*x|<--\n", 3, x));
assert(printf("-->|%-3.*x|<--\n", 4, x) == ft_printf("-->|%-3.*x|<--\n", 4, x));
assert(printf("-->|%-3.0x|<--\n", x) == ft_printf("-->|%-3.0x|<--\n", x));
assert(printf("-->|%-3.1x|<--\n", x) == ft_printf("-->|%-3.1x|<--\n", x));
assert(printf("-->|%-3.2x|<--\n", x) == ft_printf("-->|%-3.2x|<--\n", x));
assert(printf("-->|%-3.3x|<--\n", x) == ft_printf("-->|%-3.3x|<--\n", x));
assert(printf("-->|%-3.4x|<--\n", x) == ft_printf("-->|%-3.4x|<--\n", x));
assert(printf("-->|%-3x|<--\n", x) == ft_printf("-->|%-3x|<--\n", x));
assert(printf("-->|%-2.x|<--\n", x) == ft_printf("-->|%-2.x|<--\n", x));
assert(printf("-->|%-2.*x|<--\n", -4, x) == ft_printf("-->|%-2.*x|<--\n", -4, x));
assert(printf("-->|%-2.*x|<--\n", -3, x) == ft_printf("-->|%-2.*x|<--\n", -3, x));
assert(printf("-->|%-2.*x|<--\n", -2, x) == ft_printf("-->|%-2.*x|<--\n", -2, x));
assert(printf("-->|%-2.*x|<--\n", -1, x) == ft_printf("-->|%-2.*x|<--\n", -1, x));
assert(printf("-->|%-2.*x|<--\n", 0, x) == ft_printf("-->|%-2.*x|<--\n", 0, x));
assert(printf("-->|%-2.*x|<--\n", 1, x) == ft_printf("-->|%-2.*x|<--\n", 1, x));
assert(printf("-->|%-2.*x|<--\n", 2, x) == ft_printf("-->|%-2.*x|<--\n", 2, x));
assert(printf("-->|%-2.*x|<--\n", 3, x) == ft_printf("-->|%-2.*x|<--\n", 3, x));
assert(printf("-->|%-2.*x|<--\n", 4, x) == ft_printf("-->|%-2.*x|<--\n", 4, x));
assert(printf("-->|%-2.0x|<--\n", x) == ft_printf("-->|%-2.0x|<--\n", x));
assert(printf("-->|%-2.1x|<--\n", x) == ft_printf("-->|%-2.1x|<--\n", x));
assert(printf("-->|%-2.2x|<--\n", x) == ft_printf("-->|%-2.2x|<--\n", x));
assert(printf("-->|%-2.3x|<--\n", x) == ft_printf("-->|%-2.3x|<--\n", x));
assert(printf("-->|%-2.4x|<--\n", x) == ft_printf("-->|%-2.4x|<--\n", x));
assert(printf("-->|%-2x|<--\n", x) == ft_printf("-->|%-2x|<--\n", x));
assert(printf("-->|%-1.x|<--\n", x) == ft_printf("-->|%-1.x|<--\n", x));
assert(printf("-->|%-1.*x|<--\n", -4, x) == ft_printf("-->|%-1.*x|<--\n", -4, x));
assert(printf("-->|%-1.*x|<--\n", -3, x) == ft_printf("-->|%-1.*x|<--\n", -3, x));
assert(printf("-->|%-1.*x|<--\n", -2, x) == ft_printf("-->|%-1.*x|<--\n", -2, x));
assert(printf("-->|%-1.*x|<--\n", -1, x) == ft_printf("-->|%-1.*x|<--\n", -1, x));
assert(printf("-->|%-1.*x|<--\n", 0, x) == ft_printf("-->|%-1.*x|<--\n", 0, x));
assert(printf("-->|%-1.*x|<--\n", 1, x) == ft_printf("-->|%-1.*x|<--\n", 1, x));
assert(printf("-->|%-1.*x|<--\n", 2, x) == ft_printf("-->|%-1.*x|<--\n", 2, x));
assert(printf("-->|%-1.*x|<--\n", 3, x) == ft_printf("-->|%-1.*x|<--\n", 3, x));
assert(printf("-->|%-1.*x|<--\n", 4, x) == ft_printf("-->|%-1.*x|<--\n", 4, x));
assert(printf("-->|%-1.0x|<--\n", x) == ft_printf("-->|%-1.0x|<--\n", x));
assert(printf("-->|%-1.1x|<--\n", x) == ft_printf("-->|%-1.1x|<--\n", x));
assert(printf("-->|%-1.2x|<--\n", x) == ft_printf("-->|%-1.2x|<--\n", x));
assert(printf("-->|%-1.3x|<--\n", x) == ft_printf("-->|%-1.3x|<--\n", x));
assert(printf("-->|%-1.4x|<--\n", x) == ft_printf("-->|%-1.4x|<--\n", x));
assert(printf("-->|%-1x|<--\n", x) == ft_printf("-->|%-1x|<--\n", x));
assert(printf("-->|%.x|<--\n", x) == ft_printf("-->|%.x|<--\n", x));
assert(printf("-->|%.*x|<--\n", -4, x) == ft_printf("-->|%.*x|<--\n", -4, x));
assert(printf("-->|%.*x|<--\n", -3, x) == ft_printf("-->|%.*x|<--\n", -3, x));
assert(printf("-->|%.*x|<--\n", -2, x) == ft_printf("-->|%.*x|<--\n", -2, x));
assert(printf("-->|%.*x|<--\n", -1, x) == ft_printf("-->|%.*x|<--\n", -1, x));
assert(printf("-->|%.*x|<--\n", 0, x) == ft_printf("-->|%.*x|<--\n", 0, x));
assert(printf("-->|%.*x|<--\n", 1, x) == ft_printf("-->|%.*x|<--\n", 1, x));
assert(printf("-->|%.*x|<--\n", 2, x) == ft_printf("-->|%.*x|<--\n", 2, x));
assert(printf("-->|%.*x|<--\n", 3, x) == ft_printf("-->|%.*x|<--\n", 3, x));
assert(printf("-->|%.*x|<--\n", 4, x) == ft_printf("-->|%.*x|<--\n", 4, x));
assert(printf("-->|%.0x|<--\n", x) == ft_printf("-->|%.0x|<--\n", x));
assert(printf("-->|%.1x|<--\n", x) == ft_printf("-->|%.1x|<--\n", x));
assert(printf("-->|%.2x|<--\n", x) == ft_printf("-->|%.2x|<--\n", x));
assert(printf("-->|%.3x|<--\n", x) == ft_printf("-->|%.3x|<--\n", x));
assert(printf("-->|%.4x|<--\n", x) == ft_printf("-->|%.4x|<--\n", x));
assert(printf("-->|%x|<--\n", x) == ft_printf("-->|%x|<--\n", x));
assert(printf("-->|%*.x|<--\n", -4, x) == ft_printf("-->|%*.x|<--\n", -4, x));
assert(printf("-->|%*.x|<--\n", -3, x) == ft_printf("-->|%*.x|<--\n", -3, x));
assert(printf("-->|%*.x|<--\n", -2, x) == ft_printf("-->|%*.x|<--\n", -2, x));
assert(printf("-->|%*.x|<--\n", -1, x) == ft_printf("-->|%*.x|<--\n", -1, x));
assert(printf("-->|%*.x|<--\n", 0, x) == ft_printf("-->|%*.x|<--\n", 0, x));
assert(printf("-->|%*.x|<--\n", 1, x) == ft_printf("-->|%*.x|<--\n", 1, x));
assert(printf("-->|%*.x|<--\n", 2, x) == ft_printf("-->|%*.x|<--\n", 2, x));
assert(printf("-->|%*.x|<--\n", 3, x) == ft_printf("-->|%*.x|<--\n", 3, x));
assert(printf("-->|%*.x|<--\n", 4, x) == ft_printf("-->|%*.x|<--\n", 4, x));
assert(printf("-->|%*.*x|<--\n", -4, -4, x) == ft_printf("-->|%*.*x|<--\n", -4, -4, x));
assert(printf("-->|%*.*x|<--\n", -4, -3, x) == ft_printf("-->|%*.*x|<--\n", -4, -3, x));
assert(printf("-->|%*.*x|<--\n", -4, -2, x) == ft_printf("-->|%*.*x|<--\n", -4, -2, x));
assert(printf("-->|%*.*x|<--\n", -4, -1, x) == ft_printf("-->|%*.*x|<--\n", -4, -1, x));
assert(printf("-->|%*.*x|<--\n", -4, 0, x) == ft_printf("-->|%*.*x|<--\n", -4, 0, x));
assert(printf("-->|%*.*x|<--\n", -4, 1, x) == ft_printf("-->|%*.*x|<--\n", -4, 1, x));
assert(printf("-->|%*.*x|<--\n", -4, 2, x) == ft_printf("-->|%*.*x|<--\n", -4, 2, x));
assert(printf("-->|%*.*x|<--\n", -4, 3, x) == ft_printf("-->|%*.*x|<--\n", -4, 3, x));
assert(printf("-->|%*.*x|<--\n", -4, 4, x) == ft_printf("-->|%*.*x|<--\n", -4, 4, x));
assert(printf("-->|%*.*x|<--\n", -3, -4, x) == ft_printf("-->|%*.*x|<--\n", -3, -4, x));
assert(printf("-->|%*.*x|<--\n", -3, -3, x) == ft_printf("-->|%*.*x|<--\n", -3, -3, x));
assert(printf("-->|%*.*x|<--\n", -3, -2, x) == ft_printf("-->|%*.*x|<--\n", -3, -2, x));
assert(printf("-->|%*.*x|<--\n", -3, -1, x) == ft_printf("-->|%*.*x|<--\n", -3, -1, x));
assert(printf("-->|%*.*x|<--\n", -3, 0, x) == ft_printf("-->|%*.*x|<--\n", -3, 0, x));
assert(printf("-->|%*.*x|<--\n", -3, 1, x) == ft_printf("-->|%*.*x|<--\n", -3, 1, x));
assert(printf("-->|%*.*x|<--\n", -3, 2, x) == ft_printf("-->|%*.*x|<--\n", -3, 2, x));
assert(printf("-->|%*.*x|<--\n", -3, 3, x) == ft_printf("-->|%*.*x|<--\n", -3, 3, x));
assert(printf("-->|%*.*x|<--\n", -3, 4, x) == ft_printf("-->|%*.*x|<--\n", -3, 4, x));
assert(printf("-->|%*.*x|<--\n", -2, -4, x) == ft_printf("-->|%*.*x|<--\n", -2, -4, x));
assert(printf("-->|%*.*x|<--\n", -2, -3, x) == ft_printf("-->|%*.*x|<--\n", -2, -3, x));
assert(printf("-->|%*.*x|<--\n", -2, -2, x) == ft_printf("-->|%*.*x|<--\n", -2, -2, x));
assert(printf("-->|%*.*x|<--\n", -2, -1, x) == ft_printf("-->|%*.*x|<--\n", -2, -1, x));
assert(printf("-->|%*.*x|<--\n", -2, 0, x) == ft_printf("-->|%*.*x|<--\n", -2, 0, x));
assert(printf("-->|%*.*x|<--\n", -2, 1, x) == ft_printf("-->|%*.*x|<--\n", -2, 1, x));
assert(printf("-->|%*.*x|<--\n", -2, 2, x) == ft_printf("-->|%*.*x|<--\n", -2, 2, x));
assert(printf("-->|%*.*x|<--\n", -2, 3, x) == ft_printf("-->|%*.*x|<--\n", -2, 3, x));
assert(printf("-->|%*.*x|<--\n", -2, 4, x) == ft_printf("-->|%*.*x|<--\n", -2, 4, x));
assert(printf("-->|%*.*x|<--\n", -1, -4, x) == ft_printf("-->|%*.*x|<--\n", -1, -4, x));
assert(printf("-->|%*.*x|<--\n", -1, -3, x) == ft_printf("-->|%*.*x|<--\n", -1, -3, x));
assert(printf("-->|%*.*x|<--\n", -1, -2, x) == ft_printf("-->|%*.*x|<--\n", -1, -2, x));
assert(printf("-->|%*.*x|<--\n", -1, -1, x) == ft_printf("-->|%*.*x|<--\n", -1, -1, x));
assert(printf("-->|%*.*x|<--\n", -1, 0, x) == ft_printf("-->|%*.*x|<--\n", -1, 0, x));
assert(printf("-->|%*.*x|<--\n", -1, 1, x) == ft_printf("-->|%*.*x|<--\n", -1, 1, x));
assert(printf("-->|%*.*x|<--\n", -1, 2, x) == ft_printf("-->|%*.*x|<--\n", -1, 2, x));
assert(printf("-->|%*.*x|<--\n", -1, 3, x) == ft_printf("-->|%*.*x|<--\n", -1, 3, x));
assert(printf("-->|%*.*x|<--\n", -1, 4, x) == ft_printf("-->|%*.*x|<--\n", -1, 4, x));
assert(printf("-->|%*.*x|<--\n", 0, -4, x) == ft_printf("-->|%*.*x|<--\n", 0, -4, x));
assert(printf("-->|%*.*x|<--\n", 0, -3, x) == ft_printf("-->|%*.*x|<--\n", 0, -3, x));
assert(printf("-->|%*.*x|<--\n", 0, -2, x) == ft_printf("-->|%*.*x|<--\n", 0, -2, x));
assert(printf("-->|%*.*x|<--\n", 0, -1, x) == ft_printf("-->|%*.*x|<--\n", 0, -1, x));
assert(printf("-->|%*.*x|<--\n", 0, 0, x) == ft_printf("-->|%*.*x|<--\n", 0, 0, x));
assert(printf("-->|%*.*x|<--\n", 0, 1, x) == ft_printf("-->|%*.*x|<--\n", 0, 1, x));
assert(printf("-->|%*.*x|<--\n", 0, 2, x) == ft_printf("-->|%*.*x|<--\n", 0, 2, x));
assert(printf("-->|%*.*x|<--\n", 0, 3, x) == ft_printf("-->|%*.*x|<--\n", 0, 3, x));
assert(printf("-->|%*.*x|<--\n", 0, 4, x) == ft_printf("-->|%*.*x|<--\n", 0, 4, x));
assert(printf("-->|%*.*x|<--\n", 1, -4, x) == ft_printf("-->|%*.*x|<--\n", 1, -4, x));
assert(printf("-->|%*.*x|<--\n", 1, -3, x) == ft_printf("-->|%*.*x|<--\n", 1, -3, x));
assert(printf("-->|%*.*x|<--\n", 1, -2, x) == ft_printf("-->|%*.*x|<--\n", 1, -2, x));
assert(printf("-->|%*.*x|<--\n", 1, -1, x) == ft_printf("-->|%*.*x|<--\n", 1, -1, x));
assert(printf("-->|%*.*x|<--\n", 1, 0, x) == ft_printf("-->|%*.*x|<--\n", 1, 0, x));
assert(printf("-->|%*.*x|<--\n", 1, 1, x) == ft_printf("-->|%*.*x|<--\n", 1, 1, x));
assert(printf("-->|%*.*x|<--\n", 1, 2, x) == ft_printf("-->|%*.*x|<--\n", 1, 2, x));
assert(printf("-->|%*.*x|<--\n", 1, 3, x) == ft_printf("-->|%*.*x|<--\n", 1, 3, x));
assert(printf("-->|%*.*x|<--\n", 1, 4, x) == ft_printf("-->|%*.*x|<--\n", 1, 4, x));
assert(printf("-->|%*.*x|<--\n", 2, -4, x) == ft_printf("-->|%*.*x|<--\n", 2, -4, x));
assert(printf("-->|%*.*x|<--\n", 2, -3, x) == ft_printf("-->|%*.*x|<--\n", 2, -3, x));
assert(printf("-->|%*.*x|<--\n", 2, -2, x) == ft_printf("-->|%*.*x|<--\n", 2, -2, x));
assert(printf("-->|%*.*x|<--\n", 2, -1, x) == ft_printf("-->|%*.*x|<--\n", 2, -1, x));
assert(printf("-->|%*.*x|<--\n", 2, 0, x) == ft_printf("-->|%*.*x|<--\n", 2, 0, x));
assert(printf("-->|%*.*x|<--\n", 2, 1, x) == ft_printf("-->|%*.*x|<--\n", 2, 1, x));
assert(printf("-->|%*.*x|<--\n", 2, 2, x) == ft_printf("-->|%*.*x|<--\n", 2, 2, x));
assert(printf("-->|%*.*x|<--\n", 2, 3, x) == ft_printf("-->|%*.*x|<--\n", 2, 3, x));
assert(printf("-->|%*.*x|<--\n", 2, 4, x) == ft_printf("-->|%*.*x|<--\n", 2, 4, x));
assert(printf("-->|%*.*x|<--\n", 3, -4, x) == ft_printf("-->|%*.*x|<--\n", 3, -4, x));
assert(printf("-->|%*.*x|<--\n", 3, -3, x) == ft_printf("-->|%*.*x|<--\n", 3, -3, x));
assert(printf("-->|%*.*x|<--\n", 3, -2, x) == ft_printf("-->|%*.*x|<--\n", 3, -2, x));
assert(printf("-->|%*.*x|<--\n", 3, -1, x) == ft_printf("-->|%*.*x|<--\n", 3, -1, x));
assert(printf("-->|%*.*x|<--\n", 3, 0, x) == ft_printf("-->|%*.*x|<--\n", 3, 0, x));
assert(printf("-->|%*.*x|<--\n", 3, 1, x) == ft_printf("-->|%*.*x|<--\n", 3, 1, x));
assert(printf("-->|%*.*x|<--\n", 3, 2, x) == ft_printf("-->|%*.*x|<--\n", 3, 2, x));
assert(printf("-->|%*.*x|<--\n", 3, 3, x) == ft_printf("-->|%*.*x|<--\n", 3, 3, x));
assert(printf("-->|%*.*x|<--\n", 3, 4, x) == ft_printf("-->|%*.*x|<--\n", 3, 4, x));
assert(printf("-->|%*.*x|<--\n", 4, -4, x) == ft_printf("-->|%*.*x|<--\n", 4, -4, x));
assert(printf("-->|%*.*x|<--\n", 4, -3, x) == ft_printf("-->|%*.*x|<--\n", 4, -3, x));
assert(printf("-->|%*.*x|<--\n", 4, -2, x) == ft_printf("-->|%*.*x|<--\n", 4, -2, x));
assert(printf("-->|%*.*x|<--\n", 4, -1, x) == ft_printf("-->|%*.*x|<--\n", 4, -1, x));
assert(printf("-->|%*.*x|<--\n", 4, 0, x) == ft_printf("-->|%*.*x|<--\n", 4, 0, x));
assert(printf("-->|%*.*x|<--\n", 4, 1, x) == ft_printf("-->|%*.*x|<--\n", 4, 1, x));
assert(printf("-->|%*.*x|<--\n", 4, 2, x) == ft_printf("-->|%*.*x|<--\n", 4, 2, x));
assert(printf("-->|%*.*x|<--\n", 4, 3, x) == ft_printf("-->|%*.*x|<--\n", 4, 3, x));
assert(printf("-->|%*.*x|<--\n", 4, 4, x) == ft_printf("-->|%*.*x|<--\n", 4, 4, x));
assert(printf("-->|%*.0x|<--\n", -4, x) == ft_printf("-->|%*.0x|<--\n", -4, x));
assert(printf("-->|%*.0x|<--\n", -3, x) == ft_printf("-->|%*.0x|<--\n", -3, x));
assert(printf("-->|%*.0x|<--\n", -2, x) == ft_printf("-->|%*.0x|<--\n", -2, x));
assert(printf("-->|%*.0x|<--\n", -1, x) == ft_printf("-->|%*.0x|<--\n", -1, x));
assert(printf("-->|%*.0x|<--\n", 0, x) == ft_printf("-->|%*.0x|<--\n", 0, x));
assert(printf("-->|%*.0x|<--\n", 1, x) == ft_printf("-->|%*.0x|<--\n", 1, x));
assert(printf("-->|%*.0x|<--\n", 2, x) == ft_printf("-->|%*.0x|<--\n", 2, x));
assert(printf("-->|%*.0x|<--\n", 3, x) == ft_printf("-->|%*.0x|<--\n", 3, x));
assert(printf("-->|%*.0x|<--\n", 4, x) == ft_printf("-->|%*.0x|<--\n", 4, x));
assert(printf("-->|%*.1x|<--\n", -4, x) == ft_printf("-->|%*.1x|<--\n", -4, x));
assert(printf("-->|%*.1x|<--\n", -3, x) == ft_printf("-->|%*.1x|<--\n", -3, x));
assert(printf("-->|%*.1x|<--\n", -2, x) == ft_printf("-->|%*.1x|<--\n", -2, x));
assert(printf("-->|%*.1x|<--\n", -1, x) == ft_printf("-->|%*.1x|<--\n", -1, x));
assert(printf("-->|%*.1x|<--\n", 0, x) == ft_printf("-->|%*.1x|<--\n", 0, x));
assert(printf("-->|%*.1x|<--\n", 1, x) == ft_printf("-->|%*.1x|<--\n", 1, x));
assert(printf("-->|%*.1x|<--\n", 2, x) == ft_printf("-->|%*.1x|<--\n", 2, x));
assert(printf("-->|%*.1x|<--\n", 3, x) == ft_printf("-->|%*.1x|<--\n", 3, x));
assert(printf("-->|%*.1x|<--\n", 4, x) == ft_printf("-->|%*.1x|<--\n", 4, x));
assert(printf("-->|%*.2x|<--\n", -4, x) == ft_printf("-->|%*.2x|<--\n", -4, x));
assert(printf("-->|%*.2x|<--\n", -3, x) == ft_printf("-->|%*.2x|<--\n", -3, x));
assert(printf("-->|%*.2x|<--\n", -2, x) == ft_printf("-->|%*.2x|<--\n", -2, x));
assert(printf("-->|%*.2x|<--\n", -1, x) == ft_printf("-->|%*.2x|<--\n", -1, x));
assert(printf("-->|%*.2x|<--\n", 0, x) == ft_printf("-->|%*.2x|<--\n", 0, x));
assert(printf("-->|%*.2x|<--\n", 1, x) == ft_printf("-->|%*.2x|<--\n", 1, x));
assert(printf("-->|%*.2x|<--\n", 2, x) == ft_printf("-->|%*.2x|<--\n", 2, x));
assert(printf("-->|%*.2x|<--\n", 3, x) == ft_printf("-->|%*.2x|<--\n", 3, x));
assert(printf("-->|%*.2x|<--\n", 4, x) == ft_printf("-->|%*.2x|<--\n", 4, x));
assert(printf("-->|%*.3x|<--\n", -4, x) == ft_printf("-->|%*.3x|<--\n", -4, x));
assert(printf("-->|%*.3x|<--\n", -3, x) == ft_printf("-->|%*.3x|<--\n", -3, x));
assert(printf("-->|%*.3x|<--\n", -2, x) == ft_printf("-->|%*.3x|<--\n", -2, x));
assert(printf("-->|%*.3x|<--\n", -1, x) == ft_printf("-->|%*.3x|<--\n", -1, x));
assert(printf("-->|%*.3x|<--\n", 0, x) == ft_printf("-->|%*.3x|<--\n", 0, x));
assert(printf("-->|%*.3x|<--\n", 1, x) == ft_printf("-->|%*.3x|<--\n", 1, x));
assert(printf("-->|%*.3x|<--\n", 2, x) == ft_printf("-->|%*.3x|<--\n", 2, x));
assert(printf("-->|%*.3x|<--\n", 3, x) == ft_printf("-->|%*.3x|<--\n", 3, x));
assert(printf("-->|%*.3x|<--\n", 4, x) == ft_printf("-->|%*.3x|<--\n", 4, x));
assert(printf("-->|%*.4x|<--\n", -4, x) == ft_printf("-->|%*.4x|<--\n", -4, x));
assert(printf("-->|%*.4x|<--\n", -3, x) == ft_printf("-->|%*.4x|<--\n", -3, x));
assert(printf("-->|%*.4x|<--\n", -2, x) == ft_printf("-->|%*.4x|<--\n", -2, x));
assert(printf("-->|%*.4x|<--\n", -1, x) == ft_printf("-->|%*.4x|<--\n", -1, x));
assert(printf("-->|%*.4x|<--\n", 0, x) == ft_printf("-->|%*.4x|<--\n", 0, x));
assert(printf("-->|%*.4x|<--\n", 1, x) == ft_printf("-->|%*.4x|<--\n", 1, x));
assert(printf("-->|%*.4x|<--\n", 2, x) == ft_printf("-->|%*.4x|<--\n", 2, x));
assert(printf("-->|%*.4x|<--\n", 3, x) == ft_printf("-->|%*.4x|<--\n", 3, x));
assert(printf("-->|%*.4x|<--\n", 4, x) == ft_printf("-->|%*.4x|<--\n", 4, x));
assert(printf("-->|%*x|<--\n", -4, x) == ft_printf("-->|%*x|<--\n", -4, x));
assert(printf("-->|%*x|<--\n", -3, x) == ft_printf("-->|%*x|<--\n", -3, x));
assert(printf("-->|%*x|<--\n", -2, x) == ft_printf("-->|%*x|<--\n", -2, x));
assert(printf("-->|%*x|<--\n", -1, x) == ft_printf("-->|%*x|<--\n", -1, x));
assert(printf("-->|%*x|<--\n", 0, x) == ft_printf("-->|%*x|<--\n", 0, x));
assert(printf("-->|%*x|<--\n", 1, x) == ft_printf("-->|%*x|<--\n", 1, x));
assert(printf("-->|%*x|<--\n", 2, x) == ft_printf("-->|%*x|<--\n", 2, x));
assert(printf("-->|%*x|<--\n", 3, x) == ft_printf("-->|%*x|<--\n", 3, x));
assert(printf("-->|%*x|<--\n", 4, x) == ft_printf("-->|%*x|<--\n", 4, x));
assert(printf("-->|%0.x|<--\n", x) == ft_printf("-->|%0.x|<--\n", x));
assert(printf("-->|%0.*x|<--\n", -4, x) == ft_printf("-->|%0.*x|<--\n", -4, x));
assert(printf("-->|%0.*x|<--\n", -3, x) == ft_printf("-->|%0.*x|<--\n", -3, x));
assert(printf("-->|%0.*x|<--\n", -2, x) == ft_printf("-->|%0.*x|<--\n", -2, x));
assert(printf("-->|%0.*x|<--\n", -1, x) == ft_printf("-->|%0.*x|<--\n", -1, x));
assert(printf("-->|%0.*x|<--\n", 0, x) == ft_printf("-->|%0.*x|<--\n", 0, x));
assert(printf("-->|%0.*x|<--\n", 1, x) == ft_printf("-->|%0.*x|<--\n", 1, x));
assert(printf("-->|%0.*x|<--\n", 2, x) == ft_printf("-->|%0.*x|<--\n", 2, x));
assert(printf("-->|%0.*x|<--\n", 3, x) == ft_printf("-->|%0.*x|<--\n", 3, x));
assert(printf("-->|%0.*x|<--\n", 4, x) == ft_printf("-->|%0.*x|<--\n", 4, x));
assert(printf("-->|%0.0x|<--\n", x) == ft_printf("-->|%0.0x|<--\n", x));
assert(printf("-->|%0.1x|<--\n", x) == ft_printf("-->|%0.1x|<--\n", x));
assert(printf("-->|%0.2x|<--\n", x) == ft_printf("-->|%0.2x|<--\n", x));
assert(printf("-->|%0.3x|<--\n", x) == ft_printf("-->|%0.3x|<--\n", x));
assert(printf("-->|%0.4x|<--\n", x) == ft_printf("-->|%0.4x|<--\n", x));
assert(printf("-->|%0x|<--\n", x) == ft_printf("-->|%0x|<--\n", x));
assert(printf("-->|%1.x|<--\n", x) == ft_printf("-->|%1.x|<--\n", x));
assert(printf("-->|%1.*x|<--\n", -4, x) == ft_printf("-->|%1.*x|<--\n", -4, x));
assert(printf("-->|%1.*x|<--\n", -3, x) == ft_printf("-->|%1.*x|<--\n", -3, x));
assert(printf("-->|%1.*x|<--\n", -2, x) == ft_printf("-->|%1.*x|<--\n", -2, x));
assert(printf("-->|%1.*x|<--\n", -1, x) == ft_printf("-->|%1.*x|<--\n", -1, x));
assert(printf("-->|%1.*x|<--\n", 0, x) == ft_printf("-->|%1.*x|<--\n", 0, x));
assert(printf("-->|%1.*x|<--\n", 1, x) == ft_printf("-->|%1.*x|<--\n", 1, x));
assert(printf("-->|%1.*x|<--\n", 2, x) == ft_printf("-->|%1.*x|<--\n", 2, x));
assert(printf("-->|%1.*x|<--\n", 3, x) == ft_printf("-->|%1.*x|<--\n", 3, x));
assert(printf("-->|%1.*x|<--\n", 4, x) == ft_printf("-->|%1.*x|<--\n", 4, x));
assert(printf("-->|%1.0x|<--\n", x) == ft_printf("-->|%1.0x|<--\n", x));
assert(printf("-->|%1.1x|<--\n", x) == ft_printf("-->|%1.1x|<--\n", x));
assert(printf("-->|%1.2x|<--\n", x) == ft_printf("-->|%1.2x|<--\n", x));
assert(printf("-->|%1.3x|<--\n", x) == ft_printf("-->|%1.3x|<--\n", x));
assert(printf("-->|%1.4x|<--\n", x) == ft_printf("-->|%1.4x|<--\n", x));
assert(printf("-->|%1x|<--\n", x) == ft_printf("-->|%1x|<--\n", x));
assert(printf("-->|%2.x|<--\n", x) == ft_printf("-->|%2.x|<--\n", x));
assert(printf("-->|%2.*x|<--\n", -4, x) == ft_printf("-->|%2.*x|<--\n", -4, x));
assert(printf("-->|%2.*x|<--\n", -3, x) == ft_printf("-->|%2.*x|<--\n", -3, x));
assert(printf("-->|%2.*x|<--\n", -2, x) == ft_printf("-->|%2.*x|<--\n", -2, x));
assert(printf("-->|%2.*x|<--\n", -1, x) == ft_printf("-->|%2.*x|<--\n", -1, x));
assert(printf("-->|%2.*x|<--\n", 0, x) == ft_printf("-->|%2.*x|<--\n", 0, x));
assert(printf("-->|%2.*x|<--\n", 1, x) == ft_printf("-->|%2.*x|<--\n", 1, x));
assert(printf("-->|%2.*x|<--\n", 2, x) == ft_printf("-->|%2.*x|<--\n", 2, x));
assert(printf("-->|%2.*x|<--\n", 3, x) == ft_printf("-->|%2.*x|<--\n", 3, x));
assert(printf("-->|%2.*x|<--\n", 4, x) == ft_printf("-->|%2.*x|<--\n", 4, x));
assert(printf("-->|%2.0x|<--\n", x) == ft_printf("-->|%2.0x|<--\n", x));
assert(printf("-->|%2.1x|<--\n", x) == ft_printf("-->|%2.1x|<--\n", x));
assert(printf("-->|%2.2x|<--\n", x) == ft_printf("-->|%2.2x|<--\n", x));
assert(printf("-->|%2.3x|<--\n", x) == ft_printf("-->|%2.3x|<--\n", x));
assert(printf("-->|%2.4x|<--\n", x) == ft_printf("-->|%2.4x|<--\n", x));
assert(printf("-->|%2x|<--\n", x) == ft_printf("-->|%2x|<--\n", x));
assert(printf("-->|%3.x|<--\n", x) == ft_printf("-->|%3.x|<--\n", x));
assert(printf("-->|%3.*x|<--\n", -4, x) == ft_printf("-->|%3.*x|<--\n", -4, x));
assert(printf("-->|%3.*x|<--\n", -3, x) == ft_printf("-->|%3.*x|<--\n", -3, x));
assert(printf("-->|%3.*x|<--\n", -2, x) == ft_printf("-->|%3.*x|<--\n", -2, x));
assert(printf("-->|%3.*x|<--\n", -1, x) == ft_printf("-->|%3.*x|<--\n", -1, x));
assert(printf("-->|%3.*x|<--\n", 0, x) == ft_printf("-->|%3.*x|<--\n", 0, x));
assert(printf("-->|%3.*x|<--\n", 1, x) == ft_printf("-->|%3.*x|<--\n", 1, x));
assert(printf("-->|%3.*x|<--\n", 2, x) == ft_printf("-->|%3.*x|<--\n", 2, x));
assert(printf("-->|%3.*x|<--\n", 3, x) == ft_printf("-->|%3.*x|<--\n", 3, x));
assert(printf("-->|%3.*x|<--\n", 4, x) == ft_printf("-->|%3.*x|<--\n", 4, x));
assert(printf("-->|%3.0x|<--\n", x) == ft_printf("-->|%3.0x|<--\n", x));
assert(printf("-->|%3.1x|<--\n", x) == ft_printf("-->|%3.1x|<--\n", x));
assert(printf("-->|%3.2x|<--\n", x) == ft_printf("-->|%3.2x|<--\n", x));
assert(printf("-->|%3.3x|<--\n", x) == ft_printf("-->|%3.3x|<--\n", x));
assert(printf("-->|%3.4x|<--\n", x) == ft_printf("-->|%3.4x|<--\n", x));
assert(printf("-->|%3x|<--\n", x) == ft_printf("-->|%3x|<--\n", x));
assert(printf("-->|%4.x|<--\n", x) == ft_printf("-->|%4.x|<--\n", x));
assert(printf("-->|%4.*x|<--\n", -4, x) == ft_printf("-->|%4.*x|<--\n", -4, x));
assert(printf("-->|%4.*x|<--\n", -3, x) == ft_printf("-->|%4.*x|<--\n", -3, x));
assert(printf("-->|%4.*x|<--\n", -2, x) == ft_printf("-->|%4.*x|<--\n", -2, x));
assert(printf("-->|%4.*x|<--\n", -1, x) == ft_printf("-->|%4.*x|<--\n", -1, x));
assert(printf("-->|%4.*x|<--\n", 0, x) == ft_printf("-->|%4.*x|<--\n", 0, x));
assert(printf("-->|%4.*x|<--\n", 1, x) == ft_printf("-->|%4.*x|<--\n", 1, x));
assert(printf("-->|%4.*x|<--\n", 2, x) == ft_printf("-->|%4.*x|<--\n", 2, x));
assert(printf("-->|%4.*x|<--\n", 3, x) == ft_printf("-->|%4.*x|<--\n", 3, x));
assert(printf("-->|%4.*x|<--\n", 4, x) == ft_printf("-->|%4.*x|<--\n", 4, x));
assert(printf("-->|%4.0x|<--\n", x) == ft_printf("-->|%4.0x|<--\n", x));
assert(printf("-->|%4.1x|<--\n", x) == ft_printf("-->|%4.1x|<--\n", x));
assert(printf("-->|%4.2x|<--\n", x) == ft_printf("-->|%4.2x|<--\n", x));
assert(printf("-->|%4.3x|<--\n", x) == ft_printf("-->|%4.3x|<--\n", x));
assert(printf("-->|%4.4x|<--\n", x) == ft_printf("-->|%4.4x|<--\n", x));
assert(printf("-->|%4x|<--\n", x) == ft_printf("-->|%4x|<--\n", x));
assert(printf("-->|%0.x|<--\n", x) == ft_printf("-->|%0.x|<--\n", x));
assert(printf("-->|%0.*x|<--\n", -4, x) == ft_printf("-->|%0.*x|<--\n", -4, x));
assert(printf("-->|%0.*x|<--\n", -3, x) == ft_printf("-->|%0.*x|<--\n", -3, x));
assert(printf("-->|%0.*x|<--\n", -2, x) == ft_printf("-->|%0.*x|<--\n", -2, x));
assert(printf("-->|%0.*x|<--\n", -1, x) == ft_printf("-->|%0.*x|<--\n", -1, x));
assert(printf("-->|%0.*x|<--\n", 0, x) == ft_printf("-->|%0.*x|<--\n", 0, x));
assert(printf("-->|%0.*x|<--\n", 1, x) == ft_printf("-->|%0.*x|<--\n", 1, x));
assert(printf("-->|%0.*x|<--\n", 2, x) == ft_printf("-->|%0.*x|<--\n", 2, x));
assert(printf("-->|%0.*x|<--\n", 3, x) == ft_printf("-->|%0.*x|<--\n", 3, x));
assert(printf("-->|%0.*x|<--\n", 4, x) == ft_printf("-->|%0.*x|<--\n", 4, x));
assert(printf("-->|%0.0x|<--\n", x) == ft_printf("-->|%0.0x|<--\n", x));
assert(printf("-->|%0.1x|<--\n", x) == ft_printf("-->|%0.1x|<--\n", x));
assert(printf("-->|%0.2x|<--\n", x) == ft_printf("-->|%0.2x|<--\n", x));
assert(printf("-->|%0.3x|<--\n", x) == ft_printf("-->|%0.3x|<--\n", x));
assert(printf("-->|%0.4x|<--\n", x) == ft_printf("-->|%0.4x|<--\n", x));
assert(printf("-->|%0x|<--\n", x) == ft_printf("-->|%0x|<--\n", x));
assert(printf("-->|%0*.x|<--\n", -4, x) == ft_printf("-->|%0*.x|<--\n", -4, x));
assert(printf("-->|%0*.x|<--\n", -3, x) == ft_printf("-->|%0*.x|<--\n", -3, x));
assert(printf("-->|%0*.x|<--\n", -2, x) == ft_printf("-->|%0*.x|<--\n", -2, x));
assert(printf("-->|%0*.x|<--\n", -1, x) == ft_printf("-->|%0*.x|<--\n", -1, x));
assert(printf("-->|%0*.x|<--\n", 0, x) == ft_printf("-->|%0*.x|<--\n", 0, x));
assert(printf("-->|%0*.x|<--\n", 1, x) == ft_printf("-->|%0*.x|<--\n", 1, x));
assert(printf("-->|%0*.x|<--\n", 2, x) == ft_printf("-->|%0*.x|<--\n", 2, x));
assert(printf("-->|%0*.x|<--\n", 3, x) == ft_printf("-->|%0*.x|<--\n", 3, x));
assert(printf("-->|%0*.x|<--\n", 4, x) == ft_printf("-->|%0*.x|<--\n", 4, x));
assert(printf("-->|%0*.*x|<--\n", -4, -4, x) == ft_printf("-->|%0*.*x|<--\n", -4, -4, x));
assert(printf("-->|%0*.*x|<--\n", -4, -3, x) == ft_printf("-->|%0*.*x|<--\n", -4, -3, x));
assert(printf("-->|%0*.*x|<--\n", -4, -2, x) == ft_printf("-->|%0*.*x|<--\n", -4, -2, x));
assert(printf("-->|%0*.*x|<--\n", -4, -1, x) == ft_printf("-->|%0*.*x|<--\n", -4, -1, x));
assert(printf("-->|%0*.*x|<--\n", -4, 0, x) == ft_printf("-->|%0*.*x|<--\n", -4, 0, x));
assert(printf("-->|%0*.*x|<--\n", -4, 1, x) == ft_printf("-->|%0*.*x|<--\n", -4, 1, x));
assert(printf("-->|%0*.*x|<--\n", -4, 2, x) == ft_printf("-->|%0*.*x|<--\n", -4, 2, x));
assert(printf("-->|%0*.*x|<--\n", -4, 3, x) == ft_printf("-->|%0*.*x|<--\n", -4, 3, x));
assert(printf("-->|%0*.*x|<--\n", -4, 4, x) == ft_printf("-->|%0*.*x|<--\n", -4, 4, x));
assert(printf("-->|%0*.*x|<--\n", -3, -4, x) == ft_printf("-->|%0*.*x|<--\n", -3, -4, x));
assert(printf("-->|%0*.*x|<--\n", -3, -3, x) == ft_printf("-->|%0*.*x|<--\n", -3, -3, x));
assert(printf("-->|%0*.*x|<--\n", -3, -2, x) == ft_printf("-->|%0*.*x|<--\n", -3, -2, x));
assert(printf("-->|%0*.*x|<--\n", -3, -1, x) == ft_printf("-->|%0*.*x|<--\n", -3, -1, x));
assert(printf("-->|%0*.*x|<--\n", -3, 0, x) == ft_printf("-->|%0*.*x|<--\n", -3, 0, x));
assert(printf("-->|%0*.*x|<--\n", -3, 1, x) == ft_printf("-->|%0*.*x|<--\n", -3, 1, x));
assert(printf("-->|%0*.*x|<--\n", -3, 2, x) == ft_printf("-->|%0*.*x|<--\n", -3, 2, x));
assert(printf("-->|%0*.*x|<--\n", -3, 3, x) == ft_printf("-->|%0*.*x|<--\n", -3, 3, x));
assert(printf("-->|%0*.*x|<--\n", -3, 4, x) == ft_printf("-->|%0*.*x|<--\n", -3, 4, x));
assert(printf("-->|%0*.*x|<--\n", -2, -4, x) == ft_printf("-->|%0*.*x|<--\n", -2, -4, x));
assert(printf("-->|%0*.*x|<--\n", -2, -3, x) == ft_printf("-->|%0*.*x|<--\n", -2, -3, x));
assert(printf("-->|%0*.*x|<--\n", -2, -2, x) == ft_printf("-->|%0*.*x|<--\n", -2, -2, x));
assert(printf("-->|%0*.*x|<--\n", -2, -1, x) == ft_printf("-->|%0*.*x|<--\n", -2, -1, x));
assert(printf("-->|%0*.*x|<--\n", -2, 0, x) == ft_printf("-->|%0*.*x|<--\n", -2, 0, x));
assert(printf("-->|%0*.*x|<--\n", -2, 1, x) == ft_printf("-->|%0*.*x|<--\n", -2, 1, x));
assert(printf("-->|%0*.*x|<--\n", -2, 2, x) == ft_printf("-->|%0*.*x|<--\n", -2, 2, x));
assert(printf("-->|%0*.*x|<--\n", -2, 3, x) == ft_printf("-->|%0*.*x|<--\n", -2, 3, x));
assert(printf("-->|%0*.*x|<--\n", -2, 4, x) == ft_printf("-->|%0*.*x|<--\n", -2, 4, x));
assert(printf("-->|%0*.*x|<--\n", -1, -4, x) == ft_printf("-->|%0*.*x|<--\n", -1, -4, x));
assert(printf("-->|%0*.*x|<--\n", -1, -3, x) == ft_printf("-->|%0*.*x|<--\n", -1, -3, x));
assert(printf("-->|%0*.*x|<--\n", -1, -2, x) == ft_printf("-->|%0*.*x|<--\n", -1, -2, x));
assert(printf("-->|%0*.*x|<--\n", -1, -1, x) == ft_printf("-->|%0*.*x|<--\n", -1, -1, x));
assert(printf("-->|%0*.*x|<--\n", -1, 0, x) == ft_printf("-->|%0*.*x|<--\n", -1, 0, x));
assert(printf("-->|%0*.*x|<--\n", -1, 1, x) == ft_printf("-->|%0*.*x|<--\n", -1, 1, x));
assert(printf("-->|%0*.*x|<--\n", -1, 2, x) == ft_printf("-->|%0*.*x|<--\n", -1, 2, x));
assert(printf("-->|%0*.*x|<--\n", -1, 3, x) == ft_printf("-->|%0*.*x|<--\n", -1, 3, x));
assert(printf("-->|%0*.*x|<--\n", -1, 4, x) == ft_printf("-->|%0*.*x|<--\n", -1, 4, x));
assert(printf("-->|%0*.*x|<--\n", 0, -4, x) == ft_printf("-->|%0*.*x|<--\n", 0, -4, x));
assert(printf("-->|%0*.*x|<--\n", 0, -3, x) == ft_printf("-->|%0*.*x|<--\n", 0, -3, x));
assert(printf("-->|%0*.*x|<--\n", 0, -2, x) == ft_printf("-->|%0*.*x|<--\n", 0, -2, x));
assert(printf("-->|%0*.*x|<--\n", 0, -1, x) == ft_printf("-->|%0*.*x|<--\n", 0, -1, x));
assert(printf("-->|%0*.*x|<--\n", 0, 0, x) == ft_printf("-->|%0*.*x|<--\n", 0, 0, x));
assert(printf("-->|%0*.*x|<--\n", 0, 1, x) == ft_printf("-->|%0*.*x|<--\n", 0, 1, x));
assert(printf("-->|%0*.*x|<--\n", 0, 2, x) == ft_printf("-->|%0*.*x|<--\n", 0, 2, x));
assert(printf("-->|%0*.*x|<--\n", 0, 3, x) == ft_printf("-->|%0*.*x|<--\n", 0, 3, x));
assert(printf("-->|%0*.*x|<--\n", 0, 4, x) == ft_printf("-->|%0*.*x|<--\n", 0, 4, x));
assert(printf("-->|%0*.*x|<--\n", 1, -4, x) == ft_printf("-->|%0*.*x|<--\n", 1, -4, x));
assert(printf("-->|%0*.*x|<--\n", 1, -3, x) == ft_printf("-->|%0*.*x|<--\n", 1, -3, x));
assert(printf("-->|%0*.*x|<--\n", 1, -2, x) == ft_printf("-->|%0*.*x|<--\n", 1, -2, x));
assert(printf("-->|%0*.*x|<--\n", 1, -1, x) == ft_printf("-->|%0*.*x|<--\n", 1, -1, x));
assert(printf("-->|%0*.*x|<--\n", 1, 0, x) == ft_printf("-->|%0*.*x|<--\n", 1, 0, x));
assert(printf("-->|%0*.*x|<--\n", 1, 1, x) == ft_printf("-->|%0*.*x|<--\n", 1, 1, x));
assert(printf("-->|%0*.*x|<--\n", 1, 2, x) == ft_printf("-->|%0*.*x|<--\n", 1, 2, x));
assert(printf("-->|%0*.*x|<--\n", 1, 3, x) == ft_printf("-->|%0*.*x|<--\n", 1, 3, x));
assert(printf("-->|%0*.*x|<--\n", 1, 4, x) == ft_printf("-->|%0*.*x|<--\n", 1, 4, x));
assert(printf("-->|%0*.*x|<--\n", 2, -4, x) == ft_printf("-->|%0*.*x|<--\n", 2, -4, x));
assert(printf("-->|%0*.*x|<--\n", 2, -3, x) == ft_printf("-->|%0*.*x|<--\n", 2, -3, x));
assert(printf("-->|%0*.*x|<--\n", 2, -2, x) == ft_printf("-->|%0*.*x|<--\n", 2, -2, x));
assert(printf("-->|%0*.*x|<--\n", 2, -1, x) == ft_printf("-->|%0*.*x|<--\n", 2, -1, x));
assert(printf("-->|%0*.*x|<--\n", 2, 0, x) == ft_printf("-->|%0*.*x|<--\n", 2, 0, x));
assert(printf("-->|%0*.*x|<--\n", 2, 1, x) == ft_printf("-->|%0*.*x|<--\n", 2, 1, x));
assert(printf("-->|%0*.*x|<--\n", 2, 2, x) == ft_printf("-->|%0*.*x|<--\n", 2, 2, x));
assert(printf("-->|%0*.*x|<--\n", 2, 3, x) == ft_printf("-->|%0*.*x|<--\n", 2, 3, x));
assert(printf("-->|%0*.*x|<--\n", 2, 4, x) == ft_printf("-->|%0*.*x|<--\n", 2, 4, x));
assert(printf("-->|%0*.*x|<--\n", 3, -4, x) == ft_printf("-->|%0*.*x|<--\n", 3, -4, x));
assert(printf("-->|%0*.*x|<--\n", 3, -3, x) == ft_printf("-->|%0*.*x|<--\n", 3, -3, x));
assert(printf("-->|%0*.*x|<--\n", 3, -2, x) == ft_printf("-->|%0*.*x|<--\n", 3, -2, x));
assert(printf("-->|%0*.*x|<--\n", 3, -1, x) == ft_printf("-->|%0*.*x|<--\n", 3, -1, x));
assert(printf("-->|%0*.*x|<--\n", 3, 0, x) == ft_printf("-->|%0*.*x|<--\n", 3, 0, x));
assert(printf("-->|%0*.*x|<--\n", 3, 1, x) == ft_printf("-->|%0*.*x|<--\n", 3, 1, x));
assert(printf("-->|%0*.*x|<--\n", 3, 2, x) == ft_printf("-->|%0*.*x|<--\n", 3, 2, x));
assert(printf("-->|%0*.*x|<--\n", 3, 3, x) == ft_printf("-->|%0*.*x|<--\n", 3, 3, x));
assert(printf("-->|%0*.*x|<--\n", 3, 4, x) == ft_printf("-->|%0*.*x|<--\n", 3, 4, x));
assert(printf("-->|%0*.*x|<--\n", 4, -4, x) == ft_printf("-->|%0*.*x|<--\n", 4, -4, x));
assert(printf("-->|%0*.*x|<--\n", 4, -3, x) == ft_printf("-->|%0*.*x|<--\n", 4, -3, x));
assert(printf("-->|%0*.*x|<--\n", 4, -2, x) == ft_printf("-->|%0*.*x|<--\n", 4, -2, x));
assert(printf("-->|%0*.*x|<--\n", 4, -1, x) == ft_printf("-->|%0*.*x|<--\n", 4, -1, x));
assert(printf("-->|%0*.*x|<--\n", 4, 0, x) == ft_printf("-->|%0*.*x|<--\n", 4, 0, x));
assert(printf("-->|%0*.*x|<--\n", 4, 1, x) == ft_printf("-->|%0*.*x|<--\n", 4, 1, x));
assert(printf("-->|%0*.*x|<--\n", 4, 2, x) == ft_printf("-->|%0*.*x|<--\n", 4, 2, x));
assert(printf("-->|%0*.*x|<--\n", 4, 3, x) == ft_printf("-->|%0*.*x|<--\n", 4, 3, x));
assert(printf("-->|%0*.*x|<--\n", 4, 4, x) == ft_printf("-->|%0*.*x|<--\n", 4, 4, x));
assert(printf("-->|%0*.0x|<--\n", -4, x) == ft_printf("-->|%0*.0x|<--\n", -4, x));
assert(printf("-->|%0*.0x|<--\n", -3, x) == ft_printf("-->|%0*.0x|<--\n", -3, x));
assert(printf("-->|%0*.0x|<--\n", -2, x) == ft_printf("-->|%0*.0x|<--\n", -2, x));
assert(printf("-->|%0*.0x|<--\n", -1, x) == ft_printf("-->|%0*.0x|<--\n", -1, x));
assert(printf("-->|%0*.0x|<--\n", 0, x) == ft_printf("-->|%0*.0x|<--\n", 0, x));
assert(printf("-->|%0*.0x|<--\n", 1, x) == ft_printf("-->|%0*.0x|<--\n", 1, x));
assert(printf("-->|%0*.0x|<--\n", 2, x) == ft_printf("-->|%0*.0x|<--\n", 2, x));
assert(printf("-->|%0*.0x|<--\n", 3, x) == ft_printf("-->|%0*.0x|<--\n", 3, x));
assert(printf("-->|%0*.0x|<--\n", 4, x) == ft_printf("-->|%0*.0x|<--\n", 4, x));
assert(printf("-->|%0*.1x|<--\n", -4, x) == ft_printf("-->|%0*.1x|<--\n", -4, x));
assert(printf("-->|%0*.1x|<--\n", -3, x) == ft_printf("-->|%0*.1x|<--\n", -3, x));
assert(printf("-->|%0*.1x|<--\n", -2, x) == ft_printf("-->|%0*.1x|<--\n", -2, x));
assert(printf("-->|%0*.1x|<--\n", -1, x) == ft_printf("-->|%0*.1x|<--\n", -1, x));
assert(printf("-->|%0*.1x|<--\n", 0, x) == ft_printf("-->|%0*.1x|<--\n", 0, x));
assert(printf("-->|%0*.1x|<--\n", 1, x) == ft_printf("-->|%0*.1x|<--\n", 1, x));
assert(printf("-->|%0*.1x|<--\n", 2, x) == ft_printf("-->|%0*.1x|<--\n", 2, x));
assert(printf("-->|%0*.1x|<--\n", 3, x) == ft_printf("-->|%0*.1x|<--\n", 3, x));
assert(printf("-->|%0*.1x|<--\n", 4, x) == ft_printf("-->|%0*.1x|<--\n", 4, x));
assert(printf("-->|%0*.2x|<--\n", -4, x) == ft_printf("-->|%0*.2x|<--\n", -4, x));
assert(printf("-->|%0*.2x|<--\n", -3, x) == ft_printf("-->|%0*.2x|<--\n", -3, x));
assert(printf("-->|%0*.2x|<--\n", -2, x) == ft_printf("-->|%0*.2x|<--\n", -2, x));
assert(printf("-->|%0*.2x|<--\n", -1, x) == ft_printf("-->|%0*.2x|<--\n", -1, x));
assert(printf("-->|%0*.2x|<--\n", 0, x) == ft_printf("-->|%0*.2x|<--\n", 0, x));
assert(printf("-->|%0*.2x|<--\n", 1, x) == ft_printf("-->|%0*.2x|<--\n", 1, x));
assert(printf("-->|%0*.2x|<--\n", 2, x) == ft_printf("-->|%0*.2x|<--\n", 2, x));
assert(printf("-->|%0*.2x|<--\n", 3, x) == ft_printf("-->|%0*.2x|<--\n", 3, x));
assert(printf("-->|%0*.2x|<--\n", 4, x) == ft_printf("-->|%0*.2x|<--\n", 4, x));
assert(printf("-->|%0*.3x|<--\n", -4, x) == ft_printf("-->|%0*.3x|<--\n", -4, x));
assert(printf("-->|%0*.3x|<--\n", -3, x) == ft_printf("-->|%0*.3x|<--\n", -3, x));
assert(printf("-->|%0*.3x|<--\n", -2, x) == ft_printf("-->|%0*.3x|<--\n", -2, x));
assert(printf("-->|%0*.3x|<--\n", -1, x) == ft_printf("-->|%0*.3x|<--\n", -1, x));
assert(printf("-->|%0*.3x|<--\n", 0, x) == ft_printf("-->|%0*.3x|<--\n", 0, x));
assert(printf("-->|%0*.3x|<--\n", 1, x) == ft_printf("-->|%0*.3x|<--\n", 1, x));
assert(printf("-->|%0*.3x|<--\n", 2, x) == ft_printf("-->|%0*.3x|<--\n", 2, x));
assert(printf("-->|%0*.3x|<--\n", 3, x) == ft_printf("-->|%0*.3x|<--\n", 3, x));
assert(printf("-->|%0*.3x|<--\n", 4, x) == ft_printf("-->|%0*.3x|<--\n", 4, x));
assert(printf("-->|%0*.4x|<--\n", -4, x) == ft_printf("-->|%0*.4x|<--\n", -4, x));
assert(printf("-->|%0*.4x|<--\n", -3, x) == ft_printf("-->|%0*.4x|<--\n", -3, x));
assert(printf("-->|%0*.4x|<--\n", -2, x) == ft_printf("-->|%0*.4x|<--\n", -2, x));
assert(printf("-->|%0*.4x|<--\n", -1, x) == ft_printf("-->|%0*.4x|<--\n", -1, x));
assert(printf("-->|%0*.4x|<--\n", 0, x) == ft_printf("-->|%0*.4x|<--\n", 0, x));
assert(printf("-->|%0*.4x|<--\n", 1, x) == ft_printf("-->|%0*.4x|<--\n", 1, x));
assert(printf("-->|%0*.4x|<--\n", 2, x) == ft_printf("-->|%0*.4x|<--\n", 2, x));
assert(printf("-->|%0*.4x|<--\n", 3, x) == ft_printf("-->|%0*.4x|<--\n", 3, x));
assert(printf("-->|%0*.4x|<--\n", 4, x) == ft_printf("-->|%0*.4x|<--\n", 4, x));
assert(printf("-->|%0*x|<--\n", -4, x) == ft_printf("-->|%0*x|<--\n", -4, x));
assert(printf("-->|%0*x|<--\n", -3, x) == ft_printf("-->|%0*x|<--\n", -3, x));
assert(printf("-->|%0*x|<--\n", -2, x) == ft_printf("-->|%0*x|<--\n", -2, x));
assert(printf("-->|%0*x|<--\n", -1, x) == ft_printf("-->|%0*x|<--\n", -1, x));
assert(printf("-->|%0*x|<--\n", 0, x) == ft_printf("-->|%0*x|<--\n", 0, x));
assert(printf("-->|%0*x|<--\n", 1, x) == ft_printf("-->|%0*x|<--\n", 1, x));
assert(printf("-->|%0*x|<--\n", 2, x) == ft_printf("-->|%0*x|<--\n", 2, x));
assert(printf("-->|%0*x|<--\n", 3, x) == ft_printf("-->|%0*x|<--\n", 3, x));
assert(printf("-->|%0*x|<--\n", 4, x) == ft_printf("-->|%0*x|<--\n", 4, x));
assert(printf("-->|%00.x|<--\n", x) == ft_printf("-->|%00.x|<--\n", x));
assert(printf("-->|%00.*x|<--\n", -4, x) == ft_printf("-->|%00.*x|<--\n", -4, x));
assert(printf("-->|%00.*x|<--\n", -3, x) == ft_printf("-->|%00.*x|<--\n", -3, x));
assert(printf("-->|%00.*x|<--\n", -2, x) == ft_printf("-->|%00.*x|<--\n", -2, x));
assert(printf("-->|%00.*x|<--\n", -1, x) == ft_printf("-->|%00.*x|<--\n", -1, x));
assert(printf("-->|%00.*x|<--\n", 0, x) == ft_printf("-->|%00.*x|<--\n", 0, x));
assert(printf("-->|%00.*x|<--\n", 1, x) == ft_printf("-->|%00.*x|<--\n", 1, x));
assert(printf("-->|%00.*x|<--\n", 2, x) == ft_printf("-->|%00.*x|<--\n", 2, x));
assert(printf("-->|%00.*x|<--\n", 3, x) == ft_printf("-->|%00.*x|<--\n", 3, x));
assert(printf("-->|%00.*x|<--\n", 4, x) == ft_printf("-->|%00.*x|<--\n", 4, x));
assert(printf("-->|%00.0x|<--\n", x) == ft_printf("-->|%00.0x|<--\n", x));
assert(printf("-->|%00.1x|<--\n", x) == ft_printf("-->|%00.1x|<--\n", x));
assert(printf("-->|%00.2x|<--\n", x) == ft_printf("-->|%00.2x|<--\n", x));
assert(printf("-->|%00.3x|<--\n", x) == ft_printf("-->|%00.3x|<--\n", x));
assert(printf("-->|%00.4x|<--\n", x) == ft_printf("-->|%00.4x|<--\n", x));
assert(printf("-->|%00x|<--\n", x) == ft_printf("-->|%00x|<--\n", x));
assert(printf("-->|%01.x|<--\n", x) == ft_printf("-->|%01.x|<--\n", x));
assert(printf("-->|%01.*x|<--\n", -4, x) == ft_printf("-->|%01.*x|<--\n", -4, x));
assert(printf("-->|%01.*x|<--\n", -3, x) == ft_printf("-->|%01.*x|<--\n", -3, x));
assert(printf("-->|%01.*x|<--\n", -2, x) == ft_printf("-->|%01.*x|<--\n", -2, x));
assert(printf("-->|%01.*x|<--\n", -1, x) == ft_printf("-->|%01.*x|<--\n", -1, x));
assert(printf("-->|%01.*x|<--\n", 0, x) == ft_printf("-->|%01.*x|<--\n", 0, x));
assert(printf("-->|%01.*x|<--\n", 1, x) == ft_printf("-->|%01.*x|<--\n", 1, x));
assert(printf("-->|%01.*x|<--\n", 2, x) == ft_printf("-->|%01.*x|<--\n", 2, x));
assert(printf("-->|%01.*x|<--\n", 3, x) == ft_printf("-->|%01.*x|<--\n", 3, x));
assert(printf("-->|%01.*x|<--\n", 4, x) == ft_printf("-->|%01.*x|<--\n", 4, x));
assert(printf("-->|%01.0x|<--\n", x) == ft_printf("-->|%01.0x|<--\n", x));
assert(printf("-->|%01.1x|<--\n", x) == ft_printf("-->|%01.1x|<--\n", x));
assert(printf("-->|%01.2x|<--\n", x) == ft_printf("-->|%01.2x|<--\n", x));
assert(printf("-->|%01.3x|<--\n", x) == ft_printf("-->|%01.3x|<--\n", x));
assert(printf("-->|%01.4x|<--\n", x) == ft_printf("-->|%01.4x|<--\n", x));
assert(printf("-->|%01x|<--\n", x) == ft_printf("-->|%01x|<--\n", x));
assert(printf("-->|%02.x|<--\n", x) == ft_printf("-->|%02.x|<--\n", x));
assert(printf("-->|%02.*x|<--\n", -4, x) == ft_printf("-->|%02.*x|<--\n", -4, x));
assert(printf("-->|%02.*x|<--\n", -3, x) == ft_printf("-->|%02.*x|<--\n", -3, x));
assert(printf("-->|%02.*x|<--\n", -2, x) == ft_printf("-->|%02.*x|<--\n", -2, x));
assert(printf("-->|%02.*x|<--\n", -1, x) == ft_printf("-->|%02.*x|<--\n", -1, x));
assert(printf("-->|%02.*x|<--\n", 0, x) == ft_printf("-->|%02.*x|<--\n", 0, x));
assert(printf("-->|%02.*x|<--\n", 1, x) == ft_printf("-->|%02.*x|<--\n", 1, x));
assert(printf("-->|%02.*x|<--\n", 2, x) == ft_printf("-->|%02.*x|<--\n", 2, x));
assert(printf("-->|%02.*x|<--\n", 3, x) == ft_printf("-->|%02.*x|<--\n", 3, x));
assert(printf("-->|%02.*x|<--\n", 4, x) == ft_printf("-->|%02.*x|<--\n", 4, x));
assert(printf("-->|%02.0x|<--\n", x) == ft_printf("-->|%02.0x|<--\n", x));
assert(printf("-->|%02.1x|<--\n", x) == ft_printf("-->|%02.1x|<--\n", x));
assert(printf("-->|%02.2x|<--\n", x) == ft_printf("-->|%02.2x|<--\n", x));
assert(printf("-->|%02.3x|<--\n", x) == ft_printf("-->|%02.3x|<--\n", x));
assert(printf("-->|%02.4x|<--\n", x) == ft_printf("-->|%02.4x|<--\n", x));
assert(printf("-->|%02x|<--\n", x) == ft_printf("-->|%02x|<--\n", x));
assert(printf("-->|%03.x|<--\n", x) == ft_printf("-->|%03.x|<--\n", x));
assert(printf("-->|%03.*x|<--\n", -4, x) == ft_printf("-->|%03.*x|<--\n", -4, x));
assert(printf("-->|%03.*x|<--\n", -3, x) == ft_printf("-->|%03.*x|<--\n", -3, x));
assert(printf("-->|%03.*x|<--\n", -2, x) == ft_printf("-->|%03.*x|<--\n", -2, x));
assert(printf("-->|%03.*x|<--\n", -1, x) == ft_printf("-->|%03.*x|<--\n", -1, x));
assert(printf("-->|%03.*x|<--\n", 0, x) == ft_printf("-->|%03.*x|<--\n", 0, x));
assert(printf("-->|%03.*x|<--\n", 1, x) == ft_printf("-->|%03.*x|<--\n", 1, x));
assert(printf("-->|%03.*x|<--\n", 2, x) == ft_printf("-->|%03.*x|<--\n", 2, x));
assert(printf("-->|%03.*x|<--\n", 3, x) == ft_printf("-->|%03.*x|<--\n", 3, x));
assert(printf("-->|%03.*x|<--\n", 4, x) == ft_printf("-->|%03.*x|<--\n", 4, x));
assert(printf("-->|%03.0x|<--\n", x) == ft_printf("-->|%03.0x|<--\n", x));
assert(printf("-->|%03.1x|<--\n", x) == ft_printf("-->|%03.1x|<--\n", x));
assert(printf("-->|%03.2x|<--\n", x) == ft_printf("-->|%03.2x|<--\n", x));
assert(printf("-->|%03.3x|<--\n", x) == ft_printf("-->|%03.3x|<--\n", x));
assert(printf("-->|%03.4x|<--\n", x) == ft_printf("-->|%03.4x|<--\n", x));
assert(printf("-->|%03x|<--\n", x) == ft_printf("-->|%03x|<--\n", x));
assert(printf("-->|%04.x|<--\n", x) == ft_printf("-->|%04.x|<--\n", x));
assert(printf("-->|%04.*x|<--\n", -4, x) == ft_printf("-->|%04.*x|<--\n", -4, x));
assert(printf("-->|%04.*x|<--\n", -3, x) == ft_printf("-->|%04.*x|<--\n", -3, x));
assert(printf("-->|%04.*x|<--\n", -2, x) == ft_printf("-->|%04.*x|<--\n", -2, x));
assert(printf("-->|%04.*x|<--\n", -1, x) == ft_printf("-->|%04.*x|<--\n", -1, x));
assert(printf("-->|%04.*x|<--\n", 0, x) == ft_printf("-->|%04.*x|<--\n", 0, x));
assert(printf("-->|%04.*x|<--\n", 1, x) == ft_printf("-->|%04.*x|<--\n", 1, x));
assert(printf("-->|%04.*x|<--\n", 2, x) == ft_printf("-->|%04.*x|<--\n", 2, x));
assert(printf("-->|%04.*x|<--\n", 3, x) == ft_printf("-->|%04.*x|<--\n", 3, x));
assert(printf("-->|%04.*x|<--\n", 4, x) == ft_printf("-->|%04.*x|<--\n", 4, x));
assert(printf("-->|%04.0x|<--\n", x) == ft_printf("-->|%04.0x|<--\n", x));
assert(printf("-->|%04.1x|<--\n", x) == ft_printf("-->|%04.1x|<--\n", x));
assert(printf("-->|%04.2x|<--\n", x) == ft_printf("-->|%04.2x|<--\n", x));
assert(printf("-->|%04.3x|<--\n", x) == ft_printf("-->|%04.3x|<--\n", x));
assert(printf("-->|%04.4x|<--\n", x) == ft_printf("-->|%04.4x|<--\n", x));
assert(printf("-->|%04x|<--\n", x) == ft_printf("-->|%04x|<--\n", x));
assert(printf("-->|%--4.x|<--\n", x) == ft_printf("-->|%--4.x|<--\n", x));
assert(printf("-->|%--4.*x|<--\n", -4, x) == ft_printf("-->|%--4.*x|<--\n", -4, x));
assert(printf("-->|%--4.*x|<--\n", -3, x) == ft_printf("-->|%--4.*x|<--\n", -3, x));
assert(printf("-->|%--4.*x|<--\n", -2, x) == ft_printf("-->|%--4.*x|<--\n", -2, x));
assert(printf("-->|%--4.*x|<--\n", -1, x) == ft_printf("-->|%--4.*x|<--\n", -1, x));
assert(printf("-->|%--4.*x|<--\n", 0, x) == ft_printf("-->|%--4.*x|<--\n", 0, x));
assert(printf("-->|%--4.*x|<--\n", 1, x) == ft_printf("-->|%--4.*x|<--\n", 1, x));
assert(printf("-->|%--4.*x|<--\n", 2, x) == ft_printf("-->|%--4.*x|<--\n", 2, x));
assert(printf("-->|%--4.*x|<--\n", 3, x) == ft_printf("-->|%--4.*x|<--\n", 3, x));
assert(printf("-->|%--4.*x|<--\n", 4, x) == ft_printf("-->|%--4.*x|<--\n", 4, x));
assert(printf("-->|%--4.0x|<--\n", x) == ft_printf("-->|%--4.0x|<--\n", x));
assert(printf("-->|%--4.1x|<--\n", x) == ft_printf("-->|%--4.1x|<--\n", x));
assert(printf("-->|%--4.2x|<--\n", x) == ft_printf("-->|%--4.2x|<--\n", x));
assert(printf("-->|%--4.3x|<--\n", x) == ft_printf("-->|%--4.3x|<--\n", x));
assert(printf("-->|%--4.4x|<--\n", x) == ft_printf("-->|%--4.4x|<--\n", x));
assert(printf("-->|%--4x|<--\n", x) == ft_printf("-->|%--4x|<--\n", x));
assert(printf("-->|%--3.x|<--\n", x) == ft_printf("-->|%--3.x|<--\n", x));
assert(printf("-->|%--3.*x|<--\n", -4, x) == ft_printf("-->|%--3.*x|<--\n", -4, x));
assert(printf("-->|%--3.*x|<--\n", -3, x) == ft_printf("-->|%--3.*x|<--\n", -3, x));
assert(printf("-->|%--3.*x|<--\n", -2, x) == ft_printf("-->|%--3.*x|<--\n", -2, x));
assert(printf("-->|%--3.*x|<--\n", -1, x) == ft_printf("-->|%--3.*x|<--\n", -1, x));
assert(printf("-->|%--3.*x|<--\n", 0, x) == ft_printf("-->|%--3.*x|<--\n", 0, x));
assert(printf("-->|%--3.*x|<--\n", 1, x) == ft_printf("-->|%--3.*x|<--\n", 1, x));
assert(printf("-->|%--3.*x|<--\n", 2, x) == ft_printf("-->|%--3.*x|<--\n", 2, x));
assert(printf("-->|%--3.*x|<--\n", 3, x) == ft_printf("-->|%--3.*x|<--\n", 3, x));
assert(printf("-->|%--3.*x|<--\n", 4, x) == ft_printf("-->|%--3.*x|<--\n", 4, x));
assert(printf("-->|%--3.0x|<--\n", x) == ft_printf("-->|%--3.0x|<--\n", x));
assert(printf("-->|%--3.1x|<--\n", x) == ft_printf("-->|%--3.1x|<--\n", x));
assert(printf("-->|%--3.2x|<--\n", x) == ft_printf("-->|%--3.2x|<--\n", x));
assert(printf("-->|%--3.3x|<--\n", x) == ft_printf("-->|%--3.3x|<--\n", x));
assert(printf("-->|%--3.4x|<--\n", x) == ft_printf("-->|%--3.4x|<--\n", x));
assert(printf("-->|%--3x|<--\n", x) == ft_printf("-->|%--3x|<--\n", x));
assert(printf("-->|%--2.x|<--\n", x) == ft_printf("-->|%--2.x|<--\n", x));
assert(printf("-->|%--2.*x|<--\n", -4, x) == ft_printf("-->|%--2.*x|<--\n", -4, x));
assert(printf("-->|%--2.*x|<--\n", -3, x) == ft_printf("-->|%--2.*x|<--\n", -3, x));
assert(printf("-->|%--2.*x|<--\n", -2, x) == ft_printf("-->|%--2.*x|<--\n", -2, x));
assert(printf("-->|%--2.*x|<--\n", -1, x) == ft_printf("-->|%--2.*x|<--\n", -1, x));
assert(printf("-->|%--2.*x|<--\n", 0, x) == ft_printf("-->|%--2.*x|<--\n", 0, x));
assert(printf("-->|%--2.*x|<--\n", 1, x) == ft_printf("-->|%--2.*x|<--\n", 1, x));
assert(printf("-->|%--2.*x|<--\n", 2, x) == ft_printf("-->|%--2.*x|<--\n", 2, x));
assert(printf("-->|%--2.*x|<--\n", 3, x) == ft_printf("-->|%--2.*x|<--\n", 3, x));
assert(printf("-->|%--2.*x|<--\n", 4, x) == ft_printf("-->|%--2.*x|<--\n", 4, x));
assert(printf("-->|%--2.0x|<--\n", x) == ft_printf("-->|%--2.0x|<--\n", x));
assert(printf("-->|%--2.1x|<--\n", x) == ft_printf("-->|%--2.1x|<--\n", x));
assert(printf("-->|%--2.2x|<--\n", x) == ft_printf("-->|%--2.2x|<--\n", x));
assert(printf("-->|%--2.3x|<--\n", x) == ft_printf("-->|%--2.3x|<--\n", x));
assert(printf("-->|%--2.4x|<--\n", x) == ft_printf("-->|%--2.4x|<--\n", x));
assert(printf("-->|%--2x|<--\n", x) == ft_printf("-->|%--2x|<--\n", x));
assert(printf("-->|%--1.x|<--\n", x) == ft_printf("-->|%--1.x|<--\n", x));
assert(printf("-->|%--1.*x|<--\n", -4, x) == ft_printf("-->|%--1.*x|<--\n", -4, x));
assert(printf("-->|%--1.*x|<--\n", -3, x) == ft_printf("-->|%--1.*x|<--\n", -3, x));
assert(printf("-->|%--1.*x|<--\n", -2, x) == ft_printf("-->|%--1.*x|<--\n", -2, x));
assert(printf("-->|%--1.*x|<--\n", -1, x) == ft_printf("-->|%--1.*x|<--\n", -1, x));
assert(printf("-->|%--1.*x|<--\n", 0, x) == ft_printf("-->|%--1.*x|<--\n", 0, x));
assert(printf("-->|%--1.*x|<--\n", 1, x) == ft_printf("-->|%--1.*x|<--\n", 1, x));
assert(printf("-->|%--1.*x|<--\n", 2, x) == ft_printf("-->|%--1.*x|<--\n", 2, x));
assert(printf("-->|%--1.*x|<--\n", 3, x) == ft_printf("-->|%--1.*x|<--\n", 3, x));
assert(printf("-->|%--1.*x|<--\n", 4, x) == ft_printf("-->|%--1.*x|<--\n", 4, x));
assert(printf("-->|%--1.0x|<--\n", x) == ft_printf("-->|%--1.0x|<--\n", x));
assert(printf("-->|%--1.1x|<--\n", x) == ft_printf("-->|%--1.1x|<--\n", x));
assert(printf("-->|%--1.2x|<--\n", x) == ft_printf("-->|%--1.2x|<--\n", x));
assert(printf("-->|%--1.3x|<--\n", x) == ft_printf("-->|%--1.3x|<--\n", x));
assert(printf("-->|%--1.4x|<--\n", x) == ft_printf("-->|%--1.4x|<--\n", x));
assert(printf("-->|%--1x|<--\n", x) == ft_printf("-->|%--1x|<--\n", x));
assert(printf("-->|%-.x|<--\n", x) == ft_printf("-->|%-.x|<--\n", x));
assert(printf("-->|%-.*x|<--\n", -4, x) == ft_printf("-->|%-.*x|<--\n", -4, x));
assert(printf("-->|%-.*x|<--\n", -3, x) == ft_printf("-->|%-.*x|<--\n", -3, x));
assert(printf("-->|%-.*x|<--\n", -2, x) == ft_printf("-->|%-.*x|<--\n", -2, x));
assert(printf("-->|%-.*x|<--\n", -1, x) == ft_printf("-->|%-.*x|<--\n", -1, x));
assert(printf("-->|%-.*x|<--\n", 0, x) == ft_printf("-->|%-.*x|<--\n", 0, x));
assert(printf("-->|%-.*x|<--\n", 1, x) == ft_printf("-->|%-.*x|<--\n", 1, x));
assert(printf("-->|%-.*x|<--\n", 2, x) == ft_printf("-->|%-.*x|<--\n", 2, x));
assert(printf("-->|%-.*x|<--\n", 3, x) == ft_printf("-->|%-.*x|<--\n", 3, x));
assert(printf("-->|%-.*x|<--\n", 4, x) == ft_printf("-->|%-.*x|<--\n", 4, x));
assert(printf("-->|%-.0x|<--\n", x) == ft_printf("-->|%-.0x|<--\n", x));
assert(printf("-->|%-.1x|<--\n", x) == ft_printf("-->|%-.1x|<--\n", x));
assert(printf("-->|%-.2x|<--\n", x) == ft_printf("-->|%-.2x|<--\n", x));
assert(printf("-->|%-.3x|<--\n", x) == ft_printf("-->|%-.3x|<--\n", x));
assert(printf("-->|%-.4x|<--\n", x) == ft_printf("-->|%-.4x|<--\n", x));
assert(printf("-->|%-x|<--\n", x) == ft_printf("-->|%-x|<--\n", x));
assert(printf("-->|%-*.x|<--\n", -4, x) == ft_printf("-->|%-*.x|<--\n", -4, x));
assert(printf("-->|%-*.x|<--\n", -3, x) == ft_printf("-->|%-*.x|<--\n", -3, x));
assert(printf("-->|%-*.x|<--\n", -2, x) == ft_printf("-->|%-*.x|<--\n", -2, x));
assert(printf("-->|%-*.x|<--\n", -1, x) == ft_printf("-->|%-*.x|<--\n", -1, x));
assert(printf("-->|%-*.x|<--\n", 0, x) == ft_printf("-->|%-*.x|<--\n", 0, x));
assert(printf("-->|%-*.x|<--\n", 1, x) == ft_printf("-->|%-*.x|<--\n", 1, x));
assert(printf("-->|%-*.x|<--\n", 2, x) == ft_printf("-->|%-*.x|<--\n", 2, x));
assert(printf("-->|%-*.x|<--\n", 3, x) == ft_printf("-->|%-*.x|<--\n", 3, x));
assert(printf("-->|%-*.x|<--\n", 4, x) == ft_printf("-->|%-*.x|<--\n", 4, x));
assert(printf("-->|%-*.*x|<--\n", -4, -4, x) == ft_printf("-->|%-*.*x|<--\n", -4, -4, x));
assert(printf("-->|%-*.*x|<--\n", -4, -3, x) == ft_printf("-->|%-*.*x|<--\n", -4, -3, x));
assert(printf("-->|%-*.*x|<--\n", -4, -2, x) == ft_printf("-->|%-*.*x|<--\n", -4, -2, x));
assert(printf("-->|%-*.*x|<--\n", -4, -1, x) == ft_printf("-->|%-*.*x|<--\n", -4, -1, x));
assert(printf("-->|%-*.*x|<--\n", -4, 0, x) == ft_printf("-->|%-*.*x|<--\n", -4, 0, x));
assert(printf("-->|%-*.*x|<--\n", -4, 1, x) == ft_printf("-->|%-*.*x|<--\n", -4, 1, x));
assert(printf("-->|%-*.*x|<--\n", -4, 2, x) == ft_printf("-->|%-*.*x|<--\n", -4, 2, x));
assert(printf("-->|%-*.*x|<--\n", -4, 3, x) == ft_printf("-->|%-*.*x|<--\n", -4, 3, x));
assert(printf("-->|%-*.*x|<--\n", -4, 4, x) == ft_printf("-->|%-*.*x|<--\n", -4, 4, x));
assert(printf("-->|%-*.*x|<--\n", -3, -4, x) == ft_printf("-->|%-*.*x|<--\n", -3, -4, x));
assert(printf("-->|%-*.*x|<--\n", -3, -3, x) == ft_printf("-->|%-*.*x|<--\n", -3, -3, x));
assert(printf("-->|%-*.*x|<--\n", -3, -2, x) == ft_printf("-->|%-*.*x|<--\n", -3, -2, x));
assert(printf("-->|%-*.*x|<--\n", -3, -1, x) == ft_printf("-->|%-*.*x|<--\n", -3, -1, x));
assert(printf("-->|%-*.*x|<--\n", -3, 0, x) == ft_printf("-->|%-*.*x|<--\n", -3, 0, x));
assert(printf("-->|%-*.*x|<--\n", -3, 1, x) == ft_printf("-->|%-*.*x|<--\n", -3, 1, x));
assert(printf("-->|%-*.*x|<--\n", -3, 2, x) == ft_printf("-->|%-*.*x|<--\n", -3, 2, x));
assert(printf("-->|%-*.*x|<--\n", -3, 3, x) == ft_printf("-->|%-*.*x|<--\n", -3, 3, x));
assert(printf("-->|%-*.*x|<--\n", -3, 4, x) == ft_printf("-->|%-*.*x|<--\n", -3, 4, x));
assert(printf("-->|%-*.*x|<--\n", -2, -4, x) == ft_printf("-->|%-*.*x|<--\n", -2, -4, x));
assert(printf("-->|%-*.*x|<--\n", -2, -3, x) == ft_printf("-->|%-*.*x|<--\n", -2, -3, x));
assert(printf("-->|%-*.*x|<--\n", -2, -2, x) == ft_printf("-->|%-*.*x|<--\n", -2, -2, x));
assert(printf("-->|%-*.*x|<--\n", -2, -1, x) == ft_printf("-->|%-*.*x|<--\n", -2, -1, x));
assert(printf("-->|%-*.*x|<--\n", -2, 0, x) == ft_printf("-->|%-*.*x|<--\n", -2, 0, x));
assert(printf("-->|%-*.*x|<--\n", -2, 1, x) == ft_printf("-->|%-*.*x|<--\n", -2, 1, x));
assert(printf("-->|%-*.*x|<--\n", -2, 2, x) == ft_printf("-->|%-*.*x|<--\n", -2, 2, x));
assert(printf("-->|%-*.*x|<--\n", -2, 3, x) == ft_printf("-->|%-*.*x|<--\n", -2, 3, x));
assert(printf("-->|%-*.*x|<--\n", -2, 4, x) == ft_printf("-->|%-*.*x|<--\n", -2, 4, x));
assert(printf("-->|%-*.*x|<--\n", -1, -4, x) == ft_printf("-->|%-*.*x|<--\n", -1, -4, x));
assert(printf("-->|%-*.*x|<--\n", -1, -3, x) == ft_printf("-->|%-*.*x|<--\n", -1, -3, x));
assert(printf("-->|%-*.*x|<--\n", -1, -2, x) == ft_printf("-->|%-*.*x|<--\n", -1, -2, x));
assert(printf("-->|%-*.*x|<--\n", -1, -1, x) == ft_printf("-->|%-*.*x|<--\n", -1, -1, x));
assert(printf("-->|%-*.*x|<--\n", -1, 0, x) == ft_printf("-->|%-*.*x|<--\n", -1, 0, x));
assert(printf("-->|%-*.*x|<--\n", -1, 1, x) == ft_printf("-->|%-*.*x|<--\n", -1, 1, x));
assert(printf("-->|%-*.*x|<--\n", -1, 2, x) == ft_printf("-->|%-*.*x|<--\n", -1, 2, x));
assert(printf("-->|%-*.*x|<--\n", -1, 3, x) == ft_printf("-->|%-*.*x|<--\n", -1, 3, x));
assert(printf("-->|%-*.*x|<--\n", -1, 4, x) == ft_printf("-->|%-*.*x|<--\n", -1, 4, x));
assert(printf("-->|%-*.*x|<--\n", 0, -4, x) == ft_printf("-->|%-*.*x|<--\n", 0, -4, x));
assert(printf("-->|%-*.*x|<--\n", 0, -3, x) == ft_printf("-->|%-*.*x|<--\n", 0, -3, x));
assert(printf("-->|%-*.*x|<--\n", 0, -2, x) == ft_printf("-->|%-*.*x|<--\n", 0, -2, x));
assert(printf("-->|%-*.*x|<--\n", 0, -1, x) == ft_printf("-->|%-*.*x|<--\n", 0, -1, x));
assert(printf("-->|%-*.*x|<--\n", 0, 0, x) == ft_printf("-->|%-*.*x|<--\n", 0, 0, x));
assert(printf("-->|%-*.*x|<--\n", 0, 1, x) == ft_printf("-->|%-*.*x|<--\n", 0, 1, x));
assert(printf("-->|%-*.*x|<--\n", 0, 2, x) == ft_printf("-->|%-*.*x|<--\n", 0, 2, x));
assert(printf("-->|%-*.*x|<--\n", 0, 3, x) == ft_printf("-->|%-*.*x|<--\n", 0, 3, x));
assert(printf("-->|%-*.*x|<--\n", 0, 4, x) == ft_printf("-->|%-*.*x|<--\n", 0, 4, x));
assert(printf("-->|%-*.*x|<--\n", 1, -4, x) == ft_printf("-->|%-*.*x|<--\n", 1, -4, x));
assert(printf("-->|%-*.*x|<--\n", 1, -3, x) == ft_printf("-->|%-*.*x|<--\n", 1, -3, x));
assert(printf("-->|%-*.*x|<--\n", 1, -2, x) == ft_printf("-->|%-*.*x|<--\n", 1, -2, x));
assert(printf("-->|%-*.*x|<--\n", 1, -1, x) == ft_printf("-->|%-*.*x|<--\n", 1, -1, x));
assert(printf("-->|%-*.*x|<--\n", 1, 0, x) == ft_printf("-->|%-*.*x|<--\n", 1, 0, x));
assert(printf("-->|%-*.*x|<--\n", 1, 1, x) == ft_printf("-->|%-*.*x|<--\n", 1, 1, x));
assert(printf("-->|%-*.*x|<--\n", 1, 2, x) == ft_printf("-->|%-*.*x|<--\n", 1, 2, x));
assert(printf("-->|%-*.*x|<--\n", 1, 3, x) == ft_printf("-->|%-*.*x|<--\n", 1, 3, x));
assert(printf("-->|%-*.*x|<--\n", 1, 4, x) == ft_printf("-->|%-*.*x|<--\n", 1, 4, x));
assert(printf("-->|%-*.*x|<--\n", 2, -4, x) == ft_printf("-->|%-*.*x|<--\n", 2, -4, x));
assert(printf("-->|%-*.*x|<--\n", 2, -3, x) == ft_printf("-->|%-*.*x|<--\n", 2, -3, x));
assert(printf("-->|%-*.*x|<--\n", 2, -2, x) == ft_printf("-->|%-*.*x|<--\n", 2, -2, x));
assert(printf("-->|%-*.*x|<--\n", 2, -1, x) == ft_printf("-->|%-*.*x|<--\n", 2, -1, x));
assert(printf("-->|%-*.*x|<--\n", 2, 0, x) == ft_printf("-->|%-*.*x|<--\n", 2, 0, x));
assert(printf("-->|%-*.*x|<--\n", 2, 1, x) == ft_printf("-->|%-*.*x|<--\n", 2, 1, x));
assert(printf("-->|%-*.*x|<--\n", 2, 2, x) == ft_printf("-->|%-*.*x|<--\n", 2, 2, x));
assert(printf("-->|%-*.*x|<--\n", 2, 3, x) == ft_printf("-->|%-*.*x|<--\n", 2, 3, x));
assert(printf("-->|%-*.*x|<--\n", 2, 4, x) == ft_printf("-->|%-*.*x|<--\n", 2, 4, x));
assert(printf("-->|%-*.*x|<--\n", 3, -4, x) == ft_printf("-->|%-*.*x|<--\n", 3, -4, x));
assert(printf("-->|%-*.*x|<--\n", 3, -3, x) == ft_printf("-->|%-*.*x|<--\n", 3, -3, x));
assert(printf("-->|%-*.*x|<--\n", 3, -2, x) == ft_printf("-->|%-*.*x|<--\n", 3, -2, x));
assert(printf("-->|%-*.*x|<--\n", 3, -1, x) == ft_printf("-->|%-*.*x|<--\n", 3, -1, x));
assert(printf("-->|%-*.*x|<--\n", 3, 0, x) == ft_printf("-->|%-*.*x|<--\n", 3, 0, x));
assert(printf("-->|%-*.*x|<--\n", 3, 1, x) == ft_printf("-->|%-*.*x|<--\n", 3, 1, x));
assert(printf("-->|%-*.*x|<--\n", 3, 2, x) == ft_printf("-->|%-*.*x|<--\n", 3, 2, x));
assert(printf("-->|%-*.*x|<--\n", 3, 3, x) == ft_printf("-->|%-*.*x|<--\n", 3, 3, x));
assert(printf("-->|%-*.*x|<--\n", 3, 4, x) == ft_printf("-->|%-*.*x|<--\n", 3, 4, x));
assert(printf("-->|%-*.*x|<--\n", 4, -4, x) == ft_printf("-->|%-*.*x|<--\n", 4, -4, x));
assert(printf("-->|%-*.*x|<--\n", 4, -3, x) == ft_printf("-->|%-*.*x|<--\n", 4, -3, x));
assert(printf("-->|%-*.*x|<--\n", 4, -2, x) == ft_printf("-->|%-*.*x|<--\n", 4, -2, x));
assert(printf("-->|%-*.*x|<--\n", 4, -1, x) == ft_printf("-->|%-*.*x|<--\n", 4, -1, x));
assert(printf("-->|%-*.*x|<--\n", 4, 0, x) == ft_printf("-->|%-*.*x|<--\n", 4, 0, x));
assert(printf("-->|%-*.*x|<--\n", 4, 1, x) == ft_printf("-->|%-*.*x|<--\n", 4, 1, x));
assert(printf("-->|%-*.*x|<--\n", 4, 2, x) == ft_printf("-->|%-*.*x|<--\n", 4, 2, x));
assert(printf("-->|%-*.*x|<--\n", 4, 3, x) == ft_printf("-->|%-*.*x|<--\n", 4, 3, x));
assert(printf("-->|%-*.*x|<--\n", 4, 4, x) == ft_printf("-->|%-*.*x|<--\n", 4, 4, x));
assert(printf("-->|%-*.0x|<--\n", -4, x) == ft_printf("-->|%-*.0x|<--\n", -4, x));
assert(printf("-->|%-*.0x|<--\n", -3, x) == ft_printf("-->|%-*.0x|<--\n", -3, x));
assert(printf("-->|%-*.0x|<--\n", -2, x) == ft_printf("-->|%-*.0x|<--\n", -2, x));
assert(printf("-->|%-*.0x|<--\n", -1, x) == ft_printf("-->|%-*.0x|<--\n", -1, x));
assert(printf("-->|%-*.0x|<--\n", 0, x) == ft_printf("-->|%-*.0x|<--\n", 0, x));
assert(printf("-->|%-*.0x|<--\n", 1, x) == ft_printf("-->|%-*.0x|<--\n", 1, x));
assert(printf("-->|%-*.0x|<--\n", 2, x) == ft_printf("-->|%-*.0x|<--\n", 2, x));
assert(printf("-->|%-*.0x|<--\n", 3, x) == ft_printf("-->|%-*.0x|<--\n", 3, x));
assert(printf("-->|%-*.0x|<--\n", 4, x) == ft_printf("-->|%-*.0x|<--\n", 4, x));
assert(printf("-->|%-*.1x|<--\n", -4, x) == ft_printf("-->|%-*.1x|<--\n", -4, x));
assert(printf("-->|%-*.1x|<--\n", -3, x) == ft_printf("-->|%-*.1x|<--\n", -3, x));
assert(printf("-->|%-*.1x|<--\n", -2, x) == ft_printf("-->|%-*.1x|<--\n", -2, x));
assert(printf("-->|%-*.1x|<--\n", -1, x) == ft_printf("-->|%-*.1x|<--\n", -1, x));
assert(printf("-->|%-*.1x|<--\n", 0, x) == ft_printf("-->|%-*.1x|<--\n", 0, x));
assert(printf("-->|%-*.1x|<--\n", 1, x) == ft_printf("-->|%-*.1x|<--\n", 1, x));
assert(printf("-->|%-*.1x|<--\n", 2, x) == ft_printf("-->|%-*.1x|<--\n", 2, x));
assert(printf("-->|%-*.1x|<--\n", 3, x) == ft_printf("-->|%-*.1x|<--\n", 3, x));
assert(printf("-->|%-*.1x|<--\n", 4, x) == ft_printf("-->|%-*.1x|<--\n", 4, x));
assert(printf("-->|%-*.2x|<--\n", -4, x) == ft_printf("-->|%-*.2x|<--\n", -4, x));
assert(printf("-->|%-*.2x|<--\n", -3, x) == ft_printf("-->|%-*.2x|<--\n", -3, x));
assert(printf("-->|%-*.2x|<--\n", -2, x) == ft_printf("-->|%-*.2x|<--\n", -2, x));
assert(printf("-->|%-*.2x|<--\n", -1, x) == ft_printf("-->|%-*.2x|<--\n", -1, x));
assert(printf("-->|%-*.2x|<--\n", 0, x) == ft_printf("-->|%-*.2x|<--\n", 0, x));
assert(printf("-->|%-*.2x|<--\n", 1, x) == ft_printf("-->|%-*.2x|<--\n", 1, x));
assert(printf("-->|%-*.2x|<--\n", 2, x) == ft_printf("-->|%-*.2x|<--\n", 2, x));
assert(printf("-->|%-*.2x|<--\n", 3, x) == ft_printf("-->|%-*.2x|<--\n", 3, x));
assert(printf("-->|%-*.2x|<--\n", 4, x) == ft_printf("-->|%-*.2x|<--\n", 4, x));
assert(printf("-->|%-*.3x|<--\n", -4, x) == ft_printf("-->|%-*.3x|<--\n", -4, x));
assert(printf("-->|%-*.3x|<--\n", -3, x) == ft_printf("-->|%-*.3x|<--\n", -3, x));
assert(printf("-->|%-*.3x|<--\n", -2, x) == ft_printf("-->|%-*.3x|<--\n", -2, x));
assert(printf("-->|%-*.3x|<--\n", -1, x) == ft_printf("-->|%-*.3x|<--\n", -1, x));
assert(printf("-->|%-*.3x|<--\n", 0, x) == ft_printf("-->|%-*.3x|<--\n", 0, x));
assert(printf("-->|%-*.3x|<--\n", 1, x) == ft_printf("-->|%-*.3x|<--\n", 1, x));
assert(printf("-->|%-*.3x|<--\n", 2, x) == ft_printf("-->|%-*.3x|<--\n", 2, x));
assert(printf("-->|%-*.3x|<--\n", 3, x) == ft_printf("-->|%-*.3x|<--\n", 3, x));
assert(printf("-->|%-*.3x|<--\n", 4, x) == ft_printf("-->|%-*.3x|<--\n", 4, x));
assert(printf("-->|%-*.4x|<--\n", -4, x) == ft_printf("-->|%-*.4x|<--\n", -4, x));
assert(printf("-->|%-*.4x|<--\n", -3, x) == ft_printf("-->|%-*.4x|<--\n", -3, x));
assert(printf("-->|%-*.4x|<--\n", -2, x) == ft_printf("-->|%-*.4x|<--\n", -2, x));
assert(printf("-->|%-*.4x|<--\n", -1, x) == ft_printf("-->|%-*.4x|<--\n", -1, x));
assert(printf("-->|%-*.4x|<--\n", 0, x) == ft_printf("-->|%-*.4x|<--\n", 0, x));
assert(printf("-->|%-*.4x|<--\n", 1, x) == ft_printf("-->|%-*.4x|<--\n", 1, x));
assert(printf("-->|%-*.4x|<--\n", 2, x) == ft_printf("-->|%-*.4x|<--\n", 2, x));
assert(printf("-->|%-*.4x|<--\n", 3, x) == ft_printf("-->|%-*.4x|<--\n", 3, x));
assert(printf("-->|%-*.4x|<--\n", 4, x) == ft_printf("-->|%-*.4x|<--\n", 4, x));
assert(printf("-->|%-*x|<--\n", -4, x) == ft_printf("-->|%-*x|<--\n", -4, x));
assert(printf("-->|%-*x|<--\n", -3, x) == ft_printf("-->|%-*x|<--\n", -3, x));
assert(printf("-->|%-*x|<--\n", -2, x) == ft_printf("-->|%-*x|<--\n", -2, x));
assert(printf("-->|%-*x|<--\n", -1, x) == ft_printf("-->|%-*x|<--\n", -1, x));
assert(printf("-->|%-*x|<--\n", 0, x) == ft_printf("-->|%-*x|<--\n", 0, x));
assert(printf("-->|%-*x|<--\n", 1, x) == ft_printf("-->|%-*x|<--\n", 1, x));
assert(printf("-->|%-*x|<--\n", 2, x) == ft_printf("-->|%-*x|<--\n", 2, x));
assert(printf("-->|%-*x|<--\n", 3, x) == ft_printf("-->|%-*x|<--\n", 3, x));
assert(printf("-->|%-*x|<--\n", 4, x) == ft_printf("-->|%-*x|<--\n", 4, x));
assert(printf("-->|%-1.x|<--\n", x) == ft_printf("-->|%-1.x|<--\n", x));
assert(printf("-->|%-1.*x|<--\n", -4, x) == ft_printf("-->|%-1.*x|<--\n", -4, x));
assert(printf("-->|%-1.*x|<--\n", -3, x) == ft_printf("-->|%-1.*x|<--\n", -3, x));
assert(printf("-->|%-1.*x|<--\n", -2, x) == ft_printf("-->|%-1.*x|<--\n", -2, x));
assert(printf("-->|%-1.*x|<--\n", -1, x) == ft_printf("-->|%-1.*x|<--\n", -1, x));
assert(printf("-->|%-1.*x|<--\n", 0, x) == ft_printf("-->|%-1.*x|<--\n", 0, x));
assert(printf("-->|%-1.*x|<--\n", 1, x) == ft_printf("-->|%-1.*x|<--\n", 1, x));
assert(printf("-->|%-1.*x|<--\n", 2, x) == ft_printf("-->|%-1.*x|<--\n", 2, x));
assert(printf("-->|%-1.*x|<--\n", 3, x) == ft_printf("-->|%-1.*x|<--\n", 3, x));
assert(printf("-->|%-1.*x|<--\n", 4, x) == ft_printf("-->|%-1.*x|<--\n", 4, x));
assert(printf("-->|%-1.0x|<--\n", x) == ft_printf("-->|%-1.0x|<--\n", x));
assert(printf("-->|%-1.1x|<--\n", x) == ft_printf("-->|%-1.1x|<--\n", x));
assert(printf("-->|%-1.2x|<--\n", x) == ft_printf("-->|%-1.2x|<--\n", x));
assert(printf("-->|%-1.3x|<--\n", x) == ft_printf("-->|%-1.3x|<--\n", x));
assert(printf("-->|%-1.4x|<--\n", x) == ft_printf("-->|%-1.4x|<--\n", x));
assert(printf("-->|%-1x|<--\n", x) == ft_printf("-->|%-1x|<--\n", x));
assert(printf("-->|%-2.x|<--\n", x) == ft_printf("-->|%-2.x|<--\n", x));
assert(printf("-->|%-2.*x|<--\n", -4, x) == ft_printf("-->|%-2.*x|<--\n", -4, x));
assert(printf("-->|%-2.*x|<--\n", -3, x) == ft_printf("-->|%-2.*x|<--\n", -3, x));
assert(printf("-->|%-2.*x|<--\n", -2, x) == ft_printf("-->|%-2.*x|<--\n", -2, x));
assert(printf("-->|%-2.*x|<--\n", -1, x) == ft_printf("-->|%-2.*x|<--\n", -1, x));
assert(printf("-->|%-2.*x|<--\n", 0, x) == ft_printf("-->|%-2.*x|<--\n", 0, x));
assert(printf("-->|%-2.*x|<--\n", 1, x) == ft_printf("-->|%-2.*x|<--\n", 1, x));
assert(printf("-->|%-2.*x|<--\n", 2, x) == ft_printf("-->|%-2.*x|<--\n", 2, x));
assert(printf("-->|%-2.*x|<--\n", 3, x) == ft_printf("-->|%-2.*x|<--\n", 3, x));
assert(printf("-->|%-2.*x|<--\n", 4, x) == ft_printf("-->|%-2.*x|<--\n", 4, x));
assert(printf("-->|%-2.0x|<--\n", x) == ft_printf("-->|%-2.0x|<--\n", x));
assert(printf("-->|%-2.1x|<--\n", x) == ft_printf("-->|%-2.1x|<--\n", x));
assert(printf("-->|%-2.2x|<--\n", x) == ft_printf("-->|%-2.2x|<--\n", x));
assert(printf("-->|%-2.3x|<--\n", x) == ft_printf("-->|%-2.3x|<--\n", x));
assert(printf("-->|%-2.4x|<--\n", x) == ft_printf("-->|%-2.4x|<--\n", x));
assert(printf("-->|%-2x|<--\n", x) == ft_printf("-->|%-2x|<--\n", x));
assert(printf("-->|%-3.x|<--\n", x) == ft_printf("-->|%-3.x|<--\n", x));
assert(printf("-->|%-3.*x|<--\n", -4, x) == ft_printf("-->|%-3.*x|<--\n", -4, x));
assert(printf("-->|%-3.*x|<--\n", -3, x) == ft_printf("-->|%-3.*x|<--\n", -3, x));
assert(printf("-->|%-3.*x|<--\n", -2, x) == ft_printf("-->|%-3.*x|<--\n", -2, x));
assert(printf("-->|%-3.*x|<--\n", -1, x) == ft_printf("-->|%-3.*x|<--\n", -1, x));
assert(printf("-->|%-3.*x|<--\n", 0, x) == ft_printf("-->|%-3.*x|<--\n", 0, x));
assert(printf("-->|%-3.*x|<--\n", 1, x) == ft_printf("-->|%-3.*x|<--\n", 1, x));
assert(printf("-->|%-3.*x|<--\n", 2, x) == ft_printf("-->|%-3.*x|<--\n", 2, x));
assert(printf("-->|%-3.*x|<--\n", 3, x) == ft_printf("-->|%-3.*x|<--\n", 3, x));
assert(printf("-->|%-3.*x|<--\n", 4, x) == ft_printf("-->|%-3.*x|<--\n", 4, x));
assert(printf("-->|%-3.0x|<--\n", x) == ft_printf("-->|%-3.0x|<--\n", x));
assert(printf("-->|%-3.1x|<--\n", x) == ft_printf("-->|%-3.1x|<--\n", x));
assert(printf("-->|%-3.2x|<--\n", x) == ft_printf("-->|%-3.2x|<--\n", x));
assert(printf("-->|%-3.3x|<--\n", x) == ft_printf("-->|%-3.3x|<--\n", x));
assert(printf("-->|%-3.4x|<--\n", x) == ft_printf("-->|%-3.4x|<--\n", x));
assert(printf("-->|%-3x|<--\n", x) == ft_printf("-->|%-3x|<--\n", x));
assert(printf("-->|%-4.x|<--\n", x) == ft_printf("-->|%-4.x|<--\n", x));
assert(printf("-->|%-4.*x|<--\n", -4, x) == ft_printf("-->|%-4.*x|<--\n", -4, x));
assert(printf("-->|%-4.*x|<--\n", -3, x) == ft_printf("-->|%-4.*x|<--\n", -3, x));
assert(printf("-->|%-4.*x|<--\n", -2, x) == ft_printf("-->|%-4.*x|<--\n", -2, x));
assert(printf("-->|%-4.*x|<--\n", -1, x) == ft_printf("-->|%-4.*x|<--\n", -1, x));
assert(printf("-->|%-4.*x|<--\n", 0, x) == ft_printf("-->|%-4.*x|<--\n", 0, x));
assert(printf("-->|%-4.*x|<--\n", 1, x) == ft_printf("-->|%-4.*x|<--\n", 1, x));
assert(printf("-->|%-4.*x|<--\n", 2, x) == ft_printf("-->|%-4.*x|<--\n", 2, x));
assert(printf("-->|%-4.*x|<--\n", 3, x) == ft_printf("-->|%-4.*x|<--\n", 3, x));
assert(printf("-->|%-4.*x|<--\n", 4, x) == ft_printf("-->|%-4.*x|<--\n", 4, x));
assert(printf("-->|%-4.0x|<--\n", x) == ft_printf("-->|%-4.0x|<--\n", x));
assert(printf("-->|%-4.1x|<--\n", x) == ft_printf("-->|%-4.1x|<--\n", x));
assert(printf("-->|%-4.2x|<--\n", x) == ft_printf("-->|%-4.2x|<--\n", x));
assert(printf("-->|%-4.3x|<--\n", x) == ft_printf("-->|%-4.3x|<--\n", x));
assert(printf("-->|%-4.4x|<--\n", x) == ft_printf("-->|%-4.4x|<--\n", x));
assert(printf("-->|%-4x|<--\n", x) == ft_printf("-->|%-4x|<--\n", x));
	return(0);
}
/*
** charmstr@student.42.fr
**
** 1664 different calls generated automatically according to your options
*/
