#include <stdio.h>

float maxArrays(float array1[], float array2[]);

int main() {
    float arr1[] = {0.7, 3.3, 0.5, 10.3};
    float arr2[] = {4.1, 1.5, 0.5, 2.3};
    
    
    printf("Array 1: ");
    for (int i = 0; i <= 3; i++) {
        printf("%f ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i <= 3; i++) {
        printf("%f ", arr2[i]);
    }

    float arr3;
    float (*pointer)(float[3], float[3]) = &maxArrays;
    arr3 = (*pointer)(arr1, arr2);
    printf("%d\n", arr3);

    return 0;
}

float maxArrays(float array1[], float array2[]) {
    printf("%d\n", *array1);
    int i;
    int n = 4;
    float arr3[3];

    for (i = 0; i < n; i++) {  
        if (array1[i] >= array2[i]) {
            arr3[i] = array1[i];
        }
        else {
            arr3[i] = array2[i];
        }
    }
    return *arr3;
}