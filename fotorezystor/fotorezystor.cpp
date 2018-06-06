#include "fotorezystor.h"

fotorezystor::fotorezystor(int _PIN,int _ID){
    PIN = _PIN;
    ID = _ID;
    Serial.begin(9600);
}

int fotorezystor::ReadRaw(){
    return(analogRead(PIN));   
}

void fotorezystor::TestLight(){
    int Reads[100]; 
    for (int i=0; i < 100; i++){
        Reads[i] = ReadRaw();
        delay(30);
    }
    #ifdef DEBUG
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

    Serial.println("UPORZADKOWANA");
    for(int i = 0; i < 80; i++)
    {
        Serial.println(Reads_new[i]);
    }
    
    avrage = Reads_new[39];
    threshold = avrage*0.1+(Reads[79]-Reads[0]);

}

bool fotorezystor::isDark(){
    if ((avrage+threshold) > ReadRaw())
        return false;
    else
        return true;

}

bool fotorezystor::isBright(){
      if ((avrage-threshold) < ReadRaw())
        return false;
    else
        return true;

}
