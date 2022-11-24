#include <stdio.h>

float omtrek( float diameter );
int main( void ){
    float diameter;
    printf("Vul de diameter in: "); 
    scanf("%f", &diameter); // vraag om de diameter

    float area;
    float (*pointer)(float) = &omtrek; // creëer de pointer
    area = (*pointer)(diameter); // gebruik de pointer om de omtrek te berekenen

    printf("De omtrek is: %f\n", area); // laat de omtrek zien
}

float omtrek ( float diameter ) {
    float area;
    float pi = 3.14;

    area = pi * diameter;

    return area;
}