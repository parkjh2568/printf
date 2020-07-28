#include "libftprintf.h"
int main()
{
	char *k;
	k = "0";
	printf("%p\n\n", k);
	ft_printf("%p", k);
}
