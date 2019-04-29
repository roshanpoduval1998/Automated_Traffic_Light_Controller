
#include <Stepper.h>

const int stepsPerRevolution = 525;  // change this to fit the number of steps per revolution
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int green1 = 2;
int yellow1 = 3 ; // 12;
int red1 = 4 ;//13;

int green2 = 5;
int yellow2 = 6;
int red2 = 7;

int green3 = 14;
int yellow3 = 15;
int red3 = 16;

int green4 = 17;
int yellow4 = 18;
int red4 = 19;

int VAR1 ;
int VAR2 ;
int VAR3 ;
int VAR4 ;

char temp = ' ';
int m = 0;
int c = 0;
String test_input = " ";

void setup()
{
  Serial.begin(9600);                           
  myStepper.setSpeed(50);
   pinMode(green1, OUTPUT); 
  pinMode(yellow1, OUTPUT); 
  pinMode(red1, OUTPUT); 
  
  pinMode(green2, OUTPUT); 
  pinMode(yellow2, OUTPUT); 
  pinMode(red2, OUTPUT); 
  
  pinMode(green3, OUTPUT); 
  pinMode(yellow3, OUTPUT); 
  pinMode(red3, OUTPUT); 
  
  pinMode(green4, OUTPUT); 
  pinMode(yellow4, OUTPUT); 
  pinMode(red4, OUTPUT); 

}

void loop()

{
  while( m == 0 )
    {
      
      while(Serial.available() > 0 )
        {
           //temp = Serial.parseInt();
            temp = Serial.read();
           // temp = temp.parseInt();
            
           //Serial.println(temp);
        }    
    if(temp == 'o')
        {
     //    Serial.println("lane1"); 
         m = 1;
         delay(1000);
         temp = ' ';
        }
    if(temp == 't')
        {
       //  Serial.println("lane2"); 
         m = 2;
        delay(1000);
         temp = ' ';
        }   

    if(temp == 'r')
        {
     //    Serial.println("lane1"); 
         m = 3;
         delay(1000);
         temp = ' ';
        }
    if(temp == 'f')
        {
       //  Serial.println("lane2"); 
         m = 4;
        delay(1000);
         temp = ' ';
        }         
}

while(m == 1)
  {
  // Serial.println("wait"); 
   myStepper.step(stepsPerRevolution);         
      Serial.println("lane1"); 
      m = 5;
     // while(Serial.available()>0)
      //    {
      //    VAR1 = Serial.parseInt();
      //    Serial.write(VAR1);
       //   m = 0;
        //  }
  }
  

while( m == 5 )
{
  if(Serial.available()>0)
    {
      VAR1 = Serial.parseInt();
      if(VAR1 > 0 )
        {
          m = 0;  
        }
    }
}


  
while(m == 2)
  {
  // Serial.println("wait"); 
   myStepper.step(stepsPerRevolution);         
      Serial.println("lane2"); 
   m = 6;
  }

while( m == 6 )
{
  if(Serial.available()>0)
    {
      VAR2 = Serial.parseInt();
      if(VAR2 > 0 )
        {
          m = 0;  
        }
    }
}

while(m == 3)
  {
  // Serial.println("wait"); 
   myStepper.step(stepsPerRevolution);         
      Serial.println("lane3"); 
   m = 7;
  }


while( m == 7 )
{
  if(Serial.available()>0)
    {
      VAR3 = Serial.parseInt();
      if(VAR3 > 0 )
        {
          m = 0;  
        }
    }
}


while(m == 4)
  {
  // Serial.println("wait"); 
   myStepper.step(stepsPerRevolution);         
      Serial.println("lane4"); 
   m = 8;
  }


while( m == 8 )
{
  if(Serial.available()>0)
    {
      VAR4 = Serial.parseInt();
      if(VAR4 > 0 )
        {
          m = 9;  
        }
    }
}


while(m == 9)
{  
if(VAR1>VAR2 && VAR1>VAR3 && VAR1>VAR4)
{pattern1();m = 0;VAR1 = 0;VAR2 = 0;VAR3 = 0;VAR4 = 0;}   

if(VAR2>VAR1 && VAR2>VAR3 && VAR2>VAR4)
{pattern2();m = 0;VAR1 = 0;VAR2 = 0;VAR3 = 0;VAR4 = 0;}   

if(VAR3>VAR1 && VAR3>VAR2 && VAR3>VAR4)
{pattern3();m = 0;VAR1 = 0;VAR2 = 0;VAR3 = 0;VAR4 = 0;}   

if(VAR4>VAR1 && VAR4>VAR2 && VAR4>VAR3)
{pattern4();m = 0;VAR1 = 0;VAR2 = 0;VAR3 = 0;VAR4 = 0;}  
}


}




//------------------------------------------------------------------------------------------------------------------
//signal flow 1-2-3-4
void pattern1()
{
  
//LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(VAR1 * 1000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(2000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(VAR2 * 1000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(2000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(VAR3 * 1000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(2000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(VAR4 * 1000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(2000);
  ALL_LANE_LOW();
}

