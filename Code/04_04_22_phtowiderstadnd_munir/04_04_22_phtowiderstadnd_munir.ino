int ROTled= 8;
int GREENled= 10;
int lux;
int Summer= 9;


void setup()
{
Serial.begin(9600);
pinMode(ROTled,OUTPUT);
pinMode(GREENled,OUTPUT);
pinMode(Summer,OUTPUT);
}

void loop()
{
lux=analogRead(0);
Serial.println(lux);
if(lux <600)
{
digitalWrite(ROTled,HIGH);
tone(Summer,100);
delay(200);
noTone(Summer);
delay(200);
digitalWrite(GREENled,LOW);

}
else
{
digitalWrite(ROTled,LOW);
digitalWrite(GREENled,HIGH);
}
} 
