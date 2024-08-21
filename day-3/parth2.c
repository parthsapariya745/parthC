#include<stdio.h>

int main(){
    int number;

    printf("enter the any number : ");
    scanf("%d",&number);

    if (number < 0)
    {
        printf("This number is Negative");
    }

    else if (number == 0)
    {
        printf("This number is Neutral");
    }
    
    else{
        printf("This number is Positive");
    }
}