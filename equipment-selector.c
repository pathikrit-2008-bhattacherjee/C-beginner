#include <stdio.h>
int main(){
    int LabNo;
    printf ("Enter Lab number: ");
    scanf ("%d", &LabNo);
    
    switch (LabNo){
        case 1:
        printf ("Booting up Oscilloscope.....\n");
        break;
        
        case 2:
        printf ("Calibrating Multimeter.....\n");
        break;
        
        case 3:
        printf ("Initializing Function Generator.....\n");
        break;
        
        default:
        printf ("Error. Unknown Equipment ID.");

        }
        return 0;
}