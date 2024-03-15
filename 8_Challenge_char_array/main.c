#include <stdio.h>

int cntchar(char str[]);
void concatstr(char str1[], char str2[], char result[]);
int isequalstr(char str1[], char str2[]);

int main(int argc, char** argv)
{
    // 1 Part
    int x = 0;
    char hello[] = "Hello world";
    x = cntchar(hello);
    printf("The length of string is %d\n", x);

    // 2 Part
    char adj[] = "Good ";
    char noun[] = "Day";
    int length = cntchar(adj) + cntchar(noun);
    char result[length + 1];
    concatstr(adj, noun, result);
    printf("Final string is: %s\n", result);

    // 3 Part
    char p[] = "Weather";
    char y[] = "Weather"; //"Further";
    int z;
    z = isequalstr(p, y);
    printf("The result is %d\n", z);

    return 0;
}

int cntchar(char str[])
{
    int count = 0;
    while(str[count]) {
        count++;
    }
    return count;
}

void concatstr(char str1[], char str2[], char result[])
{

    int index = 0;
    int memoryInd = 0;
    while(str1[index]) {
        result[index] = str1[index];
        index++;
    }
    memoryInd = index - 1;
    index = 0;
    while(str2[index]) {
        result[memoryInd] = str2[index];
        index++;
        memoryInd++;
    }
    result[memoryInd] = '\0';
    return;
}

int isequalstr(char str1[], char str2[])
{
    int check = 1;
    int ind = 0;
    while(str1[ind]) {
        if(str1[ind] != str2[ind]) {
            check = 0;
            break;
        }
        ind++;
    }
    if(str2[ind] != '\0')
        check = 0;
    return check;
}