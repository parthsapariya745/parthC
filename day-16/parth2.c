#include<stdio.h>

int divison(){
    int user;
    printf("Enter any number: ");
    scanf("%d",&user);

    if (user %3 == 0 && user %5 == 0)
    {
        printf("The given number is divisible by both 3 & 5.",user);
    }
    else{
        printf("The given number is not divisible by both 3 & 5.",user);
    }
    
}

int main(){
    divison();
}