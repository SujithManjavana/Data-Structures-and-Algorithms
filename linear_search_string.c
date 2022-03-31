#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    
    string names[]={"Rachel", "Joe", "Chandler", "Ross", "Monica", "Thanmatra"};
    string lookingFor = "Thanmatra";
    
    for(int i=0; i<5; i++){
        if(strcmp(names[i],lookingFor) == 0) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
