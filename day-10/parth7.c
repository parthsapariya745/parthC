#include<stdio.h>

int main(){
    for (char raw = 'A'; raw <= 'E'; raw++)
    {
        for (char col = raw; col >= 'A'; col--)
        {
            printf("%c ",col);
        }
        printf("\n");
    }
}