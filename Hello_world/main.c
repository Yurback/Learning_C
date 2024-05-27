#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
    char x = 10;
    int y = 0;
    char z = 1;
    
    char arr[] = {0,[2]=x, [10]=85, [2]=20, [5]=z};
    
    arr[y]=10;
    
    for(char i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {

        printf("%d,", arr[(int)i]);
    }
    
    printf("size of arr is %ld\n", sizeof(arr)/sizeof(arr[0]));
    
    int GLOB_ONE = 0b00000000000000000000000000000010;
    int GLOB_TWO = 0b00000000000000000000000000000100;
    
    printf("Globe_one is %d\n", GLOB_ONE);
    printf("Globe_two is %d\n", GLOB_TWO);
    printf("Globe_two is %d\n", GLOB_ONE | GLOB_TWO);
//    
    printf("size is %ld\n", sizeof(void*));
    printf("size long int is %ld\n", sizeof(long int));
    printf("size long int is %ld\n", sizeof(long));
    char *word2;
    word2 = calloc(12,sizeof(char));
    word2 =strcpy(word2, "Hello world");
	// check2 = bfromcstr(word2);
	printf("CHAR %c\n", *word2);
	word2[0] = 'g';
    printf("CHAR %c\n", *word2);
//	
    char *word3 = "Hello world";
	// check2 = bfromcstr(word2);
	printf("CHAR %c\n", *word3);
//	word3[0] = 'g';                     // CONSTANT STRING CAN'T CHANGE this!!!!!!!!!!!!!
    
    return 0;
}
