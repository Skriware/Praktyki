#ifndef SPEAKER
#define SPEAKER
//#define Debug
#include "Arduino.h"

enum sound {AA3, AS3, B3, C4, CS4, D4, DS4, E4, F4, FS4, G4, GS4};

class Speaker
{
public:
    Speaker(int _PIN,int _ID);
    int PIN;
    int ID;
    String NAME;
    int GetID();
    void PlaySound(int freq, int duration);
    void PlaySound(int freq);
    void PlayNote(sound s, int duration);
    void StopSound();

};

#endif

