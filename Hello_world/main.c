#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    int x = 10;
    int y = 8;
    int z = 2;
    
    int arr[] = {0,[2]=x, [10]=85, [2]=20};
    
    printf("size of arr is %ld\n", sizeof(arr)/sizeof(arr[0]));
    
    int GLOB_ONE = 0b00000000000000000000000000000010;
    int GLOB_TWO = 0b00000000000000000000000000000100;
    
    printf("Globe_one is %d\n", GLOB_ONE);
    printf("Globe_two is %d\n", GLOB_TWO);
    printf("Globe_two is %d\n", GLOB_ONE | GLOB_TWO);
    
    printf("size is %ld\n", sizeof(void*));
    
    char *word2;
    word2 = calloc(10,sizeof(char));
    word2 =strcpy(word2, "Hello world");
	// check2 = bfromcstr(word2);
	printf("CHAR %c\n", *word2);
	word2[0] = 'g';
    printf("CHAR %c\n", *word2);
	
   auto char *word3 = "Hello world";
	// check2 = bfromcstr(word2);
	printf("CHAR %c\n", *word3);
	word3[0] = 'g';
    
    return 0;
}
