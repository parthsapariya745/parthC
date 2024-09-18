#include<stdio.h>

int main(){
    int user;
    float sum = 0;

    printf("Enter array size: ");
    scanf("%d",&user);

    int a[user];
    for (int i = 0; i < user; i++)
    {
        printf("Enter array elements a[%d]: ",i);
        scanf("%d",&a[i]);
        sum += a[i]; 
    }
    printf("Average of the Array: %.2f\n",sum / user);
}