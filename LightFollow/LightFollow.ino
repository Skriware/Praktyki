#include <Skribot.h>


Skribot robot;
Servo Servo;
int pos=0;
int read[10];
int i=0;
int threshold=200;
int suma = 0; 
int pos_max=180;
int pos_min=10;
int status=0;
int odczyt=0;
int old_threshold;

void setup() {
  // put your setup code here, to run once:
    
    robot.AddLightSensor(1,1);
    robot.AddLightSensor(2,2);
    robot.AddDCRotor("LEFT");          //adding rotors for movement "LEFT" and "RIGHT" tags let the robot know that rotors are conncted to the Skriware EDU Shiels
    robot.AddDCRotor("RIGHT");
    robot.SetSpeed(250);
    Serial.begin(9600);
    Serial.println("KONIEC SETUPU");
    Servo.attach(2);
    Servo.write(0);
}

void loop() { 
  Serial.print("LIGHT   "); Serial.print(robot.ReadLightRaw(1)); Serial.print("    "); Serial.println(robot.ReadLightRaw(2)); Serial.println(threshold);
  // put your main code here, to run repeatedly:
 /*if (robot.LightSensorBright(1)!=true && robot.LightSensorBright(2)!=true){
  Servo.write(pos+1);
  pos=Servo.read();}*/
  while (status==1){
    odczyt = abs(robot.ReadLightRaw(1)-robot.ReadLightRaw(2));
    if (odczyt>threshold) 
      status=0;
    else 
      {old_threshold=threshold;
      threshold=1.5*threshold;} //threshold=1.5*threshold;
    delay(50);
  }
  status=0;


  while (status==0){
    threshold=old_threshold;
    if (robot.ReadLightRaw(1)+threshold>robot.ReadLightRaw(2)){
      pos=Servo.read();
      Servo.write(pos-1);
      read[i]=robot.ReadLightRaw(1);
      if (pos > pos_max){Servo.write(pos_max);}
      if (pos < pos_min){Servo.write(pos_min);}
    }
    if (robot.ReadLightRaw(2)+threshold>robot.ReadLightRaw(1)){
      pos=Servo.read();
      Servo.write(pos+1);
      read[i]=robot.ReadLightRaw(2);
      if (pos > pos_max){Servo.write(pos_max);}
      if (pos < pos_min){Servo.write(pos_min);}
      }
    if (robot.ReadLightRaw(1)==robot.ReadLightRaw(2)+threshold)
      status=1;
    odczyt = abs(robot.ReadLightRaw(1)-robot.ReadLightRaw(2));
    delay(50);
  }
}