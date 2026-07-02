#include <stdio.h>
int main ()
{char Name [20];
int year;

printf ("Enter your name: ");
scanf ("%s", Name);
printf ("Enter your birth year: ");
scanf ("%d", &year);

printf ("Your username is %s_%d.",Name,year);
return 0;
}