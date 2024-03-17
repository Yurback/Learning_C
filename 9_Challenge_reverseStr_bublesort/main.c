#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

// printf and wprintf don't work together, look
// https://stackoverflow.com/questions/17700797/printf-wprintf-s-s-ls-char-and-wchar-errors-not-announced-by-a-compil
// we must use <freopen(NULL, "w", stdout);>

void reversestr(char arr[], wchar_t result[]);

void bblsortstr(char arr[4][20], int size);

int main(int argc, char** argv)
{
    char arr4[4][20] = { "4", "23", "2", "1" };
    int size = sizeof(arr4) / sizeof(arr4[0]);
    printf("size is %d\n", size);

    bblsortstr(arr4, size);
    printf("size is %d\n", size);

    //    setlocale(LC_ALL, "ru_RU.UTF-8");
   
    wchar_t res[100];
    char input[] = "Привет";
    //    scanf("%[^\n]s", input);
    reversestr(input, res);
        wprintf(L"%ls\n", res);

    return 0;
}

void reversestr(char arr[], wchar_t result[])
{
        freopen(NULL, "w", stdout);
        wchar_t newarr[100]={0};
        setlocale(LC_ALL, "ru_RU.UTF-8");
        mbstowcs(newarr, arr, 100);
        wprintf(L"wide_string is %ls\n", newarr);
         int sizewc = wcslen(newarr);
         wprintf(L"Length is %d\n", sizewc);
        for(int i =sizewc-1 , j = 0; i >= 0; i--, j++) {
            wprintf(L"let %lc\n", newarr[i]);
            result[j]=newarr[i];
             wprintf(L"result %lc\n", result[j]);
        }
        result[sizewc] = L'\0';
         wprintf(L"FINALresult %ls\n", result);
         
         
//         freopen(NULL, "w", stdout);
    //    wcscpy(result, newarr);

//    setlocale(LC_ALL, ""); //Требуется выполнять для следующей строки по определению размера символа

//        int s = mblen(arr, 4); //Правильное определение размера символа для англ/русского алфавитов
//        printf("size of world %d\n", s);
//    int size = strlen(arr);
//    int sizeElement = size / s;
//    printf("%d\n", sizeElement);
//    printf("%d\n", size);
//    printf("world is %.*s\n", s, arr);
//    for(int i = size - s, j = 0; i >= 0; i -= s, j += s) {
//        printf("letter is %.*s\n", s, arr + i);
//
//        result[j] = arr[i];
//    };
// 
//       
//    result[sizeElement] = '\0';
//    
//    wprintf(L"%ls\n",result);
    return;
}

void bblsortstr(char arr[4][20], int size)
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
    return;
}