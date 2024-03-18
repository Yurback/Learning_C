#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int stlength(const char* str);

int main(int argc, char** argv)
{
   char hello[]="hello";
   int l = stlength(hello);
    printf("the size of string is %d\n", l);
    setlocale(LC_ALL, "");
    int s = mblen(hello, 8);
    printf("s equal to %d\n",(int)s);
    printf("%.*s\n",s,hello);
    
    return 0;
}

int stlength(const char* str)
{

    const char *pbegin = str;
    int count = 0;
    while(*str) {
        str++;
    }
            count = str - pbegin;
    return count;
}