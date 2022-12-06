#include <stdio.h>
#include <stdlib.h>

struct persoon {
  char naam[15];
  int leeftijd;
};

int main() {
  struct persoon *pointer;
  int records;
  
  printf("Vul het aantal personen in dat je wilt toevoegen: ");
  scanf("%d", &records);

  pointer = (struct persoon *)malloc(records * sizeof(struct persoon));
  for (int i = 0; i < records; ++i) {
    printf("Vul de naam en leeftijd in:\n");
    scanf("%s %d", (pointer + i)->naam, &(pointer + i)->leeftijd);
  }

  printf("Ingevulde informatie:\n");
  for (int i = 0; i < records; ++i) {
    printf("Naam: %s\tLeeftijd: %d\n", (pointer + i)->naam, (pointer + i)->leeftijd);
  }

  free(pointer);

  return 0;
}