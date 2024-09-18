#include<stdio.h>

int main(){
    int user;

    printf("Enter array size: ");
    scanf("%d",&user);

    int a[user];
    for (int i = 0; i < user; i++)
    {
        printf("Enter array elements: ");
        scanf("%d",&a[i]);
    }
    printf("Length of an Array: %d\n",user);
}