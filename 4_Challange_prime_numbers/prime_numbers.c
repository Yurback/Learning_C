#include <math.h>
#include <stdio.h>

int isPrime(int num)
{
    double sq = sqrt(num);
    for(int i = 2; i < sq; i++) {
        if(num % i == 0)
            return 0;
    }
    if(num == 1)
        return 0;
    return 1;
}

int main(int argc, char** argv)
{
    int primes[100];
    int next = 2;
      for(int j = 0; j < 100; j++) {
        for(int i = next; i < 10000; i++) {
            if(isPrime(i)) {
                primes[j] = i;
                next = i + 1;
                break;
            }
        }
    }
        for(int j = 0; j < 100; j++)
            printf("%d : %d\n", j, primes[j]);
        return 0;
}
