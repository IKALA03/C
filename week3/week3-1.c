#include <stdio.h>  
float *maxArrays(float *a, float *b, float *arr3)  
{

    for(int i=0;i<4;i++)  
    {  
        if (a[i] <= b[i]) {
            arr3[i] = b[i];
        }
        else {
            arr3[i] = a[i];
        }
    }

    return arr3;  
}  

int main()  
{  
    float arr1[] = {0.7, 3.3, 0.5, 10.3};

    float arr2[] = {4.1, 1.5, 0.5, 2.3};

    float arr3[4];
    
    float *n;  
    
    n=maxArrays(arr1, arr2, arr3);  

    printf("\nElements of array are :");  
    for(int i=0;i<4;i++)  
        {  
            printf("%lf ", n[i]);  
        }  
        return 0;  
}  