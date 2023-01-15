#include <stdio.h>
#include <stdlib.h>

//

struct person{
    char name[20];
    int age;
};

int main() {
    struct person *p;
    int n = 0;
    int a = 1;
    p=malloc(a*sizeof(struct person));
    while (1)
    {
        printf("Naam: ");
        scanf("%s", p[n].name);
        printf("Leeftijd: ");
        scanf("%d", &p[n].age);
        n++;
        a++;
        p=realloc(p,a*sizeof(struct person));
        
        for (int j=0; j<n; j++) {
            printf("Naam: %s, Leeftijd: %d", p[j].name, p[j].age);
            printf("\n");
        }
    }
    return 0;
}