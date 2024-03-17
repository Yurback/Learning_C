//#include <stddef.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
//#include <string.h>

// printf and wprintf don't work together, look
// https://stackoverflow.com/questions/17700797/printf-wprintf-s-s-ls-char-and-wchar-errors-not-announced-by-a-compil
// we must use <freopen(NULL, "w", stdout);>

int main(int argc, char** argv)
{

        setlocale(LC_ALL, "ru_RU.UTF-8");
    //        wchar_t sym = L'Ю'; //Позволяет транслитерацию на английский без  setlocale(LC_ALL, "ru_RU.UTF-8");
    wchar_t sym = L'Ю';
    wchar_t sym2 = L'р';
    wchar_t sym3 = L'а';
    wprintf(L"%lc\n", sym);
    wchar_t word[30];
    word[0] = sym;
    word[1] = sym2;
    word[2] = sym3;
    word[3] = L'\0';
    wprintf(L"my word is %ls\n", word);

    char src[] = "Hello";
    wchar_t destword[100];

    mbstowcs(destword, src, 100);

    wprintf(L"My wcharword is %ls\n", destword);
    wprintf(L"let 1 is %lc\n", destword[0]);

    freopen(NULL, "w", stdout);

    char hello[] = "Привет";
    char* phel = hello;

//    setlocale(LC_ALL, ""); // Требуется выполнять для следующей строки по определению размера символа

    int s = mblen(&hello[0], 4); // Правильное определение размера символа для англ/русского алфавитов

    printf("string is %s\n", hello);
    printf("1 element is %.*s\n", s, hello);
    printf("1 element is %.*s\n", s, phel + s);
    //   printf("2 element is %c\n", *(phel+1));

    int sizechar = 0;
    sizechar = sizeof(char);
    printf("The size of russian letter is %d\n", sizechar);

    int number = 0;
    int* pnumber = NULL;

    number = 10;
    printf("number's address: %p\n", &number);
    printf("number's value: %d\n\n", number);

    pnumber = &number;

    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's size: %zd bytes\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber);
    printf("value pointed to: %d\n", *pnumber);

    return 0;
}
