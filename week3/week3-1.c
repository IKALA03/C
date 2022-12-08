#include <stdio.h>

void *maxArrays(float * array1, float * array2, float * array3) {
    int i;
    int n = 3;
    
    for (i = 0; i <= n; i++) {  
        printf("Arr1: %f, Arr2: %f\n", array1[i], array2[i]);
        if (array1[i] >= array2[i]) {
            array3[i] = array1[i];
        }
        else {
            array3[i] = array2[i];
        }
    }
}


int main() {
    float arr1[] = {0.7, 3.3, 0.5, 10.3};
    float arr2[] = {4.1, 1.5, 0.5, 2.3};
    float arr3[4]; // array 3 wordt straks door maxArray ingevuld

    float (*P_arr1)[4] = &arr1; // pointer die verwijst naar het adres van array 1
    float (*P_arr2)[4] = &arr2; // pointer die verwijst naar het adres van array 2
    float (*P_arr3)[4] = &arr3; // pointer die verwijst naar het adres van array 3
    
    printf("Array 1: "); 
    for (int i = 0; i <= 3; i++) { // laat alle inhoud van array 1 zien
        printf("%f ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i <= 3; i++) { // laat alle inhoud van array 2 zien
        printf("%f ", arr2[i]);
    }    
    printf("\n");

    maxArrays(*P_arr1, *P_arr2, *P_arr3); // maxArrays wordt uitgevoerd, de argumenten zijn hier pointers

    printf("\nArray 3: ");
    for (int i = 0; i <= 3; i++) { // laat alle inhoud van array3 zien
        printf("%f ", arr3[i]);
    }        
    
    return 0;
}