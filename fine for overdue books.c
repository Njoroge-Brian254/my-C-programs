#include<stdio.h>
int main(){
int due_date,returnDate,days_overdue,fine_rate,fine_amount;
int book_id=9;

printf("enter the book_id:");
scanf("%d",&book_id);

printf("Enter the due_date:");
scanf("%d",&due_date);

printf("Enter the returnDate:");
scanf("%d",&returDate);

days_overdue=returnDate - due_date;

if(days_overdue<=7){
    fine_rate=20;
}else f(days_overdue<=14){
fine_rate=50;
}else{
fine_rate=100;
}

fine_amount=days_overdue*fne_rate;

printf("The days_overdue s :%d\n",days_overdue);
printf("The fine_rate is :%d\n",fine_rate);
printf("The fine_amount is :%d ksh\n",fine_amount);

return 0;
}
