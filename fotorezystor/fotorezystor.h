//#define DEBUG

#ifndef Fotorezystor
#define Fotorezystor 
#include "Arduino.h"

class fotorezystor 
{
public:
    fotorezystor(int _PIN,int _ID);
    int PIN;
    int ID;
    int avrage;
    int threshold;
    String NAME;
    int ReadRaw();
    void TestLight();
    bool isDark();
    bool isBright();

};

#endif

