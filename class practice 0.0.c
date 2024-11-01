//C variables and data types
//Preprocessor directive
#include<stdio.h>//scanf(),printf()
int main(){
    //declaration  and initialization
    char a ='k';//%c
    char name[] = "Keith";//%s
    int age = 10;//0-9,%d
    float area =2.035;//%f
    double salary =2000.50;//%lf
    printf("The character is %c\n",a);
    printf("The string is %s\n",name);
    printf("The integer is %d years\n",age);
    printf("The float is %.3f cm square\n",area);
    printf("The double is %10.2lfksh\n",salary);

    return 0;
}
