#include <stdio.h>  

float * maxArrays(float *array1, float *array2, float *array3)  
{

    for(int i=0;i<4;i++)  
    {  
        if (array1[i] <= array2[i]) {
            array3[i] = array1[i];
        }
        else {
            array3[i] = array2[i];
        }
    }

    return array3;  
}  

int main()  
{  
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


    result = maxArrays(arr1, arr2, arr3);  

    printf("\nElements of array are :");  
    for (int i=0;i<4;i++)  
    {  
        printf("%lf ", result[i]);  
    }

    return 0;  
}  