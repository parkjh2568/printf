#include <stdio.h>
#include "libftprintf.h"
int main()
{
	int a, b;
/*	a = printf("oh this is = [%-10.6d]\n", -987);
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
	a = printf("oh this is = [%08.5d]\n", 34);
	b = ft_printf("oh this is = [%08.5d] ", 34);
	printf("\n 08.5 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%08.3d]\n", -8434);
	b = ft_printf("oh this is = [%08.3d] ", -8434);
	printf("\n 08.3 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%.3d]\n", 0);
	b = ft_printf("oh this is = [%.3d] ", 0);
	printf("\n 0 a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%5.d]\n", 0);
	b = ft_printf("oh this is = [%5.d] ", 0);
	printf("\n 5. a = %d, b = %d\n\n",a,b);
	a = printf("oh this is = [%.0d]\n", 0);
	b = ft_printf("oh this is = [%.0d] ", 0);
	printf("\n 0 a = %d, b = %d\n\n",a,b);*/
	a = printf("|%-3.*d|\n",4,-135);
	b = ft_printf("|%-3.*d|\n",4,-135);
	printf("%d %d",a,b);
}
