#include "libftprintf.h"
int main()
{
	int a, b;
	a = printf("%*.*X\n",1, 0, 10);
	b = ft_printf("%*.*X\n", 1, 0, 10);
printf("a = %d, b = %d\n",a,b);

a = printf("%i, %d, %d, %d, %d, %s, %c, %d, %ld, %lx, %lX\n",8,-12,123456789,0,-12345678,"abcdefghijklmnop",'a',97,4294967284,8589934580,8589934580);
b = ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n",8,-12,123456789,0,-12345678,"abcdefghijklmnop",'a',97,4294967284,8589934580,8589934580);
printf("a = %d, b = %d\n",a,b);

	a = printf("%*.*X\n",1, 0, 10);
	b = ft_printf(" %*.*X\n", 1, 0, 10);
printf("a = %d, b = %d\n",a,b);
}
