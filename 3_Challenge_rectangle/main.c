#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    
    double height = atoi(argv[1]);
    double width = atoi(argv[2]);
    double perimetr = 2 * (height + width);
    double area = height * width;
    printf("Rectangle has: height %.2f, width %.2f, perimetr %.2f and the area is %.2f\n", height, width, perimetr,
           area);
           
    return 0;
}
