#include <stdio.h>
#include <stdlib.h>
//#include <string.h>



int main(int argc, char** argv)
{
    // Example of trancechanging valriable
    double myvar;
    char string[] = "45.36  \n\
    500.28 267.888";
    char* pstr = string;
    char* ptr = NULL;
    
    double newvar;
    newvar = strtod(string,NULL);
    printf("%f\n",newvar);
    int shift = 0;
    while(1) {
        myvar = strtod(string+shift, &ptr);
        if(string+shift == ptr) {
            break;
        } else {
            printf("%f\n", myvar);
            shift = ptr - string;
        }
    }
    
   
    newvar = strtod(string,NULL);
    printf("%f\n",newvar);

    return 0;
}
