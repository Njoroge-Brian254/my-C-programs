//surface area of a cylinder;
#include<stdio.h>
#define PI 3.142
int main(){
    float surface_area,radius,height;

    printf("enter radius:");
    scanf("%f",&radius);
    printf("The radius is:%f cm\n",radius);

    printf("enter height:");
    scanf("%f",&height);
    printf("The height is :%f cm\n",height);

    surface_area = 2*PI*(radius*radius)+(2*PI*radius*height);

    printf("the surface_area is: %2f\n" ,surface_area);

    return 0;
}
