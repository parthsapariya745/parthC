#include<stdio.h>

int main(){
    for (int raw = 5; raw >= 1; raw--)
    {
        for (int col = 1; col <= raw; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}