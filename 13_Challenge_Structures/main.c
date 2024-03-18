#include <stdio.h>

int main(int argc, char** argv)
{
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
