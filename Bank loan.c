//Bank loan
#include<stdio.h>
int main(){
    int age,income;
    printf("Enter your age");
    scanf("%d",&age);

    printf("enter your income");
    scanf("%d",&income);



    if(age>=21&&income>21000){
        printf("congratulation you qualify a loan");
    }
    else{
            printf("You don't qualify");
    }

    return 0;
}
