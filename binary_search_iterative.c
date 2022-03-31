#include <stdio.h>
#include <cs50.h>

int searchArray(int a[], int startPoint, int endPoint, int element);

int main(){
    int myArray[] = {1, 4, 7, 9, 16, 56, 70, 71, 76, 78, 80, 88, 96, 100}; //array must be sorted

    int lookingFor = get_int("What are you looking for: ");

    int found_index = searchArray(myArray, 0, 13, lookingFor); //13 is myArray length - 1

    if(found_index == -1 ) {
      printf("Element not found in the array\n");
    }
    else {
     printf("Element found at index : %i\n", found_index);
    }

    return 0;
}

int searchArray(int arr[], int startPoint, int endPoint, int element){
    while (startPoint <= endPoint){
        
      int middle = startPoint + (endPoint - startPoint ) / 2;
      //check middle
      if (arr[middle] == element)
         return middle;
      //search right part of array   
      if (arr[middle] < element)
         startPoint = middle + 1;
     //search left part of array   
      else
         endPoint = middle - 1;
    
     }

    return -1;
}
