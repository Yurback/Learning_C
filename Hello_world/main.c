#include <stdio.h>

int main(int argc, char **argv)
{
    int x = 10;
    int y = 8;
    int z = 2;
    
    int arr[] = {0,[2]=x, [10]=85, [2]=20};
    
    printf("size of arr is %ld\n", sizeof(arr)/sizeof(arr[0]));
    
    int GLOB_ONE = 0b00000000000000000000000000000010;
    int GLOB_TWO = 0b00000000000000000000000000000100;
    
    printf("Globe_one is %d", GLOB_ONE);
    printf("Globe_two is %d", GLOB_TWO);
    printf("Globe_two is %d", GLOB_ONE | GLOB_TWO);
    
    
	return 0;
}
