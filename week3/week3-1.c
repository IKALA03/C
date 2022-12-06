#include <stdio.h>


float *maxArrays(float * array1, float * array2, float * array3) {
    int i;
    int n = 3;
    
    for (i = 0; i <= n; i++) {  
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
    float arr3[4];
    float * result;
    
    printf("Array 1: ");
    for (int i = 0; i <= 3; i++) {
        printf("%f ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i <= 3; i++) {
        printf("%f ", arr2[i]);
    }    
    printf("\n");

    maxArrays(arr1, arr2, arr3);
    
    printf("\nArray 3: ");
    for (int i = 0; i <= 3; i++) {
        printf("%f ", arr3[i]);
    }        
    
    return 0;
}