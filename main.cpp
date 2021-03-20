#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);
AnalogOut aout(PA_4);
AnalogIn up(A0);
AnalogIn down(A1);
AnalogIn select(A2)

int main()
{
    int done = 0;
    int Freq[10];
    int f = 0;
    unit16_t sample = 0;
    // I have to set the frequency range and button connection
    
    uLCD.printf("\nSelection a frequency.\n");
    // Analog input and LCD
    while (!done) {
        if (select) {
            uLCD.locate(1, 2);
            uLCD.printf("%d Hz", Freq[f]);
            ThisThread::sleep_for(1ms);
            done = 1;
        } else if (up) {
            uLCD.locate(1, 2);
            if (f + 1 < n) f++;
            else uLCD.printf("\nCan't be larger.\n")
            uLCD.printf("%d Hz", Freq[f]);
            ThisThread::sleep_for(1ms);
        } else if (down) {
            uLCD.locate(1, 2);
            if (f - 1 >= 0) f--;
            else uLCD.printf("\nCan't be smaller.\n")
            uLCD.printf("%d Hz", Freq[f]);
            ThisThread::sleep_for(1ms);
        }
    }
    // make triangle waveform and frequency is selected above
    // Analog output
    while(1) {
        for (int i = 0; i <= 10; i++) {
            if (i <= 7) {
                sample = 3/7
            }
        }
    }
}