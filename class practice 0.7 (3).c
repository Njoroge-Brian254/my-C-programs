//C functions
#include<stdio.h>
#define PI 3.142
float area (float r){
float c;
c= PI*r*r;
return c;
}
int main(){
    float r;
    float c;
    printf("enter  value of r:");
    scanf("%f",&r);
    c =PI*r*r;
    printf("The area is %f",c);
    return 0;

}
