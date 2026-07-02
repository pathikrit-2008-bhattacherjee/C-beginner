#include <stdio.h>
void TotalVoltage(double Vol[])
{double Total = (Vol[0]+Vol[1]+Vol[2]);
printf ("The total accumulated voltage is %.4fV", Total);
}
int main()
{double Vol[3]={1.5, 3.3, 5.0};
TotalVoltage (Vol);
return 0;
}