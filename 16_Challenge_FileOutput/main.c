#include <wctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main(int argc, char** argv)
{
    FILE* pr;
    pr = fopen("Home_task", "r");
    char ch;
//    wchar_t wch;
    char str[1000];
    wchar_t buf[1000];
    int count=0;
  
    if(pr == NULL) {
        printf("ERROR");
        return -1;
    }

    FILE* pw;
    pw = fopen("Home_task_copy", "w");
//    setlocale(LC_ALL, "ru_RU.UTF-8");
    while((ch = fgetc(pr)) != EOF) {
        str[count] = ch;
        count++;
    }
    str[count]='\0';
           
    setlocale(LC_ALL, "ru_RU.UTF-8");
    mbstowcs(buf, str, 1000);
    for(int i=0; buf[i]!='\0'; i++) {
        buf[i]=towupper(buf[i]);
        fputwc(buf[i], pw);
    }
    wprintf(L"my string is %ls",buf);
    
     //************************************************* transform to wchar_t

    //    freopen(NULL, "w", stdout); // используем чтобы переклюить на вывод wchar_t или char
    //    setlocale(LC_ALL, "ru_RU.UTF-8");
    //    mbstowcs(buf, str, 1000);
    //    wprintf(L"\nwide_string is %lc\n", towupper(buf[3]));

    //**************************************************
    fclose(pr);
    fclose(pw);
    pr = pw = NULL;

    remove("Home_task");
    rename("Home_task_copy","Home_Task");

//    printf("Буква А - %d, буква а - %d length %d\n", 'А', 'а', (int)'а' - (int)'А');
    //Буква А - 53392, буква а - 53424 length 32
    printf("%d", 3^(1<<1));
    return 0;
}