//---------------------------------------------------------------------------------------------------------------------
//signal flow 2-3-4-1
void pattern2()
{
  
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(VAR2 * 1000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(2000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(VAR3 * 1000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(2000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(VAR4 * 1000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(2000);
    LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(VAR1 * 1000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(2000);
  ALL_LANE_LOW();
}

//---------------------------------------------------------------------------------------------------------------------
//signal flow 3-4-1-2
void pattern3()
{
  
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(VAR3 * 1000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(2000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(VAR4 * 1000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(2000);
    LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(VAR1 * 1000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(2000);
  
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(VAR2 * 1000);
  
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(2000);
 
  ALL_LANE_LOW();
}


//---------------------------------------------------------------------------------------------------------------------
//signal flow 4-1-2-3
void pattern4()
{
  
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(VAR4 * 1000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(2000);
    LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(VAR1 * 1000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(2000);
  
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(VAR2 * 1000);
  
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(2000); 

  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(VAR3 * 1000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(2000);
  
  ALL_LANE_LOW();
}






//Total functions--------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//LANE 1 GREEN SIGNAL ON
void LANE_1_GREEN()
{
digitalWrite(red1, LOW);
digitalWrite(yellow1, LOW);
digitalWrite(green1, HIGH);//GREEN 1 on
Serial.println("Green1");
}
//LANE 1 YELLOW SIGNAL ON
void LANE_1_YELLOW()
{
digitalWrite(red1, LOW);
digitalWrite(yellow1, HIGH);//YELLOW 1 on
digitalWrite(green1, LOW);
Serial.println("Yellow1");
}
//LANE 1 RED SIGNAL ON
void LANE_1_RED()
{
digitalWrite(red1, HIGH);//RED 1 on
digitalWrite(yellow1, LOW);
digitalWrite(green1, LOW);
Serial.println("Red1");
}
//--------------------------------------------------------------------------------------------------
//LANE 2 GREEN SIGNAL ON
void LANE_2_GREEN()
{
digitalWrite(red2, LOW);
digitalWrite(yellow2, LOW);
digitalWrite(green2, HIGH);//GREEN 2 on
Serial.println("Green2");
}
//LANE 2 YELLOW SIGNAL ON
void LANE_2_YELLOW()
{
digitalWrite(red2, LOW);
digitalWrite(yellow2, HIGH);//YELLOW 2 on
digitalWrite(green2, LOW);
Serial.println("yellow2");
}
//LANE 2 RED SIGNAL ON
void LANE_2_RED()
{
digitalWrite(red2, HIGH);//RED 2 on
digitalWrite(yellow2, LOW);
digitalWrite(green2, LOW);
Serial.println("Red2");
}
//-------------------------------------------------------------------------------------------------
//LANE 3 GREEN SIGNAL ON
void LANE_3_GREEN()
{
digitalWrite(red3, LOW);
digitalWrite(yellow3, LOW);
digitalWrite(green3, HIGH);//GREEN 3 on
Serial.println("Green3");
}
//LANE 3 YELLOW SIGNAL ON
void LANE_3_YELLOW()
{
digitalWrite(red3, LOW);
digitalWrite(yellow3, HIGH);//YELLOW 3 on
digitalWrite(green3, LOW);
Serial.println("Yellow3");
}
//LANE 3 RED SIGNAL ON
void LANE_3_RED()
{
digitalWrite(red3, HIGH);//RED 3 on
digitalWrite(yellow3, LOW);
digitalWrite(green3, LOW);
Serial.println("Red3");
}
//-------------------------------------------------------------------------------------------------
//LANE 4 GREEN SIGNAL ON
void LANE_4_GREEN()
{
digitalWrite(red4, LOW);
digitalWrite(yellow4, LOW);
digitalWrite(green4, HIGH);//GREEN 4 on
Serial.println("Green4");
}
//LANE 4 YELLOW SIGNAL ON
void LANE_4_YELLOW()
{
digitalWrite(red4, LOW);
digitalWrite(yellow4, HIGH);//YELLOW 4 on
digitalWrite(green4, LOW);
Serial.println("Yellow4");
}
//LANE 4 RED SIGNAL ON
void LANE_4_RED()
{
digitalWrite(red4, HIGH);//RED 4 on
digitalWrite(yellow4, LOW);
digitalWrite(green4, LOW);
Serial.println("Red4");
}
//LANE1TO4 LOW STATE FUNCTION
void ALL_LANE_LOW()
{
digitalWrite(red1, LOW);
digitalWrite(yellow1, LOW);
digitalWrite(green1, LOW);

digitalWrite(red2, LOW);
digitalWrite(yellow2, LOW);
digitalWrite(green2, LOW);

digitalWrite(red3, LOW);
digitalWrite(yellow3, LOW);
digitalWrite(green3, LOW);

digitalWrite(red4, LOW);
digitalWrite(yellow4, LOW);
digitalWrite(green4, LOW);


}






