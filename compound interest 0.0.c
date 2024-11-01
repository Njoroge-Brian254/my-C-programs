//compound interest;
#include<stdio.h>
int main(){
    int interest,rate,time,amount;

    printf("enter amount:");
    scanf("%d",&amount);
    printf("The amount is :%d\n",amount);

    printf("enter rate:");
    scanf("%d",&rate);
    printf("The rate is:%d\n",rate);

    printf("enter time:");
    scanf("%d",&time);
    printf("The time is:%d\n",time);

    interest = amount*(1+rate/100)*time;



    printf("the interest is%d",interest);

    return 0;
}
