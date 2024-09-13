#include<stdio.h>

int main(){
    for (int raw = 41; raw <= 45; raw++)
    {
        for (int col = 41; col <= raw; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}