#include <stdio.h>

//++++++++++++++++++++++++++ 1-2 VARIANT +++++++++++++++++++++++++++++++++++++++++++++++++++++

//#include <math.h>

// 
//int isPrime(int num)
//{
//    if(num % 2 == 0 && num != 2 || num <= 1 )
//        return 0;
//    for(int i = 3; i * i <= num; i += 2) {
//        if(num % i == 0)
//            return 0;
//    }
//    return 1;
//}

// int isPrime(int num)
//{
//     double sq = sqrt(num);
//     for(int i = 2; i <= sq; i++) {
//         if(num % i == 0)
//             return 0;
//     }
//     if(num == 1)
//         return 0;
//     return 1;
// }
//
// int main(int argc, char** argv)
//{
//     int primes[100] = { 0 };
//     printf("%d\n", primes[10]);
//     int next = 2;
//     for(int j = 0; primes[j-1] < 100; j++) {
//     // 1 -ый вариант с циклом while()
//         while(primes[99] == 0) {
//             if(isPrime(next)) {
//                 primes[j] = next;
//                 next++;
//                 break;
//             }
//             next++;
//         }
//     }
//     // 2-ой вариант с циклом for()
//     //        for(int i = next; i < 10000; i++) {
//     //            if(isPrime(i)) {
//     //                primes[j] = i;
//     //                next = i + 1;
//     //                break;
//     //            }
//     //        }
//     //
//     for(int j = 0; primes[j]<100; j++)
//         printf("%d : %d\n", j, primes[j]);
//     return 0;
// }

//++++++++++++++++++++++++++ 1-2 VARIANT +++++++++++++++++++++++++++++++++++++++++++++++++++++

int main()
{
    int p;
    int i;
    int primes[50] = { 0 };
    primes[0] = 2;
    primes[1] = 3;

    int PrimeIndex = 2;

    _Bool isPrime = 1;

    for(p = 5; p < 100; p+=2) {
        isPrime = 1;
        for(i = 1; isPrime && p / primes[i] >= primes[i]; ++i) {
                if(p%primes[i]==0) {
                    isPrime = 0;
                    break;
                }
        }
        if(isPrime) {
        primes[PrimeIndex] = p;
        PrimeIndex++;
        }
    }
    
    for (int i = 0; i<PrimeIndex; i++) printf("%d : %d\n", i, primes[i]);
    
    return 0;
}