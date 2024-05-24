#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    // TEST string
	char * str1 = "hello";
    char * str2 = NULL;
    str2 = calloc(strlen(str1)+2,sizeof(char));
    str2 = strcpy(str2, str1);
    
    str2[5]='s';
    str2[6]='\0';
    
    printf("str2 is %s\n",str2);
    
    int rc = strcmp(str1, str2);
    
    printf("rc is %d\n", rc);
    
    // TEST number (first need check that var not equal NULL)
    
    int num = 10;
    char a = 'A';
    int *num1 = &num;
    int *num3 = NULL;
    char *num4 = &a;
//    num4 = 0;
    if(num4!=NULL) printf("hello num4 %p\n", num4);
    

    int * num2 = NULL;
    num2 = calloc(1, sizeof(int));
    *num2 = 5;
    
    printf("Num > num2 is %d\n", (num2)? *num1>*num2 : 0); 
    
	return 0;
}
