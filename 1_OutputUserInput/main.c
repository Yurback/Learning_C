#include <limits.h>
#include <stdio.h>

int main(void)
{
    //        int MyFavouriteNumber = 0;
    //        printf("Please enter your number...\n");
    //        scanf("%d",&MyFavouriteNumber);
    //        printf("That is my favourite number: %p\n", &MyFavouriteNumber);

    //    char str[100] = "";
    //    printf("Please enter your sentence...\n");
    //    // Нельзя вводить длинную строку через %s, читает только первое слово до пробела
    //    scanf("%[^\n]", str);
    //    // Через * для строки можно получить значение по адресу для (разыменовывание)
    //    printf("So my sentence is: %c\n", *str);
    //    return 0;

    //    printf("Maximum Integer Value: %d\n", INT_MAX);
    //    printf("Minimum Integer Value: %d\n", INT_MIN);
    //    return 0;

//    int max = 0b00000000000000000000000000001110;
//    printf("My value is: %b\n", max);
//    int mask = 0b00000000000000000000000000001000;
    
//    int count = 0;
//    if(mask==1) count = 1;
//    while(mask!=1) {
//        mask=mask>>1;count++;
//    }
//    max = max>>count;
//    max= max^mask;
//    printf("My value is: %b\n", max);
//    max= max^mask;
//    printf("My value is: %b\n", max);
//    
//    int seven = 0;
//    seven = 52/7;
//    printf("Seven is %d\n", seven);
//    return 0;
    
//    printf("size of char type is %zd\n", sizeof("б"));
//    printf("size of int type is %zd\n", sizeof(int));
//    printf("size of double type is %zd\n", sizeof(double));
//    printf("size of float type is %zd\n", sizeof(float));
//    printf("size of unsigned type is %zd\n", sizeof(unsigned));
//    printf("size of long type is %zd\n", sizeof(long));
//    printf("size of long long type is %zd\n", sizeof(long long));
    printf("size of char long double is %zd\n", sizeof(long double));
     printf("size of char short is %zd\n", sizeof(short));

        int x = 1, y = 0, z = 5;

        int a = x && y || z++;

        printf("%d\n", z);
        printf()
    
}
