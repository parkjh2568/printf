#include <stdio.h>
#include "libftprintf.h"
int main()
{
	char *a;
	a = ft_strdup("kkk");
	test(a);
	free(a);
}
