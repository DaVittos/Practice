#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 52
#define HOME 4
#define TIMEOUT 15

typedef struct {
    char name[20];
    int position;
    int home_count;
} Player;

void initialize(Player* player) {
    printf("Enter player name: ");
    scanf("%s", player->name);
    player->position = 0;
    player->home_count = 0;
}

void move(Player* player, int steps) {
    player->position += steps;
    if (player->position >= SIZE) {
        player->position -= SIZE;
        player->home_count++;
        printf("%s reached home! Home count: %d\n", player->name, player->home_count);
    }
}

int rollDice() {
    return (rand() % 6) + 1;  // Wylosuj liczbę od 1 do 6
}

int getPlayerDistance(Player* player) {
    return SIZE - player->position;
}

int main() {
    int numPlayers;
    do {
        printf("Enter the number of players (2-4): ");
        scanf("%d", &numPlayers);
    } while (numPlayers < 2 || numPlayers > 4);

    Player players[4];
    int currentPlayer = 0;
    int endGame = 0;

    srand(time(NULL));  // Inicjalizacja generatora liczb losowych

    for (int i = 0; i < numPlayers; i++) {
        initialize(&players[i]);
    }

    while (!endGame) {
        printf("%s, enter 'k' to roll the dice within %d seconds (type 'Koniec' to end the game, 'Start' to begin a new game, 'ILE' to check the distance from home): ", players[currentPlayer].name, TIMEOUT);
        fflush(stdout); // Wymuszamy natychmiastowe wyświetlenie komunikatu

        clock_t start_time = clock();
        int elapsed_seconds = 0;

        // Oczekiwanie na wpisanie litery 'k', 'ILE' lub 15 sekund timeout
        while (elapsed_seconds < TIMEOUT) {
            char command[10];
            scanf("%s", command);
            if (strcmp(command, "Koniec") == 0) {
                printf("The game has ended.\n");
                return 0;
            } else if (strcmp(command, "Start") == 0) {
                // Rozpoczęcie nowej gry
                printf("Starting a new game...\n");
                currentPlayer = 0;
                endGame = 0;
                for (int i = 0; i < numPlayers; i++) {
                    initialize(&players[i]);
                }
                break;
            } else if (strcmp(command, "k") == 0) {
                int dice = rollDice();
                printf("%s rolled a %d\n", players[currentPlayer].name, dice);
                move(&players[currentPlayer], dice);

                if (players[currentPlayer].home_count >= HOME) {
                    printf("%s won the game!\n", players[currentPlayer].name);
                    endGame = 1;
                }

                currentPlayer = (currentPlayer + 1) % numPlayers;
                break;
            } else if (strcmp(command, "ILE") == 0) {
                int distance = getPlayerDistance(&players[currentPlayer]);
                printf("%s is %d steps away from home.\n", players[currentPlayer].name, distance);
            }

            elapsed_seconds = (clock() - start_time) / CLOCKS_PER_SEC;
        }

        if (elapsed_seconds >= TIMEOUT) {
            printf("Time's up! ");
        }
    }

    return 0;
}