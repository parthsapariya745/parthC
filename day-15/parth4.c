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

    int rnum,sum = 0;
    printf("Enter row number: ");
    scanf("%d",&rnum);

    printf("Elements of row %d: ",rnum);
    for (int row = 0; row < rowsize; row++)
    {   
        printf("%d ",box[rnum][row]);
        sum += box[rnum][row];
    }
    printf("\n");
    printf("The sum of a row %d: %d\n",rnum,sum);
    printf("\n");

    int cnum,sum2 = 0;
    printf("Enter column number: ");
    scanf("%d",&cnum); 
    
    printf("Elements of column %d: ",cnum);
    for (int col = 0; col < colsize; col++)
    {   
        printf("%d ",box[col][cnum]);
        sum2 += box[col][cnum];  
    }
    printf("\n");
    printf("The sum of a column %d: %d\n",cnum,sum2);
}