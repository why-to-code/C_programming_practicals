#include<stdio.h>

int main()
{
    int length = 4 , breadth = 2;
    int side = 3;
    int radius = 2;
    int area_rec , area_squ ;
    float area_cir;

    area_rec = length * breadth;
    area_squ = side*side;
    area_cir = (3.142)*radius*radius;

    printf(" Area of rectangle is : %d \n", area_rec);
    printf(" Area of square is : %d \n", area_squ);
    printf(" Area of circle is : %f \n", area_cir);
    return 0;
}