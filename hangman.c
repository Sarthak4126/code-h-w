#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TRIES 6
#define WORDS_COUNT 5

// Array of words for the game
const char* words[WORDS_COUNT] = {
    "programming",
    "hangman",
    "computer",
    "language",
    "keyboard"
};

int chooseRandomWord(char* word) {
    int index = rand() % WORDS_COUNT;
    strcpy(word, words[index]);
    return strlen(word);
}

void displayWord(const char* word, const char* guessed) {
    for (int i = 0; i < strlen(word); i++) {
        if (strchr(guessed, word[i]) != NULL) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    srand(time(NULL));

    char word[50];
    char guessedLetters[26] = {0}; // To store guessed letters
    int wordLength;
    int tries = 0;

    wordLength = chooseRandomWord(word);
    char guess[2];

    printf("Welcome to Hangman!\n");
    printf("You have %d tries to guess the word.\n\n", MAX_TRIES);

    while (1) {
        displayWord(word, guessedLetters);
        printf("Enter a letter: ");
        scanf("%s", guess);

        if (strlen(guess) != 1) {
            printf("Please enter a single letter.\n");
            continue;
        }

        if (strchr(guessedLetters, guess[0]) != NULL) {
            printf("You already guessed that letter.\n");
            continue;
        }

        guessedLetters[strlen(guessedLetters)] = guess[0];

        if (strchr(word, guess[0]) != NULL) {
            printf("Correct guess!\n");
        } else {
            printf("Incorrect guess!\n");
            tries++;
        }

        if (tries == MAX_TRIES) {
            printf("You ran out of tries. The word was: %s\n", word);
            break;
        }

        int solved = 1;
        for (int i = 0; i < wordLength; i++) {
            if (strchr(guessedLetters, word[i]) == NULL) {
                solved = 0;
                break;
            }
        }

        if (solved) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            break;
        }
    }

    return 0;
}
