#include<stdio.h>
int sum(int a,int b);
int sum(int a,int b)
{int s=a+b;
return s;
}
int main()
{ 
int a,b;
printf("enter any num");
scanf("%d%d",&a,&b);
int s= sum(a,b);
printf("the sum is %d",s);
return 0;
}