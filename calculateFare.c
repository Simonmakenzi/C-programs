/*
Name:Simon Muthama Makenzi
Reg No:CT101/G/26522/25
Description:A c program to calculae the fare for a travelled distance
*/
#include<stdio.h>
int main(){
	int distance;
	float fare;
	
	//prompt user to enter the distance travelled
	printf("Enter the distance travelled in kilometres:\n");
	 scanf("%d",& distance);
	 
	 //calculate the fare according to the distance travelled
	 fare=50*distance;
	 printf("Your fare payable is:\n %.2fKsh",fare);
return 0;	 
}
