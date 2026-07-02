#include <stdio.h>
#include <math.h>
int main()
{ double INR; /*1USD = 83.50 INR*/
printf ("Enter INR value =Rs.");
scanf ("%lf", &INR);

printf ("%.4f rupees is equal to %.4f dollars.", INR, (1.0/83.50)*INR);
return 0;
}