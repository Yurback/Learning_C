#include <stdio.h>

//Вывод из функции нельзя возвращать Поинтер на данные которые созданые внутри функции.
//Можно возвращать структуру или указатель на данные которые уже переданы в функцию в виде указателя (т.е. созданы в куче)
//Функция получает параметры по значению (копии)
//Мы всегда должны передавать структуру в функцию через указатель, т.к. это быстрее и копируется только адрес

#define SLEN 60

struct numset {
    int * num1;
    int * num2;
};

//struct numset* newnum(void);// Так делать нельзя, можно только возвращать структуру
struct numset newnum(void);

int main(int argc, char** argv)
{
//    int newvalue;
//struct numset retval = newnum();
//newvalue = *(retval.num2);
    printf("value inside the scope of newnum func is%d\n", *(newnum().num2));
    printf("const is %d\n",SLEN);
    
    
    struct employee {
        char name[100];
        int hireDate;
        float salary;
    };

    struct employee emp1;
    
    printf("Writre your name:\n");
    scanf("%[^\n]s", emp1.name);
    printf("Write your hireDate:\n");
    scanf("%d", &emp1.hireDate);
    printf("Salary desired\n");
    scanf("%f",&emp1.salary);
    
    printf("The new employee is:\n%s, %d, %.2f\n", emp1.name, emp1.hireDate, emp1.salary);
    

    return 0;
}

//struct numset *newnum(void) { // Так делать нельзя, можно только возвращать структуру
    struct numset newnum(void) { 
    struct numset ns;
    int bignum = 1200;
    int bignum2=2500;
    ns.num1=&bignum;
    ns.num2=&bignum2;
    //return &ns; // Так делать нельзя, можно только возвращать структуру
    return ns;
}