#include "libftprintf.h"
int main()
{
	int a, b;
/*	printf("%u\n",17);
	ft_printf("%u\n",17);
	printf("%u\n",-1);
	ft_printf("%u\n",-1);*/
	a = printf("|%-3.*ld|\n",4,4294967161);
	b = ft_printf("|%-3.*u|\n",4,4294967161);
	printf("a = %d, b = %d",a,b);
}
