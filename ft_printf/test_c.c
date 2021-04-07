#include "libftprintf.h"
int main()
{
	char c = 'a';
	printf("|%-4.c|\n",c);
	ft_printf("|%-4.c|",c);
}
