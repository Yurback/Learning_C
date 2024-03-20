#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Вывод из функции нельзя возвращать Поинтер на данные которые созданые внутри функции.
//Можно возвращать структуру или указатель на данные которые уже переданы в функцию в виде указателя (т.е. созданы в
//куче) Функция получает параметры по значению (копии) Мы всегда должны передавать структуру в функцию через указатель,
//т.к. это быстрее и копируется только адрес

#define SLEN 100

struct item {
    char* itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item* const pitem);

void printItem(struct item const* pitem);

//**************************************************
int main(int argc, char** argv) { 
    struct item prod;
    readItem(&prod);
    printItem(&prod);
    
    printf("memory: %ld\n", strlen(prod.itemName)+1);
    
    
    return 0; }
//**************************************************

void readItem(struct item* const pitem)
{
    char buf[SLEN];
    printf("Please specify the product, name:\n");
    scanf("%[^\n]s", buf);
    pitem->itemName = (char*)malloc(strlen(buf) * sizeof(char) + 1);
    strcpy(pitem->itemName, buf);
    getchar();
    printf("Write quantity of the product:\n");
    scanf("%d", &(pitem->quantity));

    printf("Write price of the product:\n");
    scanf("%f", &(pitem->price));

    pitem->amount = (float)pitem->price * pitem->quantity;
 
    return;
}

void printItem(struct item const* pitem)
{
    printf("Your choice has been done, thank you.\n\nThe product is:\n");
    printf("\tItem name: %s\n\tQuantity: %d\n\tPrice: %.2f\n\tAmount: %.2f\n", pitem->itemName, pitem->quantity,
           pitem->price, pitem->amount);
    return;
}