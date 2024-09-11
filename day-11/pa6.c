#include<stdio.h>

int main(){
    for (int raw = 1; raw <= 5; raw++)
    {   
        for (int space = raw; space >= 2; space--)
        {
            printf("  ");
        }
        
        for (int col = 5; col >= raw; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}