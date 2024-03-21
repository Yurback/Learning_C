#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

//********************* Variant 1 for char *****************************
// int main(int argc, char **argv)
//{
//    int len;
//	FILE *pr;
//    char c;
//
//    pr = fopen("exm","r");
//    if(pr==NULL) {
//        printf("ERROR");
//        return -1;
//    }
//
//    fseek(pr,0,SEEK_END);
////     setlocale(LC_ALL, "ru_RU.UTF-8");
////     c=fgetwc(pr);
////     wprintf(L"the letter is %lc", c);
//    len = ftell(pr);
//    printf("The size of the file is %d\n", len);
//    fseek(pr,-2,SEEK_CUR);
//    while(len>1) {
//        c=fgetc(pr);
////        wprintf(L"the letter is %lc", c);
//       printf("the letter is %c\n", c);
//        len=len-1;
//     fseek(pr,-2,SEEK_CUR);
//    }
////
//    fclose(pr);
//    pr=NULL;
//
//	return 0;
//}
//
//********************* Variant 2 for wchar *****************************
// Выполняем в 2 этапа, на 1 этапе открываем поток с файлом считаем длину, закрываем поток
//Второй раз открываем поток, выделяем память и считываем строку в буфер, затем чар трансформируем в вчар
//и выводим реверсом результат

int main(int argc, char** argv)
{
    int len;
    FILE* pr;
    wchar_t* wc = NULL;
    char* c = NULL;
    char buf;
    int count;


    pr = fopen("exm", "r");
    if(pr == NULL) {
        printf("ERROR");
        return -1;
    }

    fseek(pr, 0, SEEK_END);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    //    freopen(NULL, "w", stdout);
    //    wc = fgetwc(pr);
    //         wprintf(L"the letter is %lc", wc);
    //         fseek(pr, -4, SEEK_CUR);
    //           wc = fgetwc(pr);
    //         wprintf(L"the letter is %lc", wc);
    len = ftell(pr);
    wprintf(L"The size of the file is %ld\n", len);
    fclose(pr);
    pr = NULL;

    wc = (wchar_t*)malloc(len*2);
    c = (char*)malloc(len);

    pr = fopen("exm", "r");
    int i = 0;
    for(; (buf = fgetc(pr)) != EOF; i++) {
        c[i] = buf;
    }
    c[i-1]='\0';                                 // Оченьважно в конце указывать '\0'

    mbstowcs(wc, c, 1000);
    count = wcslen(wc);

    wprintf(L"The size of the file is %ld\n", count);
    wprintf(L"The size of the file is %ls\n", wc);
    
    for(int i=count-1; i>=0; i--) {
        wprintf(L"leter is %lc\n", wc[i]);
    }
    
    fclose(pr);
    pr = NULL;
    free(wc);
//    free(c);             // c * не получается освободить, как вариант создать отдельную функцию
    wc=NULL;
//    c=NULL;


    return 0;
}