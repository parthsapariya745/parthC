#include<stdio.h>

int main(){
    int rowsize,colsize,sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d",&rowsize);

    printf("Enter the array's column size: ");
    scanf("%d",&colsize);


    printf("\n");

    int box[rowsize][colsize];
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("box[%d][%d] = ",row,col);
            scanf("%d",&box[row][col]);
        }
    }

    printf("\n");

    int box2[rowsize][colsize];
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("box2[%d][%d] = ",row,col);
            scanf("%d",&box2[row][col]);
        }
    }

    int box3[rowsize][colsize];
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            box3[row][col] = box[row][col] + box2[row][col];
            printf("%d ",box3[row][col]);
        }
        printf("\n");
    }
}