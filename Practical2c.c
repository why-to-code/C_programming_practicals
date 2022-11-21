#include<stdio.h>

int main()
{
    int side = 2,radius = 3 , height = 4;
    float vol_cube , vol_sph , vol_cy;

    vol_cube = side*side*side;
    vol_sph = (4/3)*(3.142)*radius*radius*radius;
    vol_cy = (3.142)*radius*radius*height;

    printf(" vol_cube : %f \n",vol_cube);
    printf(" vol_sph : %f \n",vol_sph);
    printf(" vol_cy : %f \n",vol_cy);

    return 0;
}