#include <stdio.h>

struct Question {
    char question[200];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char answer;
};

int main() {
    struct Question quiz[] = {
        {
            "Which language is used for system programming?",
            "A. HTML",
            "B. C",
            "C. CSS",
            "D. SQL",
            'B'
        },
        {
            "Which symbol is used to access the address of a variable?",
            "A. *",
            "B. %",
            "C. &",
            "D. #",
            'C'
        },
        {
            "Which data type is used to store decimal values?",
            "A. int",
            "B. char",
            "C. float",
            "D. void",
            'C'
        },
        {
            "Which loop executes at least once?",
            "A. for",
            "B. while",
            "C. do-while",
            "D. switch",
            'C'
        },
        {
            "Which keyword is used to define a structure?",
            "A. struct",
            "B. structure",
            "C. define",
            "D. class",
            'A'
        }
    };

    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);
    int score = 0;
    char answer;

    printf("=================================\n");
    printf("        C PROGRAMMING QUIZ\n");
    printf("=================================\n");

    for (int i = 0; i < totalQuestions; i++) {

        printf("\nQuestion %d:\n", i + 1);
        printf("%s\n", quiz[i].question);

        printf("%s\n", quiz[i].optionA);
        printf("%s\n", quiz[i].optionB);
        printf("%s\n", quiz[i].optionC);
        printf("%s\n", quiz[i].optionD);

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        if (answer >= 'a' && answer <= 'd') {
            answer = answer - 32;
        }

        if (answer == quiz[i].answer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! Correct answer: %c\n", quiz[i].answer);
        }
    }

    printf("\n=================================\n");
    printf("             RESULT\n");
    printf("=================================\n");

    printf("Score: %d/%d\n", score, totalQuestions);
    printf("Percentage: %.2f%%\n",
           (score * 100.0) / totalQuestions);

    if (score == totalQuestions) {
        printf("Excellent! Perfect score!\n");
    } else if (score >= totalQuestions / 2) {
        printf("Good job!\n");
    } else {
        printf("Keep practicing!\n");
    }

    return 0;
}
