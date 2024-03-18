#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int memoryasked = 0;
    printf("Please enter a memory size for yuor strings\n");
    scanf("%d", &memoryasked);
    getchar();

    char* pchar= (char*) malloc(memoryasked*sizeof(char));
    printf("Write the text note...\n");
    scanf("%[^\n]s", pchar);
    
    printf("Thks a lot, your text note is...\n%s\n", pchar);
    
    free(pchar);
    


    return 0;
}
