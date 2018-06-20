#ifndef SPEAKER
#define SPEAKER
//#define DeBBug
#include "Arduino.h"

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
    void PlayNote(char *note, int duration);
    void StopSound();

};

#endif

