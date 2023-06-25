#include "main.h"

int main()
{
	int re_val, re_val2;
	char van[] = "Francis";

	re_val = _printf("today %s Francis %s\n", van, van);
	re_val2 = printf("today %s Francis %s\n", van, van);
	printf("%d\n", re_val);
	printf("%d\n", re_val2);
	printf("........................................\n");
	_printf("%s scored 100%%\n", van);
	printf("%s scored 100%%\n", van);
	return (0);
}
