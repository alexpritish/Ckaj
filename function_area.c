#include<stdio.h>
#include<math.h>
int side(int a,int b,int c);
int side(int a,int b,int c){
    int s=(a+b+c)/2;
    return s;
}
int main()
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    int d=side(a,b,c);
    printf("the value of s is :%d\n",d);
    int e=d*(d-a)*(d-b)*(d-c);
    int f=sqrt(e);
    printf("the area of the traiangle is :%d",f);
    return 0;
}