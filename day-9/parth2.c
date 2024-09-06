#include<stdio.h>

int main(){
    int user,digit = 0;

    printf("enter any number : ");
    scanf("%d",&user);

    while (user != 0) {
        user = user / 10; 
        digit++; 
    }

    printf("Total number of digits: %d",digit);
}