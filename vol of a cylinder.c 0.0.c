//volume of a cylinder;
#include<stdio.h>//scanf(),printf()
#define PI 3.142
int main (){
    float volume,radius,height;

    printf("enter radius of cylinder:");
    scanf("%f",&radius);
    printf("The radius of cylinder is:%f cm\n",radius);

    printf("enter height of cylinder:");
    scanf("%f",&height);
    printf("The height of cylinder is:%f cm\n",height);


    volume = PI*(radius*radius)*height;

    printf("the volume of a cylinder is: %2f\n",volume);

    return 0;
}
