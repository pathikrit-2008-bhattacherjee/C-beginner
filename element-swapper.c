#include <stdio.h>
int main()
{int codes [3]= {101, 505, 909};
printf ("Original %d, %d, %d\n", codes[0], codes[1], codes[2]);
int temp= codes[0];
codes[0]=codes[2];
codes[2]=temp;
printf ("After swap %d, %d, %d", codes[0], codes[1], codes[2]);
return 0;
}