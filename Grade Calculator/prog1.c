#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A'
        : (score >= 80) ? 'B'
        : (score >= 70) ? 'C'
        : (score >= 60) ? 'D'
        : (score >= 50) ? 'E'
        : 'F';

    switch (grade)
    {
    case 'A':
        printf("Your grade is A, Excellent work, You are eligible for next level\n");
        break;
    case 'B':
        printf("Your grade is B, Good job, You are eligible for next level\n");
        break;
    case 'C':
        printf("Your grade is C, Well done, You are eligible for next level\n");
        break;
    case 'D':
        printf("Your grade is D, Keep trying, You are eligible for next level\n");
        break;
    case 'E':
        printf("Your grade is E, You passed, You are eligible for next level\n");
        break;
    default:
        printf("Your grade is F, Sorry, You failed, You are not eligible for next level\n");
    }

    return 0;
}