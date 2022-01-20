#include<stdio.h>
#include<conio.h>
long calc( int );
long calc( int num)
{
 int x;
 long res=1;
 for(x=1; x<=num; x++)
   res=res*x;
 return (res);
}
int main()
{
 int i,j,row,pas;
 printf("Enter no. of rows in pascal triangle : ");
 scanf("%d", &row);
 for(i=0; i<row; i++)
 {
   for(j=0; j<=(row-i-1); j++)
     printf(" ");
   for(j=0; j<=i; j++)
   {
     pas=calc(i)/(calc(j)*calc(i-j));
     printf("%ld ",pas); //take single space
   }
   printf("\n");
 }
 getch();
 return 0;
}

