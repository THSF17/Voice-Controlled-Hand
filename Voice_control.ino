#define CUSTOM_SETTINGS
#define INCLUDE_VOICE_RECOGNIZER_SHIELD

#include <Servo.h>
#include <OneSheeld.h>

Servo finger1, finger2, finger3, finger4;

const char on[] = "on";
const char off[] = "off";
const char think[] = "think";
const char decide[] = "decide";
const char one[] = "one";
const char to[] = "to";
const char three[] = "three";
const char fourth[] = "fourth";

int servoPin1 = 5;
int servoPin2 = 6;
int servoPin3 = 9;
int servoPin4 = 10;

void setup () 
{
 
  OneSheeld.begin();
  finger1.attach(servoPin1);
  finger2.attach(servoPin2);
  finger3.attach(servoPin3);
  finger4.attach(servoPin4);
 
  
  pinMode(servoPin1, OUTPUT);
  pinMode(servoPin2, OUTPUT);
  pinMode(servoPin3, OUTPUT);
  pinMode(servoPin4, OUTPUT);
}
void loop ()
{
 int pos1 = 0;
 int pos2 = 180;
 int pos3 = 90;
 
  if(VoiceRecognition.isNewCommandReceived())
  {
    if(!strcmp(on,VoiceRecognition.getLastCommand()))
    {
    finger1.write(pos1);
    finger2.write(pos1);
    finger3.write(pos1);
    finger4.write(pos1);
 
    }
    else if(!strcmp(off,VoiceRecognition.getLastCommand()))
    {
     finger1.write(pos2);
     finger2.write(pos2);
     finger3.write(pos2);
     finger4.write(pos2);
 
    }
       else if(!strcmp(think,VoiceRecognition.getLastCommand()))
    {
     finger1.write(pos1);
     finger2.write(pos1);
     finger3.write(pos2);
     finger4.write(pos1);
  }


     else if(!strcmp(decide ,VoiceRecognition.getLastCommand()))
    {
     finger1.write(pos2);
     finger2.write(pos1);
     finger3.write(pos1);
     finger4.write(pos1);
  }

  else if(!strcmp(one ,VoiceRecognition.getLastCommand()))
    {
     finger1.write(pos1);
     finger2.write(pos2);
     finger3.write(pos1);
     finger4.write(pos1);
  }

    else if(!strcmp(to ,VoiceRecognition.getLastCommand()))
    {
     finger1.write(pos1);
     finger2.write(pos2);
     finger3.write(pos2);
     finger4.write(pos1);
  }

     else if(!strcmp(three ,VoiceRecognition.getLastCommand()))
    {
     finger1.write(pos2);
     finger2.write(pos2);
     finger3.write(pos2);
     finger4.write(pos1);
  }
   else if(!strcmp(fourth ,VoiceRecognition.getLastCommand()))
    {
     finger1.write(pos1);
     finger2.write(pos2);
     finger3.write(pos2);
     finger4.write(pos2);
  }
  
}  
}
