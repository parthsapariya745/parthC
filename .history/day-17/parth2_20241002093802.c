#include<stdio.h>

int string(){
    char user[100];
    int length = 0;

    printf("Enter any string: ");
    gets(user);

    for (int i = 0; i < user[i]; i++)
    {
        length++;
    }
    printf("Length is: %d",length);
}

int main(){
    string();
}