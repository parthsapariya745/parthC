#include<stdio.h>

int main(){
    int user;

    printf("Enter array size: ");
    scanf("%d",&user);

    int a[user];
    for (int len = 0; len < user; len++)
    {
        printf("Enter array elements: ");
        scanf("%d",&a[len]);
    }
    printf("Length of an Array: %d\n",user);
}