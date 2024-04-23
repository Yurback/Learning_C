#include <stdio.h>
#include <string.h>

struct name {
    int age;
    char name[100];
};

struct name newname(void) {
    int n = 10;
    char *name = "Yuriy";
    printf("size of name is %ld\n", sizeof(name));
     printf("size of name is %ld\n", strlen(name));
    struct name me = {0};
    me.age = n;
    strcpy(me.name,name);
    printf("size of name is %ld\n", sizeof(me.name));
    return me;
};

int main(int argc, char **argv)
{
	struct name newstruct = {0};
    struct name newstruct2 = {0};
    printf("adress of newstruct: %p\n", &newstruct);
    printf("adress of funcstruct: %p\n", newname());
    newstruct = newname();
    newstruct2 = newstruct;
    printf("NEWadress of newstruct: %p\n", &newstruct);
    printf("NEWadress of newstruct2: %p\n", &newstruct2);
    printf("Age: %d, name: %s\n",newstruct.age, newstruct.name);
    printf("Age2: %d, name2: %s\n",newstruct2.age, newstruct2.name);
    return 0;
}
