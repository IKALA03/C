#include <stdio.h>
#include "week1.h"

int main( void ) {
    int userInput;
    printf("Kies een nummer: \n");
    scanf("%d", &userInput);
    printf("Je hebt gekozen voor nummer: %d \n", userInput);
    if (userInput < 0) {
        return 0;
    }
    else {
        print_it();
    }
}
