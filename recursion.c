#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(){
    draw(get_int("Enter number of blocks: "));
    return 0;
}

void draw(int n){
    if(n==0) return;//base case
    draw(n-1);
    for(int i = 0; i<n; i++){
        printf("x");
    }
    printf("\n");
}
