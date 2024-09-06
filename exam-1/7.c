#include<stdio.h>

int main(){
    int first,last;

    printf("enter the first year : ");
    scanf("%d",&first);

    printf("enter the last year : ");
    scanf("%d",&last);

    while (first <= last)
    {   
        if (first % 4 == 0)
        {
            printf("%d\n",first);
        }
        first++;
    }
}