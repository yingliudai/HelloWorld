#include <stdio.h>
#include <wiringPi.h>

int main()

{
	wiringPiSetup();
	pinMode(8,OUTPUT);
	pinMode(9,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(0,OUTPUT);
	
	
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
	digitalWrite(0,HIGH);
	
	digitalWrite(9,LOW);
	
	int time = 100;
	int i;
	
	
	while(1)
	{
		for(i=0;i<3;i++)
		time -= 10;
		digitalWrite(8,HIGH);
		delay(time);
		digitalWrite(8,LOW);
		delay(100-time);
		if (time <= 0)
		    time = 100;
		    
			}
 return 0;	
}
