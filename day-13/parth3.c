#include<stdio.h>

int main(){
    int user;

    printf("Enter array size: ");
    scanf("%d",&user);

    int a[user];
    for (int i = 0; i < user; i++)
    {
        printf("Enter array A's elements a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("\n");

    int b[user];
    for (int i = 0; i < user; i++)
    {
        printf("Enter array B's elements b[%d]: ",i);
        scanf("%d",&b[i]);
    }

    printf("\n");

    int c[user];
    for (int i = 0; i < user; i++)
    {
        c[i] = a[i] + b[i];
        printf("Array C is: %d\n",c[i]);
    }
}