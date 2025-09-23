/*
Name:Simon Muthama Makenzi
Reg number: CT101/G/26522/25
Description: Computing surface_area and volume of a cylinder
*/
#include <stdio.h>
#define pi 3.14159
int main(){
	//variable declaration
	float radius,height,volume,surface_area;
	
	//prompt the user to enter the radius
	printf("\nenter radius:");
	scanf("%f",& radius);
	
	//prompt the user to enter height
	printf("\nenter height:");
	scanf("%f",& height);
	
	//compute volume
	volume=pi*radius*radius*height;
	printf("\nvolume is %f",volume);
	
// compute surface_area
surface_area=2*pi*radius*radius+2*pi*radius*height;
printf("\nsurface_area is %f",surface_area);
	return 0;
}
 