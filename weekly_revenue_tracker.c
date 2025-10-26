/*
Name:Simon Muthama Makenzi
Reg no:CT101/G/26522/25
Description:A 1 d array c program for the weekly revenue
*/
#include <stdio.h>

int main(){
	float revenue[7];
	float total=0.0,average;
	int i;
	//prompt user to enter the revenue for the week 
	printf("Enter the revenue for each day of the week:\n");
	for(i=0;i<7;i++){
		printf("Day %d:",i+1);
		
		scanf("%f",&revenue[i]);
		total+=revenue[i];
	}
	average=total/7;
	
	printf("Total weekly revenue:%.2f\n",total);
	printf("\nAverage  daily revenue:%.2f\n",average);
	return 0;
}