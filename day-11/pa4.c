#include<stdio.h>

int main(){
    for (int raw = 1; raw <= 5; raw++)
    {   
        for (int space = raw; space >= 2; space--)
        {
            printf("  ");
        }
        
        for (int col = raw; col <= 5; col++)
        {
            if (col %2 == 0)
            {
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}