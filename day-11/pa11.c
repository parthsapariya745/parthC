#include<stdio.h>

int main(){
    for (int raw = 1; raw <= 5; raw++)
    {   
        for (int space = raw; space <= 4; space++)
        {
            printf("  ");
        }
        
        for (int col = 1; col < raw; col++)
        {
            if (col %2 == 0)
            {
                printf("* ");
            }
            else{
                printf("* ");
            }
        }
        
        for (int col = raw; col >= 1; col--)
        {
            if (col %2 == 0)
            {
                printf("* ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}