#ifndef BUZZER
#define BUZZER
//#define Debug
#include "Arduino.h"

class Buzzer
{
public:
    Buzzer(int _PIN,int _ID);
    int PIN;
    int ID;
    String NAME;
    int GetID();
    void PlaySound(int freq, int duration);
    void PlaySound(int freq);
    void StopSound();

};

#endif

