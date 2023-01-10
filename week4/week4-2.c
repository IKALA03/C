#include <stdio.h>
#include <stdlib.h>


int main() {
    struct persoon {
    char naam[15];
    int leeftijd;
  };

  struct persoon *pointer;
  
  pointer = (struct persoon *)malloc(sizeof(struct persoon));


  int i = 0;
  while(1) {
    printf("Vul de naam en leeftijd in:\n");
    scanf("%s %d", (pointer + i)->naam, &(pointer + i)->leeftijd);

    i++;

    printf("Ingevulde informatie:\n");
    for (int n = 0; n != i; ++n) {
      printf("Naam: %s\tLeeftijd: %d\n", (pointer + n)->naam, (pointer + n)->leeftijd);
    }
    
    pointer = (struct persoon *)realloc(pointer, sizeof(struct persoon) + sizeof(struct persoon));
  }
}