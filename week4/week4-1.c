#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 100
  
int main()
{
    FILE* fp; 
    FILE* newfile;
    
    int count = 0; // totaal aantal karakters
    char filename[MAX_NAME] = "readme.txt"; // bestandsnaam
    char character; // momentele karakter
    char *text; // complete text uit het bestand
    char *newText; // nieuwe tekst, die later naar een nieuw bestand geschreven wordt
    long bytes; // variabele
    int i; // variabele voor een for loop

    fp = fopen(filename, "r"); // open "readme.txt" in read-only modus
    
    if (fp == NULL) {
        return 1; // als het bestand niet bestaat dan stopt de code
    }
    
    for (character = getc(fp); character != EOF; character = getc(fp))
        count = count + 1; // count wordt telkens +1 gedaan wanneer de for loop itereert
    
    fseek(fp, 0L, SEEK_END);
    bytes = ftell(fp);
    fseek(fp, 0L, SEEK_SET);

    text = (char*)calloc(bytes, sizeof(char)); 
    if (text == NULL) // als text null is moet de code stoppen
        return 1;
    
    fread(text, sizeof(char), bytes, fp); // text uit "readme.txt"

    fclose(fp); // sluit het bestand wanneer de code klaar is


    newfile = fopen("newfile.txt", "a"); // open "newfile.txt" in append modus
    if (newfile == NULL) {
        return 1; // als het bestand niet bestaat dan stopt de code
    }

    for (i = 0; i<count; ++i) { // for loop om elk karakter een ASCII karakter naar voren te shiften ...
        if (text[i] == *" ") {  // ... tenzij het een spatie is
            printf("%c", text[i]); 
            fprintf(newfile, "%c", text[i]);   
        }
        else if (text[i] == *"\n") { // ... tenzij het een 'newline' teken is
            printf("%c", text[i]); 
            fprintf(newfile, "%c", text[i]);   
        }
        else {
            printf("%c", text[i]+1);
            fprintf(newfile, "%c", text[i]+1);   
        }
    }

    printf("Het bestand %s heeft %d karakters\n ", filename, count); // laat aantal karakters zien

    return 0;
}