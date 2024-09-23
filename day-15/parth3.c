#include<stdio.h>

int main(){
    int rowsize,colsize;

    printf("Enter the array's row size: ");
    scanf("%d",&rowsize);

    printf("Enter the array's column size: ");
    scanf("%d",&colsize);

    int box[rowsize][colsize];
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("a[%d][%d] = ",row,col);
            scanf("%d",&box[row][col]);
        }
    }
    printf("\n");
    printf("The transpose matrix of an array: \n");
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("%d ",box[col][row]);
        }
        printf("\n");
    }
}