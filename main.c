#include <stdio.h>
#include "libftprintf.h"
int main()
{
	int a, b;
	a = printf("oh this is = [%-10.6d]\n", -987);
	b = ft_printf("oh this is = [%-10.6d] ", -987);
	printf("\n -10.6 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%10.6d]\n", -987);
	b = ft_printf("oh this is = [%10.6d] ", -987);
	printf("\n 10.6 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%.6d]\n", -987);
	b = ft_printf("oh this is = [%.6d] ", -987);
	printf("\n .6 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%06d]\n", -987);
	b = ft_printf("oh this is = [%06d] ", -987);
	printf("\n 06 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%6d]\n", -987);
	b = ft_printf("oh this is = [%6d] ",-987);
	printf("\n 6 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%-6d]\n", -987);
	b = ft_printf("oh this is = [%-6d] ", -987);
	printf("\n -6 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%.4d]\n", 5263);
	b = ft_printf("oh this is = [%.4d] ", 5263);
	printf("\n .4 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%3.7d]\n", 3267);
	b = ft_printf("oh this is = [%3.7d] ", 3267);
	printf("\n 3.7 a = %d, b = %d\n\n",a,b);
}
