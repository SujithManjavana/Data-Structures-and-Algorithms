#include <stdio.h>
#include <cs50.h>

void swap(int *xp, int *yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main(){
    int myArray[] = {1, 2, 8, 3, 9, 5, 4, 3, 23, 10, 0};
    //int myArray[] = {1, 2, 3, 3, 4, 5};
    int n = sizeof(myArray)/sizeof(myArray[0]); // length of the array
    printf("Before: ");
    printArray(myArray, n);
    selectionSort(myArray, n);
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

void selectionSort(int arr[], int n)
{
   int i, j, smallest;
   //One by one move boundary of unsorted subarray
   for (i = 0; i < n; i++){
       smallest = i; //consider i as smallest
       
      // Find the smallest element in unsorted array
       for(j = i; j < n; j++){
           if(arr[j] < arr[smallest])
           smallest = j;

        }
        // Swap the found smallest element with the first element in unsorted array
        swap(&arr[i], &arr[smallest]); 

   }
}
