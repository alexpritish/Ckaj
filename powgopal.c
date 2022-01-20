#include <stdio.h>
int power(int a, int b);
int power(int a, int b)
{ 
    int x=1 , y;
    for(x=1; x<=b; x++) 
    {
    y= y*a;
    }
    return y;
}
int main()
{ 
int a,b;
printf ("enter any num");
scanf ("%d",&a);
printf ("enter any num");
scanf ("%d",&b);
int s;
s= power(a,b);
printf ("value of power %d",s);
return 0;
}