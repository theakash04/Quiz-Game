#include<stdio.h>
#include<ctype.h>
int main()
{

    //Questions
    char Q[][100] = {"1. What is the purpose of the 'sizeof' operator in C?",
                    "2. What does the 'break' statement do in a switch statement in C?",
                    "3. In C, what is the purpose of the 'malloc' function?",
                    "4. What is the purpose of the '#include' directive in C?",
                    "5. What does the 'printf' function do in C?"};

    //Answers
    char O[][100] = {"A. Find the size of a file","B. Find the size of a variable or data type","C. Find the size of an array","D. Find the size of a function",
                    "A. Exits the loop","B. Exits the program","C. Exits the current case and continues with the next one","D. Skips the rest of the code block and continues with the next statement",
                    "A. Free allocated memory","B. Allocate memory for a variable or array at runtime","C. Declare a variable with a specific size","D. Find the size of allocated memory",
                    "A. It includes comments in the code.","B. It includes external header files in the code.","C. It declares variables.","D. It is used for loop control.",
                    "A. Input","B. Output","C. Calculation","D. Looping"};

    //Right Answers
    char A[]={'B','C','D','B','A'};

    int totalQ = sizeof(Q)/sizeof(Q[0]);
    char guess;
    int score = 0;

    printf("Quiz Game\n");
    for(int i=0; i<totalQ; i++){
        printf("____________________________________________________________\n");
        printf("\n%s\n",Q[i]);
        printf("____________________________________________________________\n");
        for(int j = (i*4); j <(i*4)+4; j++){
            printf("%s\n",O[j]);
        }
        printf("Any Guess?? (A,B,C,D) ");
        scanf(" %c",&guess);
        
        guess = toupper(guess);
        if (guess == A[i]){
            printf("Right Answer :)\n");
            score++;
        }
        else{
            printf("Wrong Answer :(\n");
        }
    }

    printf("____________________________________________________________\n");
    printf("Answered Questions %d/%d\n",score,totalQ);
    printf("Thank ypu for playing Our Game...- DEX\n");
    printf("____________________________________________________________\n");

    return 0;
}

