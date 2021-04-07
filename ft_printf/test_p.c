#include "libftprintf.h"
int main()
{
	char *k;
	k = "0";
	printf("%70lld\n\n", (long long int)&k);
	ft_printf("%70d", &k);
}
