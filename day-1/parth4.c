#include<stdio.h>

int main(){
    int first = 42;
    int second = 63;

    printf("first = %d\n",first);
    printf("second = %d\n\n",second);

    first = first + second; 
    second = first - second; 
    first = first - second; 

    printf("first = %d\n",first);
    printf("second = %d\n",second);
}