#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

start:

    srand(time(0));
    int level, random, guess1, guess2, guess3;
    printf("\nEnter Level(1 to 3):");
    scanf("%d", &level);

    switch (level)
    {
    case 1:
        printf("\nA random number is generated between 0-10 and you have 3 tries to guess it\n");
        random = rand() % 10;

        printf("\nFirst guess:");
        scanf("%d", &guess1);

        if (guess1 == random)
        {
            printf("Correct Answer You won!\n"); exit;
        }
        else
        {   
            if (guess1 == random + 1 || guess1 == random - 1)
            {
                printf("So Close!!\n");
            }

            printf("\nWRONG!\n");
            if(guess1<random)
                {
                    printf("Higher number please\n");
                }
                else if(guess1 > random)
                {
                    printf("Lower number please\n");
                }
            printf("Second guess:");
            scanf("%d", &guess2);

            if (guess2 == random)
            {
                printf("Correct Answer You won!\n"); exit;
            }

            else
            {
                
                if (guess2 == random + 1 || guess2 == random - 1)
                {
                    printf("So Close!!\n");
                }
                printf("\nWRONG!\n");
                if(guess2<random)
                {
                    printf("Higher number please\n");
                }
                else if(guess2 > random)
                {
                    printf("Lower number please\n");
                }
                printf("Last guess:");
                scanf("%d", &guess3);

                if (guess3 == random)
                {
                    printf("Correct Answer You won!\n"); exit;
                }
                else
                {
                    printf("wrong guess. Game ended\n");
                    goto end;
                }
            }
        }

        break;

    case 2:
        printf("\nA random number is generated between 0-50 and you have 3 tries to guess it\n");
        random = rand() % 50;

        printf("\nFirst guess:");
        scanf("%d", &guess1);

        if (guess1 == random)
        {
            printf("Correct Answer You won!\n"); exit;
        }
        else
        {
            
            if (guess1 == random + 1 || guess1 == random - 1)

            {
                printf("So Close!!\n");
            }
            printf("\nWRONG!\n"); 
            if(guess1<random)
                {
                    printf("Higher number please\n");
                }
                else if(guess1 > random)
                {
                    printf("Lower number please\n");
                }
            printf("Second guess:");

            scanf("%d", &guess2);

            if (guess2 == random)
            {
                printf("Correct Answer You won!\n"); exit;
            }

            else
            {
                
                if (guess2 == random + 1 || guess2 == random - 1)

                {
                    printf("So Close!!\n");
                }
                printf("\nWRONG!\n");
                if(guess2<random)
                {
                    printf("Higher number please\n");
                }
                else if(guess2 > random)
                {
                    printf("Lower number please\n");
                }

                printf("Last guess:");
                scanf("%d", &guess3);

                if (guess3 == random)
                {
                    printf("Correct Answer You won!\n"); exit;
                }
                else
                {
                    printf("wrong guess. Game ended\n");
                    goto end;
                }
            }
        }

        break;

    case 3:
        printf("\nA random number is generated between 0-100 and you have 3 tries to guess it\n");
        random = rand() % 100;

        printf("\nFirst guess:");
        scanf("%d", &guess1);

        if (guess1 == random)
        {
            printf("Correct Answer You won!\n"); exit;
        }
        else
        {
           
            if (guess1 == random + 1 || guess1 == random - 1)
            {
                printf("So Close!!\n");
            }
            printf("\nWRONG!\n");
             if(guess1<random)
                {
                    printf("Higher number please\n");
                }
                else if(guess1 > random)
                {
                    printf("Lower number please\n");
                }
            printf("Second guess:");
            scanf("%d", &guess2);

            if (guess2 == random)
            {
                printf("Correct Answer You won!\n"); exit;
            }

            else
            {
                
                if (guess2 == random + 1 || guess2 == random - 1)
                {
                    printf("So Close!!\n");
                }
                printf("\nWRONG!\n");
                if(guess2<random)
                {
                    printf("Higher number please\n");
                }
                else if(guess2 > random)
                {
                    printf("Lower number please\n");
                }
                printf("Last guess:");
                scanf("%d", &guess3);

                if (guess3 == random)
                {
                    printf("Correct Answer You won!\n"); exit;
                }
                else
                {
                    printf("wrong guess. Game ended\n");
                    goto end;
                }
            }
        }

        break;

    default: 
        printf("Invalid input!");
        goto end;
    }

end:
    if ((guess1 != random && guess2 != random && guess3 != random) && level <= 3)
        printf("\nCorrect answer was:%d", random);

    int a;
    printf("\n\nWanna play again? 1:Yes or 0:No --: ");
    scanf("%d", &a);
    if (a == 1)
    {
        goto start;
    }
    else
        printf("##################################################################\n\t\t\tThanks for playing!\n##################################################################");

    return 0;
}

// hola
