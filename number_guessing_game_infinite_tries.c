#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int lvl,random,guess;
        int i=1;
start:
    printf("Enter difficulty level(1-5):");
    scanf("%d",&lvl);
    srand(time(0));

    switch(lvl){
        case 1:
            printf("A random number is generated between 0-10:");
            random=rand() % 10;
            printf("\n\nGuess the number:");
            do{
                
                
                scanf("%d",&guess);
                if(guess==random){
                    printf("\ncorrect answer %d! You won in %d tries.",random,i);
                    i=1;
                    break;
                }
                else if(guess==random+1 || guess==random-1){printf("So close!");}
                printf("\nWrong,Try again:");
                i++;

            }while(1);
            break;

        case 2:
            printf("A random number is generated between 0-20:");
            random=rand() % 20;
            printf("\n\nGuess the number:");
            do{
                
                
                scanf("%d",&guess);
                if(guess==random){
                    printf("\ncorrect answer %d! You won in %d tries.",random,i);
                    i=1;
                    break;
                }
                else if(guess==random+1 || guess==random-1){printf("So close!");}
                printf("\nWrong,Try again:");
                i++;


            }while(1);
            break;

        case 3:
            printf("A random number is generated between 0-30:");
            random=rand() % 30;
            printf("\n\nGuess the number:");
        
            do{
                
                
                scanf("%d",&guess);
                if(guess==random){
                    printf("\ncorrect answer %d!  You won in %d tries.",random,i);
                    i=1;
                    break;
                }
                else if(guess==random+1 || guess==random-1){printf("So close!");}
                printf("\nWrong,Try again:");
                i++;

            }while(1);
            break;

        case 4:
                        printf("A random number is generated between 0-40:");
            random=rand() % 40;
            printf("\n\nGuess the number:");
            do{
                
                
                scanf("%d",&guess);
                if(guess==random){
                    printf("\ncorrect answer %d!  You won in %d tries.",random,i);
                    i=1;
                    break;
                }
                else if(guess==random+1 || guess==random-1){printf("So close!");}
                printf("\nWrong,Try again:");
                i++;

            }while(1);
            break;

        case 5:
            printf("A random number is generated between 0-50:");
            random=rand() % 50;
            printf("\n\nGuess the number:");
            do{
                
                
                scanf("%d",&guess);
                if(guess==random){
                    printf("\ncorrect answer %d! You won in %d tries.",random,i);
                    i=1;
                    break;
                }
                else if(guess==random+1 || guess==random-1){printf("So close!");}
                printf("\nWrong,Try again:");
                i++;

            }while(1);
            break;

        default:
                        printf("A random number is generated between 0-1000:");
            random=rand() % 1000;
            printf("\n\nGuess the number:");
            do{
                
                
                scanf("%d",&guess);
                if(guess==random){
                    printf("\ncorrect answer %d!  You won in %d tries.",random,i);
                    i=1;
                    break;
                }
                else if(guess==random+1 || guess==random-1){printf("So close!");}
                printf("\nWrong,Try again:");
                i++;

            }while(1);
            break;
    }

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