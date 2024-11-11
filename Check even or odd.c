//C-function to check even or odd numbers
#include<stdio.h>
void evenorodd(int number){

     if(number %2 ==0){
        printf("The number is even\n");
     }else{
      printf("The number is odd\n");
      }

}
int main(){
    int number;
     printf("enter number");
     scanf("%d",&number);

    /* if(number %2 ==0){
        printf("The number is even\n");
     }else{
      printf("The number is odd\n");*/
evenorodd(number);
      return 0;
      }
