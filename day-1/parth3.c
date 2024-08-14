#include<stdio.h>

int main(){
    int first = 12,second = 15,third;

    printf("first = %d\n",first);
    printf("second = %d\n\n",second);

    third = first;
    first = second;
    second = third;

    printf("first = %d\n",first);
    printf("second = %d",second);
}