#include<stdio.h>
int main()
{
    int n = 30,sum;
    while (n>0){
        printf("%d",n);
        n--;//step
        sum+=n;
    }
    printf("The sum is %d",sum);
    return 0;
}
