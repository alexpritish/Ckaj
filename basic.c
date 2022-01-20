#include<stdio.h>
int a();
int a(){
    int b=55;
    printf("value of integer:%d\n",b);
    return b;
}
int c(int b);
int c(int b){
    b=65;
    printf("value of parameter:%d\n",b);
    return b;
}
int main(){
int x=a();
printf("new:%d\n",c);
int d=c(70);
printf("new paramater:%d\n",d);
return 0;
}