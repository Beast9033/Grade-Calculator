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
        printf("Your grade is: %c, Excellent work,\n",grade);
        break;
    case 'B':
        printf("Your grade is: %c, Good job,\n",grade);
        break;
    case 'C':
        printf("Your grade is: %c, Well done,\n",grade);
        break;
    case 'D':
        printf("Your grade is: %c, Keep trying,\n",grade);
        break;
    case 'E':
        printf("Your grade is: %c, You passed,\n",grade);
        break;
    case 'F':
        break;
    default:
        printf("invalid input\n");
    }

     if (grade=(score >= 40))
        {
            printf("You are eligible for next level\n");
        }
        else 
        {
            printf("You Grade is F, Sorry, Better luck next time,\n");
        }

    return 0;
}