// quiz game
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int score = 0;
    char questions[][100] = {
        "Which planet is closest to the sun?\n",
        "What is the boiling point of water at sea level?",
        "Which animal is known as the 'King of the Jungle'?",
        "How many days are there in a leap year?",
        "What is the largest ocean on Earth?"};

    char options[][100] = {"a) Earth\nb) Venus\nc) Mercury\nd) Mars",
                           "a) 0 C\nb) 50 C\nc) 100 C\nd) 212",
                           "a) Tiger\nb) Lion\nc) Elephant\nd) Gorilla",
                           "a) 364\nb) 365\nc) 366\nd) 360",
                           "a) Atlantic Ocean\nb) Indian Ocean\nc) Arctic Ocean\nd) Pacific Ocean"};

    char answer[][1] = {"C", "C", "B", "C", "D"};

    int questionSize = (int)(sizeof(questions) / sizeof(questions[0]));
    char tempVar = '\0';

    for (int i = 0; i < questionSize; i++)
    {
        printf(questions[i]);
        printf("\n");
        printf(options[i]);
        printf("\n");
        scanf("%c", &tempVar);
        getchar();
        tempVar = toupper(tempVar);
        if (tempVar == answer[i])
        {
            score++;
        }
        printf("\n");
    }

    printf("Total Score: %d point of %d", score, questionSize);
    return 0;
}
