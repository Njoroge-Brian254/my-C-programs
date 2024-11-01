//C variables and data types
#include<stdio.h>//scanf(),printf()
int main(){
    int amount,rate,time,simple_interest;

    printf("Enter amount:");
    scanf("%d",&amount);


     printf("Enter rate:");
     scanf("%d",&rate);

     printf("Enter time:");
     scanf("%d",&time);

     simple_interest = amount*time*rate/100;
     //output result
     printf(" simple interest is %d",(amount*rate*time/100));

     return 0;
}




