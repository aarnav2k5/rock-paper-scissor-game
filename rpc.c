#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int you, computer; // Globally declared

int menu() {
    int ch;
    printf("1. Select Rock");
    printf("\n2. Select Paper");
    printf("\n3. Select Scissor");
    printf("\n4. Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &ch);
    return ch;
}

void setup() {
    computer = rand() % 3 + 1;
    you = menu();
}

void makelogic() {
    switch (you) {
        case 1:
            if (computer == 1) {
                printf("YOU= ROCK\nCOMPUTER= ROCK");
                printf("\nGAME DRAW!!\n");
            } else if (computer == 2) {
                printf("YOU= ROCK\nCOMPUTER= PAPER");
                printf("\nCOMPUTER WINS!!\n");
            } else {
                printf("YOU= ROCK\nCOMPUTER= SCISSOR");
                printf("\nYOU WIN!!\n");
            }
            break;

        case 2:
            if (computer == 1) {
                printf("YOU= PAPER\nCOMPUTER= ROCK");
                printf("\nYOU WIN!!\n");
            } else if (computer == 2) {
                printf("YOU= PAPER\nCOMPUTER= PAPER");
                printf("\nGAME DRAW!!\n");
            } else {
                printf("YOU= PAPER\nCOMPUTER= SCISSOR");
                printf("\nCOMPUTER WINS!!\n");
            }
            break;

        case 3:
            if (computer == 1) {
                printf("YOU= SCISSOR\nCOMPUTER= ROCK");
                printf("\nCOMPUTER WINS!!\n");
            } else if (computer == 2) {
                printf("YOU= SCISSOR\nCOMPUTER= PAPER");
                printf("\nYOU WIN!!\n");
            } else {
                printf("YOU= SCISSOR\nCOMPUTER= SCISSOR");
                printf("\nGAME DRAW!!\n");
            }
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid choice. Please try again.\n");
    }
}

int main() {
    srand(time(0));
    while (1) {
        system("cls || clear");
        setup();
        makelogic();
        printf("Press Enter to continue...");
        getchar(); 
        getchar(); 
    }
    return 0;
}
