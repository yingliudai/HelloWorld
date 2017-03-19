#include <stdio.h>
#include <wiringPi.h>

int main()

{
	wiringPiSetup();
	pinMode(8,OUTPUT);
	digitalWrite(8,LOW);
    softPwmCreate(9,0,100);
	softPwmCreate(7,0,100);
	softPwmCreate(0,0,100);
	
	
	
	while(1)
	{
		softPwmCreate(9,255);
	    softPwmCreate(7,255);
	    softPwmCreate(0,255);
		delay(1000);
		softPwmCreate(9,0,100);
	    softPwmCreate(7,0,100);
	    softPwmCreate(0,0,100);
		delay(1000);
	}
 return 0;	
}
