#include <stdio.h>
#include <stdlib.h>

struct persoon {
    char naam[15];
    int leeftijd;
}; // structure peroon, bevat naam en leeftijd

int main() {
    struct persoon *pointer;
    int records; // aantal records
    
    printf("Vul het aantal personen in dat je wilt toevoegen: ");
    scanf("%d", &records); // vraag de gebruiker om hoeveel personen er toegevoegd moeten worden

    pointer = (struct persoon *)malloc(records * sizeof(struct persoon)); // reserveer geheugen
    for (int i = 0; i < records; ++i) { // voor ieder persoon wordt naam en leeftijd gevraagd
        printf("Vul de naam en leeftijd in:\n"); 
        scanf("%s %d", (pointer + i)->naam, &(pointer + i)->leeftijd);
    }

    printf("Ingevulde informatie:\n");  // laat de data zien die de gebruiker toegevoegd heeft
    for (int i = 0; i < records; ++i) {
        printf("Naam: %s\tLeeftijd: %d\n", (pointer + i)->naam, (pointer + i)->leeftijd);
    }
  
    free(pointer); // maak geheugen vrij

    return 0;
}