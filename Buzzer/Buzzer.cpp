#include "Buzzer.h"

Buzzer::Buzzer(int _PIN,int _ID){
    PIN = _PIN;
    ID = _ID;
    pinMode(PIN, OUTPUT);
}

void Buzzer::PlaySound(int freq, int duration){
    tone(PIN,freq, duration);   
}

void Buzzer::PlaySound(int freq){
    tone(PIN,freq);   
}

void Buzzer::StopSound(){
    noTone(PIN);   
}

int Buzzer::GetID(){
    return(ID);
}