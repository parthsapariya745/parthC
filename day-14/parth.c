#include<stdio.h>

int main(){
    int rowsize,colsize,store;
    float sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d",&rowsize);

    printf("Enter the array's column size: ");
    scanf("%d",&colsize);

    store = rowsize * colsize;

    printf("\n");

    int box[rowsize][colsize];
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("box[%d][%d] = ",row,col);
            scanf("%d",&box[row][col]);
            sum += box[row][col]; 
        }
    }

    float avg = sum / store; 
    printf("Average of an Array: %.2f",avg);
}