//program implementing grading system
#include<stdio.h>
int main(){
    //declare variables for grades
    int mathematics,english,kiswahili,average;

    printf("Enter Mathematics grade,English grade,Kiswahili grade:");
    scanf("%d%d%d",&mathematics,&english,&kiswahili);

    average = (mathematics + english + kiswahili)/3;

    if(average>=70){
        printf("You score A\n");
    }
    else if(average>=60){
        printf("You score B\n");
    }
   else if(average>=50){
    printf("You score C\n");
   }
   else if(average>=40){
    printf("you score D\n");
   }
   else{
    printf("You score E\n");
   }

return 0;
}
