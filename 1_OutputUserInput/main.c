#include <limits.h>
#include <stdio.h>
// Пример карирования часть 1
int (*sum (int x)) (int y)
{
    int sum1 (int y)
    {
        return x + y;
    }
    return sum1;
}

int main(void)
{
    // Пример карирования часть 2
    int carry = 0;
    
    carry = sum (12) (13);
    
    printf("%d\n", carry);
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
        int var1 = 0b00000000000000000000000000001110;
        printf("My value is: %b\n", var1);
        // хотим заменить 3 бит на 0 а потом обратно
        var1 = var1^(1<<3);
        printf("var1 is %b\n",var1);
        var1 = var1^(1<<3);
        printf("var1 is %b\n",var1);
        
          printf("%d\n", 0b0^(1<<7));
        printf("Check bitwise %d\n", 127>>7);

        int max = 0b00000000000000000000000000001110;
        printf("My value is: %b\n", max);
        int mask = 0b00000000000000000000000000001000;

        int count = 0;
        if(mask==1) count = 1;
        while(mask!=1) {
            mask=mask>>1;count++;
        }
        max = max>>count;
        max= max^mask;
        printf("My value is: %b\n", max);
        max= max^mask;
        printf("My value is: %b\n", max);
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
    printf("%d\n", a);
    
//    char h[20]; // будет ошибка
    char *h;
    h="time's up";
    printf("string is %s",h);
}
