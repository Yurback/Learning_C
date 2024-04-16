#include <stdio.h>
#include <malloc.h>

typedef void FUNC_TYPE(int const[], int const[], int **);

void printoption(void)
{
    printf("Which operation do you want to perform?\n\
    1.Add\n\
    2.Substract\n\
    3.Multiply\n\
    4.Divide\n\
    5.None ...\n\
    Enter choice: ");
    return;
}
void ad(int const a[], int const b[], int **c, int (*f)(int, int))
{
    *c = (int *)malloc(10);
    for (int i = 0; i < 10; i++)
    {
        (*c)[i] = f(a[i], b[i]);
    }
}

int (*func(int c))(int x, int y)
{
    if (c == 1)
    {
        int fun1(int x, int y)
        {
            return x + y;
        }
        return fun1;
    }
    if (c == 2)
    {
        int fun1(int x, int y)
        {
            return x - y;
        }
        return fun1;
    }
    if (c == 3)
    {
        int fun1(int x, int y)
        {
            return x * y;
        }
        return fun1;
    }
    if (c == 4)
    {
        int fun1(int x, int y)
        {
            return x * y;
        }
        return fun1;
    }
}

int main(void)
{
    int *result;
    // FUNC_TYPE *pf1 = ad, *pf2 = sub, *pf3 = prod, *pf4 = div;

    int choice = 0;
    printoption();
    scanf("%d", &choice);

    while (choice < 1 || choice > 5)
    {
        printoption();
        scanf("%d", &choice);
    }
    if (choice == 5)
    {
        printf("Your choice is %d\n", choice);
        return 0;
    }

    int ar1[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
    int ar2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int (*fpt)(int, int);

    fpt = func(choice);
    
    ad(ar1, ar2, &result, fpt);
    // FUNC_TYPE *arf[4] = {pf1, pf2, pf3, pf4};

    // arf[choice - 1](ar1, ar2, &result);

    printf("RESULT IS %d\n", result[9]);

    free(result);

    return 0;
}
