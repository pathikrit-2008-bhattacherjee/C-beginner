#include <stdio.h>
int main ()
{int Score;
    printf ("Enter your score:");
    scanf ("%d",&Score);
    if (Score >= 90){
        printf ("Grade: A, Excellent work!");
    }
    else if (Score<90 && Score >=70){
        printf ("Grade: B,Good Job!");
    }
    else if (Score <70 && Score >=50){
        printf ("Grade: C,Passed");
    }
    else {printf ("Grade: F ,Needs Improvement");
    }
    return 0;
    }
