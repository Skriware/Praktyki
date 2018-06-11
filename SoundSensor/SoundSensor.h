#ifndef SOUNDSENSOR
#define SOUNDSENSOR
//#define Debug
#include "Arduino.h"

class SoundSensor
{
public:
    SoundSensor(int _PIN,int _ID);
    int PIN;
    int ID;
    int Background;
    int threshold;
    String NAME;
    bool isLouder();
    int ReadRaw();
    void TestBackground();
    int GetID();
    int HowMany(int time);

};

/*

class SoundSensorDigital 
{
public:
    SoundSensor(int _PIN,int _ID);
    int PIN;
    int ID;
    int background;
    int threshold;
    String NAME;
    int ReadRaw();
    void TestBackground();
    int GetID();

};

*/

#endif

