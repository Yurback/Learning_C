#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned int x = 0b10000000000000000000000000000000; // 2^31
    printf("x is %u\n", x);
    printf("%ld byte\n", sizeof(size_t));
	printf("hello world\n");
	return 0;
}
