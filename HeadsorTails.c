#include <stdio.h>
#include <stdlib.h>

int main(){
    int Rand = 0, Heads = 0, Tails = 0;
    char name[100];

    printf("Who are you?\n");
    scanf("%s", &name);
    printf("Hello, %s!\n",name);

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
    if(Heads > Tails){
        printf("%s won!\n", name);
    }else{
        printf("%s lost!\n", name);
    }
}