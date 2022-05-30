#include<reg51.h>
sbit sensor1=P1^0;
sbit sensor2=P1^1;
sbit sensor3=P1^2;
sbit sensor4=P1^3;
sbit sensor5=P1^4;
sbit load1=P2^0;
sbit load2=P2^1;
sbit load3=P2^2;
sbit load4=P2^3;
sbit load5=P2^4;
void main()
{
	load1=load2=load3=load4=load5=0;
	sensor1=sensor2=sensor3=sensor4=sensor5=0;
	while(1)
	{
		if(sensor1==1)
		load1=1;
		else 
			load1=0;
		if(sensor2==1)
		load2=1;
		else 
			load2=0;
		if(sensor3==1)
		load3=1;
		else
			load3=0;
		if(sensor4==1)
		load4=1;
		else 
			load4=0;
		if(sensor5==1)
		load5=1;
		else
			load5=0;
	}
}