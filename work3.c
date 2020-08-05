
#include <stdio.h>

int main()
{ 
int sec_in_Week = 604800, sec_in_day = 86400, sec_in_hour = 3600, sec_in_minut = 60, sec_in_sec = 100;
long long week, day,  hour, minut, second;
week = day =  hour = minut = second = 0;

unsigned long long type_sec;
printf("second: ");
scanf("%lld",&type_sec);// = 87215
week = type_sec/sec_in_Week;                
day = (type_sec%sec_in_Week)/sec_in_day;		
hour = type_sec%sec_in_Week%sec_in_day/sec_in_hour; 
minut = type_sec % sec_in_Week % sec_in_day % sec_in_hour/sec_in_minut;
second = type_sec % sec_in_Week % sec_in_day % sec_in_hour % sec_in_minut % sec_in_sec;
		
printf("%lld week. %lld day. %lld hour. %lld minut. %lld second\n",week,day,hour,minut,second);
		

	

	return 0;
}
