#include <stdio.h>
int main ()
{char colour[20];
char flower [20];
char nameF[30];
char nameL [30];

printf ("=================================\n");
printf ("|    WELCOME TO MAD LIBS        |\n");   
printf ("|        -by Pathikrit          |\n");
printf ("=================================\n\n");
printf ("Hello! Detective, Good to see you're doing well.\n");
printf ("Answer the following questions to get your own madlibs story.\n");
printf ("Enter a colour:");
scanf ("%s", colour);
printf ("Enter a flower:");
scanf ("%s", flower);
printf ("Enter your full name:");
scanf ("%s %s", nameF,nameL);

printf ("----------YOUR MADLIBS STORY-----------\n");
printf ("Breaking News! The famous detective, %s %s, was spotted today\n",nameF,nameL);
printf ("sneaking around the city park. Witnesses claim they saw them\n");
printf ("investigating a highly suspicious, glowing %s %s.\n",colour,flower);
printf ("and sprinted away into the bushes.\n");
printf ("====================================\n");
printf ("|             THE END              |\n");
printf ("====================================\n");
return 0;
}
