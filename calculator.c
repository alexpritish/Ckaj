#include<stdio.h>
int sum(int a,int b);
int sum(int a,int b){
    int c=a+b;
    return c;
}
int sub(int a,int b);
int sub(int a,int b){
    int d=a-b;
    return d;
}
int mul(int a,int b);
int mul(int a,int b){
    int e=a*b;
    return e;
}
int div(int a,int b);
int div(int a,int b){
    int f=a/b;
    return f;
}
int remind(int a,int b);
int remind(int a,int b){
    int g=a%b;
    return g;
}
int main(){
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    int d;
    printf("if the value od is 1 do '+' if the value is 2 do '-' if the value is 3 do '*' if the value is 4 do '/' if the value is 5 do reminder");
    scanf("%d",&d);
    if(d==1 || d==2 || d==3 || d==4 || d==5 ){
        if(d==1){
            int e=sum(a,b);
            printf("the sum is %d",e);
        }
        else if(d==2){
            int f=sub(a,b);
            printf("the sub value is %d",f);
        }
        else if(d==3){
            int g=mul(a,b);
            printf("the mul is %d",g);
        }
        else if(d==4){
            int h=div(a,b);
            printf("the value of div is %d ",h);
        }
        else if(d==5){
            int i=remind(a,b);
        printf("the remind value is %d",i);
        }
        else
           { printf("not works");
        }
    }
    int o;
    printf("enter the value of o");
    scanf("%d",&o);
    for(o=1;o<+d;o++){
        if(o==1 || o==2){

        if(o==1){
            break;
        }
        else if(o==2){
            continue;
        }
        else{
            printf("do nothing");
        } 
    }
    }
    return 0;
}