int VAR1 = 0;
void setup()
{
  Serial.begin(9600);                           
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT); 
  pinMode(11, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(2, OUTPUT); 
}
void loop()
{
  //------------------------------------------------------------------------------------------------------
  VAR1 = Serial.parseInt();
  if (VAR1 == 1)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(15000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(2000);
  ALL_LANE_LOW();
}
if (VAR1 == 2)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(15000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(5000);
  ALL_LANE_LOW();
}
if (VAR1 == 3)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(30000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(5000);
  ALL_LANE_LOW();
}
if (VAR1 == 4)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(15000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(30000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(8000);
  ALL_LANE_LOW();
}
if (VAR1 == 5)//This conditions ON only when 2 lane have same vehicle count
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(15000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(5000);
  ALL_LANE_LOW();
}
if (VAR1 == 6)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(30000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(5000);
  ALL_LANE_LOW();
}
if (VAR1 == 7)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(15000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(30000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(8000);
  ALL_LANE_LOW();
}
if (VAR1 == 8)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(30000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(5000);
  ALL_LANE_LOW();
}
if (VAR1 == 9)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(15000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(30000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(8000);
  ALL_LANE_LOW();
}
if (VAR1 == 10)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(30000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(30000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(8000);
  ALL_LANE_LOW();
}
if (VAR1 == 11)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(30000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(5000);
  ALL_LANE_LOW();
}
if (VAR1 == 12)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(15000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(30000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(8000);
  ALL_LANE_LOW();
}
if (VAR1 == 13)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(30000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(5000);
  ALL_LANE_LOW();
}
if (VAR1 == 14)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(30000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(30000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(8000);
  ALL_LANE_LOW();
}
if (VAR1 == 15)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(30000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(30000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(8000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(30000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(8000);
  ALL_LANE_LOW();
}
if (VAR1 == 16)
{
  //LANE 1 GREEN TO LANE 2 SWITCHING
  LANE_1_GREEN();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  LANE_1_YELLOW();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_GREEN();
  LANE_3_RED();
  LANE_4_RED();
  delay(15000);
  //LANE 2 GREEN TO LANE 3 SWITCHING
  LANE_1_RED();
  LANE_2_YELLOW();
  LANE_3_RED();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_GREEN();
  LANE_4_RED();
  delay(15000);
  //LANE 3 GREEN TO LANE 4 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_YELLOW();
  LANE_4_RED();
  delay(5000);
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_GREEN();
  delay(15000);
  //LANE 4 GREEN TO LANE 1 SWITCHING
  LANE_1_RED();
  LANE_2_RED();
  LANE_3_RED();
  LANE_4_YELLOW();
  delay(5000);
  ALL_LANE_LOW();
}
}
//Total functions--------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//LANE 1 GREEN SIGNAL ON
void LANE_1_GREEN()
{
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);//GREEN 1 on
}
//LANE 1 YELLOW SIGNAL ON
void LANE_1_YELLOW()
{
digitalWrite(13, LOW);
digitalWrite(12, HIGH);//YELLOW 1 on
digitalWrite(11, LOW);
}
//LANE 1 RED SIGNAL ON
void LANE_1_RED()
{
digitalWrite(13, HIGH);//RED 1 on
digitalWrite(12, LOW);
digitalWrite(11, LOW);
}
//--------------------------------------------------------------------------------------------------
//LANE 2 GREEN SIGNAL ON
void LANE_2_GREEN()
{
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);//GREEN 2 on
}
//LANE 2 YELLOW SIGNAL ON
void LANE_2_YELLOW()
{
digitalWrite(10, LOW);
digitalWrite(9, HIGH);//YELLOW 2 on
digitalWrite(8, LOW);
}
//LANE 2 RED SIGNAL ON
void LANE_2_RED()
{
digitalWrite(10, HIGH);//RED 2 on
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
//-------------------------------------------------------------------------------------------------
//LANE 3 GREEN SIGNAL ON
void LANE_3_GREEN()
{
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);//GREEN 3 on
}
//LANE 3 YELLOW SIGNAL ON
void LANE_3_YELLOW()
{
digitalWrite(7, LOW);
digitalWrite(6, HIGH);//YELLOW 3 on
digitalWrite(5, LOW);
}
//LANE 3 RED SIGNAL ON
void LANE_3_RED()
{
digitalWrite(7, HIGH);//RED 3 on
digitalWrite(6, LOW);
digitalWrite(5, LOW);
}
//-------------------------------------------------------------------------------------------------
//LANE 4 GREEN SIGNAL ON
void LANE_4_GREEN()
{
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);//GREEN 4 on
}
//LANE 4 YELLOW SIGNAL ON
void LANE_4_YELLOW()
{
digitalWrite(4, LOW);
digitalWrite(3, HIGH);//YELLOW 4 on
digitalWrite(2, LOW);
}
//LANE 4 RED SIGNAL ON
void LANE_4_RED()
{
digitalWrite(4, HIGH);//RED 4 on
digitalWrite(3, LOW);
digitalWrite(2, LOW);
}
//LANE1TO4 LOW STATE FUNCTION
void ALL_LANE_LOW()
{
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, LOW);
}
//-------------------------------------------------------------------------------------------------------------------------
