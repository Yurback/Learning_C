#include <stdio.h>

int main(int argc, char** argv)
{
    char* str = "привет";

    char strc[] = "good morning\n";

    strcpy(strc, str);

    printf("%s\n", strc);

    return 0;
}
