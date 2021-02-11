//Problem A

#include <stdio.h>

int main(){
	
int sec, yrs, mons, days, hrs, mins, secs, rem;
int min = 60;
int hr = 60 * min;
int day = 24 * hr;
int mon = 30 * day;
int yr = 12 * mon;

printf("Enter a number representing seconds (time): ");
scanf("%i", &sec);
yrs = sec / yr;
rem = sec % yr;
mons = rem / mon;
rem = sec % mon;
days = rem / day;
rem = rem % day;
hrs = rem / hr;
rem = rem % hr;
mins = rem / min;
secs = rem % min;
printf("%i second/s is %i year/s, %i month/s, %i day/s, %i hour/s, %i minute/s, and %i second/s.", sec, yrs, mons, days, hrs, mins, secs);

return 0;
}