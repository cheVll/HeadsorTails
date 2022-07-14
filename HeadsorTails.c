#include <stdio.h>
#include <stdlib.h>

int main(){
    int Rand = 0, Heads = 0, Tails = 0;
    printf("Tossing a coin...\n");
    for(int i = 1; i <= 3; i++){
        printf("Round %d: ", i);
        Rand = rand()% 2;
        if(Rand == 0){
            printf("Heads\n");
            Heads++;
        }
        else{
            printf("Tails\n");
            Tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", Heads, Tails);
}