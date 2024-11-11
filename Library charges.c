//library charges
#include <stdio.h>
int minus(int b,int a);
int product(int c,int d);
int main(){
 int a;//due_date
 int b;//returndate
 int f;//bookid
 int c;//days_overdue
 int d;//fine_rate
 int e;//fine_amount

 printf("enter due_date (a):");
 scanf("%d",&a);
 printf("enter returndate (b):");
 scanf("%d",&b);

  c = minus(b,a);

  if(c<=0){
    d = 0;
  }else if (c<= 7){
  d= 20;
  }else if(c<=14){
  d=50;
  }else{
  d=100;
  }
  e = product(c,d);
  printf("The days_overdue is:%d\n",c);
  printf("The fine_rate is :%d ksh\n",d);
  printf("total fine amount:%d ksh\n",e);

return 0;
}
int minus(int b,int a){
return b-a;
}

    int product(int c,int d){
    return c*d;
    }
