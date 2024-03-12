#include <stdio.h>

// 1-st part
//int isPrime(int num)
//{
//    if((num % 2 == 0 && num != 2) || num <= 1)
//        return 0;
//    for(int i = 3; i * i <= num; i += 2) {
//        if(num % i == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int gcd(unsigned num1, unsigned num2)
//{
//    int gcd = 1;
//    num1 == num2 ? gcd = num1 : num1 % num2 == 0 ? gcd = num2 : num2 % num1 == 0 ? gcd = num1 : 0;
//    if(gcd != 1)
//        return gcd;
//    int min;
//    int max = (int)num1 - (int)num2 > 0 ? num1 : num2;
//    min = max == num1 ? num2 : num1;
//    for(int d = 2; d * d <= max; d++) {
//        if(max % d == 0) {
//            if(min % d == 0 && d > gcd)
//                gcd = d;
//            int great_denum = max / d;
//            if(great_denum > d && num1 % great_denum == 0 && num2 % great_denum == 0)
//                gcd = great_denum;
//        }
//    }
//    return gcd;
//}
// 2-variant more short
int gcd(unsigned num1, unsigned num2)
{
    int tmp;
    while(num2 != 0) {
        tmp = num1%num2;
        num1=num2;
        num2=tmp;
        }
    return num1;
}

// 2-nd part
float abs_number(float num)
{
    float check = 0;
    check = num < 0 ? -num : num;
    return check;
}
// 3-rd part
float square_root(float num)
{
    if(num < 0) {
        printf("Square_root only takes a positive number\n");
        return -1;
    }
    float i = 1;
    while((int)(i * i * 100) != (int)num * 100) {
        if(i * i < num)
            i++;
        if(i * i > num)
            i -= 0.01;
    }
    return i;
}

int main(int argc, char** argv)
{
    //    printf("%d\n", isPrime(15));
    //    printf("%d\n", isPrime(31));
    //    printf("%d\n", isPrime(30));
    //    printf("%d\n", isPrime(3));
    //    printf("%d\n", isPrime(4));
    //    printf("%d\n", isPrime(5));
    //    printf("%d\n", isPrime(6));
    //    printf("%d\n", isPrime(7));
    //    printf("%d\n", isPrime(2));

    printf("gcd is %d\n", gcd(4, 6));

    printf("%.2f\n", abs_number(55));

    printf("%.2f\n", square_root(-25));

    return 0;
}
