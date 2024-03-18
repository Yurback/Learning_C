#include <stdio.h>

void squrenum (int *number);

int main(int argc, char **argv)
{
	int num=10;
    squrenum(&num);
    printf("The num^2 is %d\n",num);
	return 0;
}

void squrenum (int *number) {
    *number = *number * *number;
};