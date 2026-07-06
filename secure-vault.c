#include <stdio.h>
int main (){
    int secretPin = 2468;
    int guess=-1;
    int guessCount = 0;
    int guessLimit =3;
    int outofGuess =0;
    
    while (guess != secretPin && outofGuess==0){
        if (guessCount<guessLimit){
            printf ("Enter a 4-digit security pin: \n");
            scanf ("%d", &guess);
            guessCount ++;}
            else {outofGuess=1;}
    }
    if (outofGuess==1){
        printf ("System Locked down. Too many failed attempts.\n");
    } else {
        printf ("Vault opened successfully.\n");
    }return 0;
    
    }
 