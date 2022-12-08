#include <stdio.h>

void *omtrek( float * diameter, float * area ) {
    float pi = 3.14;
    float omtrek = pi * *diameter;

    *area = omtrek;
}

int main( void ) {
    float diameter;
    float area;
    float *P_diameter = &diameter; // pointer die naar diameter wijst
    float *P_area = &area; // pointer die naar area wijst
    
    printf("Vul de diameter in: "); 
    scanf("%f", &diameter); // vraag om de diameter, diameter is hier een pointer!

    omtrek(P_diameter, P_area); // gebruik de pointers om de omtrek te berekenen
    printf("De omtrek is: %f\n", area); // laat de omtrek zien
    return 0;
}