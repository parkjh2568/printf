#include <stdio.h>
#include "libftprintf.h"
int main()
{
	int a, b;
	a = printf("oh this is = %%");
	b = ft_printf("oh this is = %%");
	printf("\na = %d, b = %d",a,b);	
}
