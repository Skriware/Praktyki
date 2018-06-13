#include "Speaker.h"


Speaker::Speaker(int _PIN,int _ID){
    PIN = _PIN;
    ID = _ID;
    pinMode(PIN, OUTPUT);
    
}

void Speaker::PlaySound(int freq, int duration){
    tone(PIN,freq, duration);   
}

void Speaker::PlaySound(int freq){
    tone(PIN,freq);   
}

void Speaker::StopSound(){
    noTone(PIN);   
}

void Speaker::PlayNote(sound s, int duration){
    //char Note[];
    switch(s){
        case AA3 : PlaySound(220, duration);break;
        case AS3 : PlaySound(233, duration);break;
        case B3 : PlaySound(247, duration);break;
        case C4 : PlaySound(262, duration);break;
        case CS4 : PlaySound(277, duration);break;
        case D4 : PlaySound(294, duration);break;
        case DS4 : PlaySound(311, duration);break;
        case E4 : PlaySound(330, duration);break;
        case F4 : PlaySound(349, duration);break;
        case FS4 : PlaySound(370, duration);break;
        case G4 : PlaySound(392, duration);break;
        case GS4 : PlaySound(415, duration);break;
        default:break;
    }
}

int Speaker::GetID(){
    return(ID);
}