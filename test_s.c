#include "libftprintf.h"
int main()
{
	printf("%32s\n","abc");
	ft_printf("%32s\n\n","abc");
	printf("\n%.3s\n","hello");
	ft_printf("%.3s\n\n","hello");
	printf("%7.5s\n","bombastic");
	ft_printf("%7.5s\n\n","bombastic");
	printf("%-3.s\n",NULL);
	ft_printf("%-3.s\n\n",NULL);
}
