#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int choice;
    char input_option, output_option;
    char r = 'r', p = 'p', s = 's', e = 'e';
    int computer_score =0, player_score=0;


    srand(time(NULL));

    do{
    choice = (rand() % 3)+1;
   printf("\nEnter r for rock, p for paper, s for scissors, e for exit: ");
   scanf(" %c", &input_option);

   if(choice == 1) {output_option = r;}
   else if(choice == 2){ output_option = p;}
   else{output_option = s;}
    

   if(input_option == r)
   {
    if(output_option == r){printf("oh no that's a draw! The computer chose the same!");}
    else if (output_option == p) {
            printf("You lost, the computer chose: %c\n", output_option);
            computer_score++;
            printf("Your score: %d \t Computer's score: %d", player_score, computer_score);
        } else {
            printf("You won, the computer chose: %c\n", output_option);
            player_score++;
            printf("Your score: %d \t Computer's score: %d", player_score, computer_score);
        }
   }
   else if (input_option == p) {
        if (output_option == p) {
            printf("oh no that's a draw! The computer chose the same!\n");
        } else if (output_option == s) {
            printf("You lost, the computer chose: %c\n", output_option);
            computer_score++;
            printf("Your score: %d \t Computer's score: %d", player_score, computer_score);
        } else {
            printf("You won, the computer chose: %c\n", output_option);
            player_score++;
            printf("Your score: %d \t Computer's score: %d", player_score, computer_score);
        }
    } else if (input_option == s) {
        if (output_option == s) {
            printf("oh no that's a draw! The computer chose the same!\n");
        } else if (output_option == r) {
            printf("You lost, the computer chose: %c\n", output_option);
            computer_score++;
            printf("Your score: %d \t Computer's score: %d", player_score, computer_score);
        } else {
            printf("You won, the computer chose: %c\n", output_option);
            player_score++;
            printf("Your score: %d \t Computer's score: %d", player_score, computer_score);
        }
    } else if (input_option == e)
    {
        printf("Alright then, that's our end. See ya next time player!");
    }
    else{
        printf("Invalid input! Please enter r, p, or s.\n");
    }
    }
    while (input_option != e);
  

    return 0;
}