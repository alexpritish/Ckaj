#include<stdio.h>
int power(int x,int y);
int power(int x,int y){
    int i,r=1,z;
    for(i=1;i<=y;i++){
        z=x;
        r=r*z;
    }
    return r;
}
int main()
{
    int x,y;
    printf("enter x");
    scanf("%d",&x);
    printf("enter y");
    scanf("%d",&y);
    int d=power(x,y);
    printf("the power value is %d",d);
    return 0;
}