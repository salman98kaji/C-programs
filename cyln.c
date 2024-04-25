#include <stdio.h>
#define PI 3.149

int main(){
    float rad, height, sur_area, vol;
    printf("Enter the radius and height of the cylinder: ");
    scanf("%f %f",&rad,&height);

    sur_area=(2*PI * rad*rad) + (2*PI*rad*height);
    vol=PI *rad*rad*height;

    printf("The vol of cylinder is:%.3f\n",vol);
    printf("The surface area of cylinder is:%.3f\n",sur_area);
    return 0;
}