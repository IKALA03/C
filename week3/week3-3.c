#include <stdio.h>
#include <string.h>

#define MAX 2

struct opleiding {
    char opleidingNaam[30];
    int instroomjaar;
};

struct student { 
    char naam[15];
    int leeftijd;
    struct opleiding opleiding;
} data[MAX] = { {"ik", 19, "ict", 2},
    {"jij", 18, "ict", 2}
};

struct student *s;
int count;

int main (void) {
    s = data;

    for (count = 0; count < MAX; count++)
    {
                    /* Illustration that incrementing a pointer increases it by */
                    /* an amount equal to the size of the data object it points to */
    printf("At address %d: %s %d %s %d\n", 
            (int) s, 
            s->naam,
            s->leeftijd,
            s->opleiding.opleidingNaam,
            s->opleiding.instroomjaar);
    s++;   
    }
    
    return 0;
}