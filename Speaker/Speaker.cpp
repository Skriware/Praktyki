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

void Speaker::PlayNote(char *note, int duration){
    //Serial.print(note[0]);Serial.print(note[1]);Serial.println(note[2]);
    char Note[3];
    sprintf(Note,"%s",note);
    //sprintf()
    switch(Note[0]){
        case 'A' :
                switch(Note[1]){
                case '1':
                PlaySound(55, duration);
                break;
                case '2':
                PlaySound(110, duration);
                break;
                case '3':
                PlaySound(220, duration);
                break;
                case '4':
                PlaySound(440, duration);
                break;
                case '5':
                PlaySound(880, duration);
                break;
                case '6':
                PlaySound(1760, duration);
                break;
                case '7':
                PlaySound(3520, duration);
                break;
                case 'S':
                        switch(Note[2]){
                            case '1':
                                PlaySound(58, duration);
                                break;
                            case '2':
                                PlaySound(117, duration);
                                break;
                            case '3':
                                PlaySound(233, duration);
                                break;
                            case '4':
                                PlaySound(466, duration);
                                break;
                            case '5':
                                PlaySound(932, duration);
                                break;
                            case '6':
                                PlaySound(1865, duration);
                                break;
                            case '7':
                                PlaySound(3729, duration);
                                break;
                        }
                break;
                }
         break;
        case 'B' :
                switch(Note[1]){
                case '0':
                PlaySound(33, duration);
                break;
                case '1':
                PlaySound(62, duration);
                break;
                case '2':
                PlaySound(123, duration);
                break;
                case '3':
                PlaySound(247, duration);
                break;
                case '4':
                PlaySound(494, duration);
                break;
                case '5':
                PlaySound(988, duration);
                break;
                case '6':
                PlaySound(1976, duration);
                break;
                case '7':
                PlaySound(3951, duration);
                break;
                }
        case 'C' :
                switch(Note[1]){
                case '1':
                PlaySound(33, duration);
                break;
                case '2':
                PlaySound(65, duration);
                break;
                case '3':
                PlaySound(131, duration);
                break;
                case '4':
                PlaySound(262, duration);
                break;
                case '5':
                PlaySound(523, duration);
                break;
                case '6':
                PlaySound(1047, duration);
                break;
                case '7':
                PlaySound(2093, duration);
                break;
                case '8':
                PlaySound(4186, duration);
                break;
                case 'S':
                        switch(Note[2]){
                            case '1':
                                PlaySound(35, duration);
                                break;
                            case '2':
                                PlaySound(69, duration);
                                break;
                            case '3':
                                PlaySound(139, duration);
                                break;
                            case '4':
                                PlaySound(277, duration);
                                break;
                            case '5':
                                PlaySound(554, duration);
                                break;
                            case '6':
                                PlaySound(1109, duration);
                                break;
                            case '7':
                                PlaySound(2217, duration);
                                break;
                            case '8':
                                PlaySound(4435, duration);
                                break;
                        }
                break;
                }
        case 'D' :
                switch(Note[1]){
                case '1':
                PlaySound(37, duration);
                break;
                case '2':
                PlaySound(73, duration);
                break;
                case '3':
                PlaySound(147, duration);
                break;
                case '4':
                PlaySound(294, duration);
                break;
                case '5':
                PlaySound(587, duration);
                break;
                case '6':
                PlaySound(1175, duration);
                break;
                case '7':
                PlaySound(2349, duration);
                break;
                case '8':
                PlaySound(4699, duration);
                break;
                case 'S':
                        switch(Note[2]){
                            case '1':
                                PlaySound(39, duration);
                                break;
                            case '2':
                                PlaySound(78, duration);
                                break;
                            case '3':
                                PlaySound(156, duration);
                                break;
                            case '4':
                                PlaySound(311, duration);
                                break;
                            case '5':
                                PlaySound(622, duration);
                                break;
                            case '6':
                                PlaySound(1245, duration);
                                break;
                            case '7':
                                PlaySound(2489, duration);
                                break;
                            case '8':
                                PlaySound(4978, duration);
                                break;
                        }
                break;
                }
        case 'E' :
                switch(Note[1]){
                case '1':
                PlaySound(41, duration);
                break;
                case '2':
                PlaySound(82, duration);
                break;
                case '3':
                PlaySound(165, duration);
                break;
                case '4':
                PlaySound(330, duration);
                break;
                case '5':
                PlaySound(659, duration);
                break;
                case '6':
                PlaySound(1319, duration);
                break;
                case '7':
                PlaySound(2637, duration);
                break;
                }
         case 'F' :
                switch(Note[1]){
                case '1':
                PlaySound(44, duration);
                break;
                case '2':
                PlaySound(87, duration);
                break;
                case '3':
                PlaySound(175, duration);
                break;
                case '4':
                PlaySound(349, duration);
                break;
                case '5':
                PlaySound(698, duration);
                break;
                case '6':
                PlaySound(1397, duration);
                break;
                case '7':
                PlaySound(2794, duration);
                break;
                case 'S':
                        switch(Note[2]){
                            case '1':
                                PlaySound(46, duration);
                                break;
                            case '2':
                                PlaySound(93, duration);
                                break;
                            case '3':
                                PlaySound(185, duration);
                                break;
                            case '4':
                                PlaySound(370, duration);
                                break;
                            case '5':
                                PlaySound(740, duration);
                                break;
                            case '6':
                                PlaySound(1480, duration);
                                break;
                            case '7':
                                PlaySound(2960, duration);
                                break;
                        }
                break;
                }
         case 'G' :
                switch(Note[1]){
                case '1':
                PlaySound(49, duration);
                break;
                case '2':
                PlaySound(98, duration);
                break;
                case '3':
                PlaySound(196, duration);
                break;
                case '4':
                PlaySound(392, duration);
                break;
                case '5':
                PlaySound(784, duration);
                break;
                case '6':
                PlaySound(1568, duration);
                break;
                case '7':
                PlaySound(3136, duration);
                break;
                case 'S':
                        switch(Note[2]){
                            case '1':
                                PlaySound(52, duration);
                                break;
                            case '2':
                                PlaySound(104, duration);
                                break;
                            case '3':
                                PlaySound(208, duration);
                                break;
                            case '4':
                                PlaySound(415, duration);
                                break;
                            case '5':
                                PlaySound(831, duration);
                                break;
                            case '6':
                                PlaySound(1661, duration);
                                break;
                            case '7':
                                PlaySound(3322, duration);
                                break;
                        }
                break;
                }    
        default:break;
    }
}

int Speaker::GetID(){
    return(ID);
}