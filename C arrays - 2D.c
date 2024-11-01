//C arrays - 2D
#include<stdio.h>

int main(){
int a,b;
int marks[2][3] ={{42,56,64},{71,85,94}};
for(a=0;a<2;a++){
    for(b=0;b<3;b++){
        printf("marks[%d][%d] = %d\n",a,b,marks[a][b]);
    }
}
    return 0;
}
