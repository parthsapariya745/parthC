#include<stdio.h>

int main(){
    char word = 'a';

    do
    {
        printf("%c\t ", word);
        word += 4; 
    } while (word <= 'z');
}