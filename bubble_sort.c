#include <stdio.h>
#include <cs50.h>

void swap(int *xp, int *yp);
void printArray(int arr[], int size);
void bubbleSort(int arr[], int n);

int main(){
    int myArray[] = {1, 2, 8, 3, 9, 5, 4, 3, 23, 10, 0};
    //int myArray[] = {1, 2, 3, 3, 4, 5};
    int n = sizeof(myArray)/sizeof(myArray[0]); // length of the array
    printf("Before: ");
    printArray(myArray, n);
    bubbleSort(myArray, n);
    printf("After: ");
    printArray(myArray, n);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap(int *xp, int *yp){
    int tmp = *xp;
    *xp = *yp;
    *yp = tmp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped = false;
   
   for (i = 0; i < n-1; i++){
       swapped = false;
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) {
           if (arr[j] > arr[j+1]) {
              swap(&arr[j], &arr[j+1]);
              swapped = true;
           }
              
       }
       
       if(swapped == false) break; // array is now sorted, break loop
   }
}
