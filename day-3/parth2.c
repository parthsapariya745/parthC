#include<stdio.h>

int main(){
    int number;

    printf("enter the any number : ");
    scanf("%d",&number);

    if (number < 0)
    {
        printf("This number is Negative",number);
    }

    else if (number == 0)
    {
        printf("This number is Neutral",number);
    }
    
    else{
        printf("This number is Positive");
    }
}