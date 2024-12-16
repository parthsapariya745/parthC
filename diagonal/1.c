#include <stdio.h>

int main(){
    int size;

    printf("enter the row & col size : ");
    scanf("%d",&size);

    int box[size][size];

    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            printf("enter the value [%d][%d] = ",r,c);
            scanf("%d",&box[r][c]);
        }
    }

    printf("-----------------------diagonal-------------------------\n");
    
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            printf("%d ",box[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {   
            if (r == c)
            {
                printf("%d ",box[r][c]);
            }
        }
        printf("\n");
    }

    printf("-----------------------antidiagonal-------------------------\n");

    for (int r = 0; r < size; r++)
    {
        for (int c = size - 1; c >= 0; c--)
        {
            printf("%d ",box[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    for (int r = 0; r < size; r++)
    {
        for (int c = size; c >= 0; c--)
        {   
            if (c + r == size - 1)
            {
                printf("%d ",box[r][c]);
            }
        }
        printf("\n");
    }
}