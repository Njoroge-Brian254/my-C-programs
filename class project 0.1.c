//C variables and data types
//preprocessor directive
#include<stdio.h>//scanf(),printf()
int main(){
    char a;
    char name[]={};
    int age;
    float area;
    double salary;

    printf("Enter a character:");
    scanf("%c",&a);
    printf("The character is%c\n",a);

    printf("Enter your name:");
    scanf("%s",&name);
    printf("The string is %s\n",name);

    printf("Enter age:");
    scanf("%d",&age);
    printf("The age is %d years\n",age);

    printf("Enter area:");
    scanf("%f",&area);
    printf("The area is %f\n",area);

    printf("Enter salary:");
    scanf("%lf",salary);
    printf("The salary is %lf\n",salary);

    return 0;
}
