#include<stdio.h>
int pow(int a,int b);
int pow(int a,int b){
    int n=1,i;
    for(i=1;i<=b;i++){
        n=n*a;
    }
    return n;
}
int main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    int n=pow(a,b);
    printf("the power value is %d",n);
    return 0;
}