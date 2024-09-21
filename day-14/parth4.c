#include<stdio.h>

int main(){
    int size1 = 5,size2 = 5,sum = 0;

    int a[size1][size2];
    for (int row = 0; row < size1; row++)
    {
        for (int col = 0; col < size2; col++)
        {
            printf("a[%d][%d] = ",row,col);
            scanf("%d",&a[row][col]);
        }
    }
    printf("\n");
    for (int row = 0; row < size1; row++)
    {
        for (int col = 0; col < size2; col++)
        {
            if (row >= 1 && row <= 3 && col >= 1 && col <= 3)
            {
                continue;
            }
            else if (row >= 1 && row <= 3 && col == 4)
            {
                printf("      ");
            }
            printf("%d ",a[row][col]);  
            sum += a[row][col];
        }
        printf("\n");
    }
    printf("\n");
    printf("The sum of boundary elements of an Array: %d",sum);
}