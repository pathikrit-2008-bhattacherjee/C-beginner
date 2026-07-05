#include <stdio.h>
int main (){
    int Age;
    printf ("Enter you age:");
    scanf ("%d", &Age);
    if (Age >= 18){
        printf ("Access Granted. Welcome to the lab.");
    }
    else {
        printf ("Access Denied. Authorized personnel only.");
    }
    return 0;
}