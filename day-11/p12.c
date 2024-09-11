#include<stdio.h>

int main(){
    for (int raw = 1; raw <= 5; raw++)
    {
        for (int col = 5; col >= raw; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}