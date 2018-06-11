#include "SoundSensor.h"

SoundSensor::SoundSensor(int _PIN,int _ID){
    PIN = _PIN;
    ID = _ID;
    TestBackground();
}

int SoundSensor::ReadRaw(){
    return(analogRead(PIN));   
}

void SoundSensor::TestBackground(){
    //Serial.println("TEST BACKGROUND");
    int Reads[100]; 
    for (int i=0; i < 100; i++){
        Reads[i] = ReadRaw();
        delay(20);
    }

#ifdef Debug
    for(int i = 0; i < 100; i++)
    {
        Serial.println(Reads[i]);
    }
#endif

    for (int i=0; i < 100; i++){
        if (i==49 && Reads[i-1]>Reads[i]){
            int t= Reads[i];
            Reads [i] = Reads [i-1];
            Reads [i-1] = t;
            t=0;
        }
        else if (Reads[i] > Reads[i+1]){
            int t= Reads[i];
            Reads [i] = Reads [i+1];
            Reads [i+1] = t;
            t=0;
        }
    }
    int Reads_new[80];
    for(int i = 0; i < 80; i++)
    {
        Reads_new[i] = Reads[9+i];
    }


#ifdef Debug
    Serial.println("UPORZADKOWANA");
    for(int i = 0; i < 80; i++)
    {
        Serial.println(Reads_new[i]);
    }
#endif
    
    Background = Reads_new[39];
    threshold = Background*0.34;

}

bool SoundSensor::isLouder(){
    if ((Background+threshold) < ReadRaw())
        return true;
    else
        return false;

}


int SoundSensor::HowMany(int time){
    int start=millis();
    int count=0;
    int TimeOfWhile=millis()-start;
    while (TimeOfWhile!=time){
        if (isLouder()==true)
            count++;
        TimeOfWhile=millis()-start;
    }
    return (count);
}


int SoundSensor::GetID(){
    return(ID);
}