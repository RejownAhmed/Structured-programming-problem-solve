#include <stdio.h>
#include <string.h>

int getLongestLen(char words[50][50], int N);
void takeInput(char words[50][50], int *N);
void printRightAligned(char words[50][50], int N, int longest);

int main() {
    int N;
    char words[50][50];

    takeInput(words, &N);

    int longest = getLongestLen(words, N);

    printRightAligned(words, N, longest);

    return 0;
}

void takeInput(char words[50][50], int *N) {
    printf("Enter how many words (1-50): ");
    scanf("%d", N);

    if (*N < 1 || *N > 50) {
      printf("Please insert a number between 1-50\n");
      exit(0);
    }

    for (int i = 0; i < *N; i++) {
        printf("Enter word: ");
        scanf("%s", words[i]);
    }
}

int getLongestLen(char words[50][50], int N) {
    int longest = 0;
    for (int i = 0; i < N; i++) {
        int len = strlen(words[i]);

        if (len > longest) {
            longest = len;
        }
    }
    return longest;
}

void printRightAligned(char words[50][50], int N, int longest){
    for (int i = 0; i < N; i++) {
          int len = strlen(words[i]);
          int numberofSpaceToPrint = longest-len;

          for (int j = 0; j < numberofSpaceToPrint; j++)
          {
            printf(" ");
          }
          
          printf("%s\n", words[i]);
          
     }
}