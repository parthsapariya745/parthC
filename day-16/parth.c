#include<stdio.h>

int cube(){
    
    int user;
    printf("Enter any number: ");
    scanf("%d",&user);
    printf("Cube is:%d",user*user*user);
}

int main(){
    cube();
}