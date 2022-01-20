#include<stdio.h>
void display(); // Function prototype

// Function definition
void display(){
    printf("This is display\n"); 
}
int sum (int a, int b); // function prototype declaration
int sum (int a, int b){
    // int c;
    int c = a + b;
    printf("hello world>>\n");
    printf("local:%d\n",c);
    return c;
}

int main(){
    // int a;
    printf("Initializing display function\n");
    display();
    int a=sum(5,10);
    printf("global:%d\n",a);
    display(); // Function Call
    printf("Display function finished its work\n");
    return 0;
}

