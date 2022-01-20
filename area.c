#include <stdio.h>
#include <math.h>
int area(float a, float b, float c);
int area(float a, float b, float c)
{
float s=(a+b+c)/2;//half of perimeter
float x=s*(s-a)*(s-b)*(s-c);
float y=sqrt(x);
return s;
}
int main() 
{
float a, b, c;
printf("enter the first side:");
scanf("%f",&a);
printf("enter the second side:");
scanf("%f",&b);
printf("enter the third side:");
scanf("%f",&c);
float e= area(a,b,c);
printf ("The area is %.2f",e);
return 0;
}