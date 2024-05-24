#include <malloc.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char* a;
    char* b;
    char* c;
} Str;

typedef struct {
    int size;
    Str array[]; // flexible array.
} StrArr;

int main(int argc, char** argv)
{
    StrArr* arr = NULL;
    int arrSize = 0;
    arrSize = 1;

    arr = malloc(sizeof(StrArr) + sizeof(Str) * arrSize);

    arr->size = arrSize;
    arr->array[arr->size - 1].a = calloc(75, sizeof(char));
    strcpy(arr->array[arr->size - 1].a, "Hello");
    printf("word is %s\n", arr->array[arr->size - 1].a);

    arr->size += 2;
    arr = realloc(arr, sizeof(StrArr) + sizeof(Str) * arr->size);
    printf("word is %s\n", arr->array[arr->size - 3].a);

    arr->size++;
    arr = realloc(arr, sizeof(StrArr) + sizeof(Str) * arr->size);
    arr->array[arr->size - 1].a = calloc(75, sizeof(char));
    strcpy(arr->array[arr->size - 1].a, "world");
    printf("word is %s\n", arr->array[3].a);

    return 0;
}
