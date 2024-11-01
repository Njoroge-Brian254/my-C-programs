//program area (variables/data types)
#include<stdio.h>
int main(){
    int area,k,l;

    printf("enter length k");
    scanf("%d",&k);

    printf("enter width l");
    scanf("%d",&l);

    area=k*l;
    printf("the area of %d and%d is%d",k,l,area);

    return 0;
}
