#include <stdio.h>
#include <string.h>

#define MAX 3

struct opleiding {
    char opleidingNaam[30];
    int instroomjaar;
};

struct student { 
    char naam[15];
    int leeftijd;
    struct opleiding opleiding;
} data[MAX];

struct student *s;
int count;
int i;

int main (void) {
    printf("3 namen (gesplits door een spatie): \n");
    scanf("%s %s %s", data[0].naam, data[1].naam, data[2].naam); // vraag om naam

    for (i=0; i<MAX; i++) {  // for loop om informatie op te vragen (totaal 3 keer)
        printf("\nleeftijd van %s: ", data[i].naam);
        scanf("%d", &data[i].leeftijd); // vraag om leeftijd

        printf("\nOpleiding van %s: ", data[i].naam);
        scanf("%s", data[i].opleiding.opleidingNaam); // vraag om opleiding naam

        printf("\nInstroomjaar van %s op %s: ", data[i].naam, data[i].opleiding.opleidingNaam);
        scanf("%d", &data[i].opleiding.instroomjaar); // vraag om instroomjaar van de opleiding
    }

    s = data;

    for (count = 0; count < MAX; count++) 
    {
        printf("Element %d: Naam: %s, leeftijd: %d, opleiding: %s, instroomjaar: %d\n", // print elk element
            count, 
            s->naam,
            s->leeftijd,
            s->opleiding.opleidingNaam,
            s->opleiding.instroomjaar);
            s++;   
    }
    
    return 0;
}