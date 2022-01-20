#include<stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum (int a, int b); // function prototype declaration
int sum (int a, int b){
    // int c;
    int c = a + b;
    printf("hello world>>");
    return c;   
}
int avg (int a, int b); // function prototype declaration
int avg (int a, int b){
    // int c;
    int d = (a + b )/2;
    return d;
    
}
int main(){
    int d = sum(2, 15); // function call
    printf("The value of c is %d\n",d);
    int e = sum(10,5);
    printf("%d\n",e);
    int f= avg(3,5);
    printf("%d",f);
    return 0;
}

// int sum (int a, int b){
//     int c;
//     c = a + b;
//     return c;
// }