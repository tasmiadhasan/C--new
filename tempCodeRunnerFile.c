#include <stdio.h>

int main(void)
{
	char str[5] = {'H', 'E', 'L', 'L', 'O'};
	char *ptr = &str[0];
	printf("ptr = %08x\n", ptr);
	printf("str = %08x\n", str);
	return 0;
}
