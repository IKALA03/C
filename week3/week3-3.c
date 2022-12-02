#include <stdio.h>
#define MAX 3

struct opleiding { // structure opleiding bevat een naam (van de opleiding) en een instroomjaar
    char naam[30];
    int instroomjaar;
};

struct student { // structure student bevat een naam, leeftijd en een structure 'opleiding'
    char naam[15];
    int leeftijd;
    struct opleiding opleiding;
} data[MAX]; // data is een element die refereert naar de structur student en is maximaal 3 (student) objecten groot


int main (void) {
    struct student *s; // de pointer s refereert naar de structur student
    int count; // for loop var
    int i; // for loop var

    printf("3 namen (gesplits door een spatie): \n");
    scanf("%s %s %s", data[0].naam, data[1].naam, data[2].naam); // vraag om namen

    for (i=0; i<MAX; i++) {  // for loop door alle gegeven naam om informatie op te vragen (totaal 3 keer)
        printf("\nleeftijd van %s: ", data[i].naam);
        scanf("%d", &data[i].leeftijd); // vraag om leeftijd

        printf("\nOpleiding van %s: ", data[i].naam);
        scanf("%s", data[i].opleiding.naam); // vraag om opleiding naam

        printf("\nInstroomjaar van %s op %s: ", data[i].naam, data[i].opleiding.naam);
        scanf("%d", &data[i].opleiding.instroomjaar); // vraag om instroomjaar van de opleiding
    }

    s = data;

    for (count = 0; count < MAX; count++) 
    { // laat alle informatie per student zien
        printf("Element %d: Naam: %s, leeftijd: %d, opleiding: %s, instroomjaar: %d\n", // print elk element
            count, 
            s->naam,
            s->leeftijd,
            s->opleiding.naam,
            s->opleiding.instroomjaar);
            s++; // ga naar het volgende element in s (dus de structure 'data')
    }
    
    return 0;
}