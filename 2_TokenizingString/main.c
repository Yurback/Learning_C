#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char name[] = "Hello how are you-my name is-Yuriy";
    char name2[3][50];
    char symbol[] = "-";
    char* token;
    printf("%s\n", name);
    printf("%s\n", symbol);
    token = strtok(name, symbol);
    int count = 0;
    while(token != NULL) {
        strcpy(name2[count], token);
        printf("%s\n", token);
        printf("%s\n", name);
        printf("%s\n", symbol);
        printf("%lu\n", strlen(token));
        token = strtok(NULL, symbol);
        count++;
    }
    for(int i=0; i<count; i++) {
        printf("%s\n", name2[i]);
    }

    return 0;
}
