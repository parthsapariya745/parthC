#include<stdio.h>

int main(){

    int size;

    printf("Enter the array's size: ");
    scanf("%d",&size);

    int box[size];
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&box[i]);
    }

    printf("\n");
    printf("Negative elements from an Array: ");

    for (int i = 0; i < size; i++)
    {
        if (box[i] < 0)
        {   
            printf("%d ",box[i]);
        }
    }
    printf("\n");
}