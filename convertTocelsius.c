/*
Name:Simon Muthama Makenzi
Reg no:CT101/G/26522/25
Description: A c program to change Temperature in fehrenhait to celcius
*/
#include <stdio.h>
int main(){
	int celsius;
	int temperature;
	
	// prompt the user to enter the temperature
	printf ("Enter temperature in Fahrenheit\n");
	scanf("%d",&temperature);
	
	celsius=(temperature-32)*5/9;
	
	printf("Your Temperature in celsius is\n %d", celsius);
	return 0;
}