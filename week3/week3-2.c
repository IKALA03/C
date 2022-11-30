#include <stdio.h>


int zinLengte(char zin[]) {
    int length;
    for (length=0; zin[length] != '\0'; ++length) // door deze for loop wordt 'length' +1 gedaan voor ieder karakter in 'zin'

    return length;
}

int main() {
    char zin[254]; // de zin is max 254 tekens lang

    printf("Geef een zin: "); 
    scanf("%[^\n]s", zin); // vraag de gebruiker om een zin in te vullen    

    int lengte = zinLengte(zin); // verkrijg de lengte van 'zin'
    printf("De lengte van de zin is: %d", lengte); // geef de lengte weer
}