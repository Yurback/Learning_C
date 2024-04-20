#include <stdio.h>
#include <malloc.h>

enum types_vars {SI, UI, SF, UF, SD, UD};

char * numtochar(void*,enum types_vars);

int main(int argc, char **argv)
{
    int foo = 17;
    char * str = NULL;
    str = numtochar(&foo,SI);
    printf("%s\n",str);
    free(str);
	return 0;
}

char * numtochar(void *num, enum types_vars t) {
    int length = 0;
    char *str =NULL;
    if(t==SI || t == UI){
        length = snprintf( NULL, 0, "%d",*(int*)num );
        printf("the length is %d\n",length);
        str = malloc(length+1);
        snprintf(str,length+1,"%d",*(int*)num);
    }
    else if(t==SF || t == UF) {
        length = snprintf( NULL, 0, "%f",*(float*)num );
        printf("the length is %d\n",length);
        str = malloc(length+1);
        snprintf(str,length+1,"%f",*(float*)num);
    }
     else if(t==SD || t == UD) {
        length = snprintf( NULL, 0, "%f",*(double*)num );
        printf("the length is %d\n",length);
        str = malloc(length+1);
        snprintf(str,length+1,"%f",*(double*)num);
    }
    return str;
}