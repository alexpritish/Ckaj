#include<stdio.h>
int gcd(int a,int b);
int gcd(int a,int b){
    int n,num,reminder=1;//kochi beauty kochir chele sobai chutiya dhemna gandu banchod suar ar ba66a lewra kochi choda
    for(n=a;n<=a;n++){// maitraya mota choda dum malang malang 
        if(a%n==0){   // dhur baba  
            if(b%n==0){
                num=n*reminder;
            }
        }
}
return num;

}
int main()
{
    int a,b,n;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    int d=gcd(a,b);
    printf("the gcd value is %d",d);
    return 0;
}