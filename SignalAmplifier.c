#include <stdio.h>
void AmplifySignal(double BaseSignal, int GainFactor)
{double FinalOutput = BaseSignal*GainFactor;
printf ("Amplified Signal = %.1fV", FinalOutput);
}
int main()
{double BaseSignal;
int GainFactor;
printf ("Enter raw sensor Voltage=");
scanf ("%lf", &BaseSignal);
printf ("Enter gain multiplier=");
scanf ("%d", &GainFactor);
AmplifySignal (BaseSignal, GainFactor);
return 0;
}