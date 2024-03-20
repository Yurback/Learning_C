#include <stdio.h>

int main(int argc, char** argv)
{
    FILE* fp;
    int count=0;
    char c;
    fp = fopen("Home_task1", "r");
    if(fp == NULL) {
        perror("Error");
        return (-1);
    }
    while((c = fgetc(fp)) != EOF) {
        if(c == '\n')
            count++;
        printf("%c", c);
    }
    fclose(fp);
    fp = NULL;

    printf("\nThe total amount of strings is %d\n", ++count);
    return 0;
}
