#include "libftprintf.h"
int main()
{
/*	printf("%32s\n","abc");
	ft_printf("%32s\n\n","abc");
	printf("\n%.3s\n","hello");
	ft_printf("%.3s\n\n","hello");
	printf("%7.5s\n","bombastic");
	ft_printf("%7.5s\n\n","bombastic");
	printf("%-3.s\n",NULL);
	ft_printf("%-3.s\n\n",NULL);
	printf("%-16.*s\n",15,NULL);
	ft_printf("%-16.*s\n\n",15,NULL);
	printf("-->|%-16.s|<--\n", "abc");
	ft_printf("-->|%-16.s|<--\n", "abc");*/
//	printf("-->|%-16.*s|<--\n",-4, "abc");
//	ft_printf("-->|%-16.*s|<--\n",-4, "abc");
//	printf("-->|%-16.*s|<--\n",-2, "abc");
//	ft_printf("-->|%-16.*s|<--\n",-2, "abc");
//	printf("-->|%-16.*s|<--\n",-1, "abc");
//	ft_printf("-->|%-16.*s|<--\n",-1, "abc");
//	printf("-->|%--16.*s|<--\n",-4, "abc");
//	ft_printf("-->|%--16.*s|<--\n",-4, "abc");
	printf("-->|%--16.*s|<--\n",-2, "abc");
	ft_printf("-->|%--16.*s|<--\n",-2, "abc");
	printf("-->|%--16.*s|<--\n",-1, "abc");
	ft_printf("-->|%--16.*s|<--\n",-1, "abc");
	printf("-->|%--16.*s|<--\n",0, "abc");
	ft_printf("-->|%--16.*s|<--\n",0, "abc");
	printf("-->|%--16.*s|<--\n",1, "abc");
	ft_printf("-->|%--16.*s|<--\n",1, "abc");
	printf("-->|%--16.*s|<--\n",2, "abc");
	ft_printf("-->|%--16.*s|<--\n",2, "abc");

}
