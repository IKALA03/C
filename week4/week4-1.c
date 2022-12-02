#include <stdio.h>
#define MAX_NAME 100
  
int main()
{
    FILE* fp; 
    
    int count = 0; // totaal aantal karakters
    char filename[MAX_NAME] = "readme.txt"; // bestandsnaam
    char character; 
    
    fp = fopen(filename, "r");
    
    if (fp == NULL) {
        return 1; // als het bestand niet bestaat dan stopt de code
    }
    
    for (character = getc(fp); character != EOF; character = getc(fp))
        count = count + 1;
    
    fclose(fp); // sluit het bestand wanneer de code klaar is
    
    printf("The file %s has %d characters\n ", filename, count); // laat aantal karakters zien
    
    return 0;
}