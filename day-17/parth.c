#include<stdio.h>

int sum(){
    int user,Sum = 0;
    printf("Enter array size: ");
    scanf("%d",&user);

    int a[user];
    for (int i = 0; i < user; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);  
        Sum += a[i]; 
    }
    printf("The sum of an Array: %d",Sum);
}

int main(){
    sum();
}