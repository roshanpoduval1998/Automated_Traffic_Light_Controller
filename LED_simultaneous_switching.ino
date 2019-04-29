int data = 0;
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
data = Serial.parseInt();

{
if(data == 12)
{
// switching from lane 1 to lane 2
//lane1
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);//Green 1 on 
//lane2  
digitalWrite(10, HIGH);//Red 2 on
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, HIGH);//Red 3 on   
digitalWrite(6, LOW);  
digitalWrite(5, LOW);
//lane4  
digitalWrite(4, HIGH);//Red 4 on  
digitalWrite(3, LOW);  
digitalWrite(2, LOW);  
delay(3000);
//lane1
digitalWrite(13, HIGH);//Red 1 on
digitalWrite(12, LOW);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, LOW);
digitalWrite(9, HIGH);//yellow 2 on 
digitalWrite(8, LOW);
//lane3
digitalWrite(7, HIGH);//Red 3 on   
digitalWrite(6, LOW);  
digitalWrite(5, LOW);
//lane4  
digitalWrite(4, HIGH);//Red 4 on  
digitalWrite(3, LOW);  
digitalWrite(2, LOW);  
delay(5000);
//lane1
digitalWrite(13, HIGH);//Red 1 on
digitalWrite(12, LOW);
digitalWrite(11, LOW); 
//lane2 
digitalWrite(10, LOW);
digitalWrite(9, LOW);  
digitalWrite(8, HIGH);//Green 2 on 
//lane3
digitalWrite(7, HIGH);//Red 3 on   
digitalWrite(6, LOW);  
digitalWrite(5, LOW);
//lane4  
digitalWrite(4, HIGH);//Red 4 on  
digitalWrite(3, LOW);  
digitalWrite(2, LOW);  
delay(5000); 
// switching from lane 2 to lane 3
//lane1
digitalWrite(13, HIGH);//Red 1 on 
digitalWrite(12, LOW);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, LOW);
digitalWrite(9, LOW);  
digitalWrite(8, HIGH);//Green 2 on 
//lane3
digitalWrite(7, HIGH);// Red 3 on   
digitalWrite(6, LOW);  
digitalWrite(5, LOW);  
//lane4
digitalWrite(4, HIGH);
digitalWrite(3, LOW);//Yellow 4 on  
digitalWrite(2, LOW);  
delay(3000);
//lane1
digitalWrite(13, HIGH);//Red 1 on
digitalWrite(12, LOW);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, HIGH);//Red 2 on 
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, LOW);  
digitalWrite(6, HIGH);  
digitalWrite(5, LOW);//Green 3 on
//lane4  
digitalWrite(4, HIGH);  
digitalWrite(3, LOW);   
digitalWrite(2, LOW);//Green 4 on   
delay(5000);
//lane1
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, HIGH);
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, LOW);  
digitalWrite(6, LOW);  
digitalWrite(5, HIGH);
//lane4  
digitalWrite(4, HIGH);  
digitalWrite(3, LOW);  
digitalWrite(2, LOW);  
delay(5000);  
// switching from lane 3 to lane 4
//lane1
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, HIGH);
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, LOW);  
digitalWrite(6, LOW);  
digitalWrite(5, HIGH);  
//lane4
digitalWrite(4, HIGH);  
digitalWrite(3, LOW);  
digitalWrite(2, LOW);  
delay(3000);
//lane1
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, HIGH);
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, HIGH);  
digitalWrite(6, LOW);  
digitalWrite(5, LOW);
//lane4  
digitalWrite(4, LOW);  
digitalWrite(3, HIGH);  
digitalWrite(2, LOW);  
delay(5000);
//lane1
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, HIGH);
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, HIGH);  
digitalWrite(6, LOW);  
digitalWrite(5, LOW);
//lane4  
digitalWrite(4, LOW);  
digitalWrite(3, LOW);  
digitalWrite(2, HIGH);  
delay(5000); 
// switching from lane 4 to lane 1
//lane1
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, HIGH);
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, HIGH);  
digitalWrite(6, LOW);  
digitalWrite(5, LOW);  
//lane4
digitalWrite(4, LOW);  
digitalWrite(3, LOW);  
digitalWrite(2, HIGH);  
delay(3000);
//lane1
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
//lane2  
digitalWrite(10, HIGH);
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, HIGH);  
digitalWrite(6, LOW);  
digitalWrite(5, LOW);
//lane4  
digitalWrite(4, HIGH);  
digitalWrite(3, LOW);  
digitalWrite(2, LOW);  
delay(5000);
//lane1
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
//lane2  
digitalWrite(10, HIGH);
digitalWrite(9, LOW);  
digitalWrite(8, LOW);
//lane3
digitalWrite(7, HIGH);  
digitalWrite(6, LOW);  
digitalWrite(5, LOW);
//lane4  
digitalWrite(4, HIGH);  
digitalWrite(3, LOW);  
digitalWrite(2, LOW);  
delay(5000);
Serial.print(data);          
Serial.print("\n"); 
}
}
}