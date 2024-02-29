#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int A[], int n){
    int indexOfMin, temp;
    printf("Selection sort is \n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main(){
    printf("Enter the array size");
    int n;
    scanf("%d",&n);
    int A[n];
    printf("Enter the array element");
    for(int i=0;i<n;i++){
        scanf("%d",A[i]);
    }
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}
