#include <stdio.h>
#include <math.h>

int main ()
{double score1;
double score2;
double score3;
printf ("Enter 1st score=");
scanf ("%lf",&score1);
printf ("Enter 2nd score=");
scanf ("%lf",&score2);
printf ("Enter 3rd score=");
scanf ("%lf",&score3);
printf ("The average score of the three students is %.1f.", (score1+score2+score3)/3.0);
return 0;
}