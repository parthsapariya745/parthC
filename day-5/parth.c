#include <stdio.h>

int main() {
    int user;
    char grade;

    printf("Enter your score : ");
    scanf("%d", &user);

    if (user > 100) {
        printf("Invalid score.\n");
        return 0;
    }

    grade = (user >= 85) ? 'A' : (user >= 70) ? 'B' : (user >= 60) ? 'C' : (user >= 45) ? 'D' : (user >= 30) ? 'E' : 'F';

    printf("Your grade is: %c\n", grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent work!");
        break;
    case 'B':
        printf("Well done.");
        break;
    case 'C':
        printf("Good job.");
        break;
    case 'D':
        printf("You passed, but you could do better.");
        break; 
    case 'E':
        printf("You passed, but you could do better.");
        break;     
    case 'F':
        printf("Sorry, you failed.");
        break;      
    default:
        printf("INVALID SCORE");
        break;
    }

    if (grade == 'F')
    {
        printf( "'Please try again next time'",grade);
    }
    
    else if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E'){
        printf("'Congratulations! You are eligible for the next level'");
    }
}