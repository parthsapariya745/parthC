#include<stdio.h>

int main(){
    int start,end;

    printf("enter the first year : ");
    scanf("%d",&start);

    printf("enter the last year : ");
    scanf("%d",&end);

    while (start <= end)
    {   
        if (start % 4 == 0)
        printf("%d\n",start);
        start++;
    }
}