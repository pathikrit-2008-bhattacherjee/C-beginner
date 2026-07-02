#include <stdio.h>
int main ()
{char SensorID;
double Tempr;
int Humidity;

printf ("Enter the sensor ID: ");
scanf (" %c",&SensorID);
printf ("Enter the current temperature: ");
scanf ("%lf", &Tempr);
printf ("Enter the Humidty percentage: ");
scanf ("%d", &Humidity);

printf ("-----System Log------\n");
printf ("Sensor [%c] is active. Temp: %.2f, Humidity: %d%%", SensorID , Tempr , Humidity);
return 0;
}
