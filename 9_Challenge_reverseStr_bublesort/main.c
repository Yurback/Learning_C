#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversestr(char arr[], char result[]);

void bblsortstr(char arr[4][50], int size);

int main(int argc, char** argv)
{
    //    char res[100];
    //    char input[100];
    //    scanf("%[^\n]s", input);
    //    reversestr(input, res);
    //    printf("%s\n", res);

    char arr[4][50] = { "4", "23", "2", "1" };
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size is %d\n", size);

    bblsortstr(arr, size);



    return 0;
}

void reversestr(char arr[], char result[])
{
    int size = strlen(arr);
    printf("%d\n", size);
    for(int i = size - 1, j = 0; i >= 0; i--, j++) {
        result[j] = arr[i];
    };
    result[size] = '\0';
    return;
}

void bblsortstr(char arr[4][50], int size)
{
    char memory[100];
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            //            printf("%s\n", arr[i]);
            //            printf("%s\n", arr[j]);
            //            int exp = strcmp(arr[i], arr[j]);
            //            printf("%d\n", exp);
            if(strcmp(arr[i], arr[j]) > 0) {
                strcpy(memory, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], memory);
                //                printf("%s\n", arr[i]);
            }
        }
    }

    for(int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }
}