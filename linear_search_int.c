#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int nums[] = {4,8,3,0,9,2,1};
    int lookingFor = 39;
    
    for(int i=0; i<7; i++){
        if(nums[i] == lookingFor) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
