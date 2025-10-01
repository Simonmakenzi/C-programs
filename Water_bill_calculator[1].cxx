/*
Name:Simon Muthama Makenzi
Reg no:CT101/G/26522/25
Description:Water bill calculator
*/
#include <stdio.h>
int main(){
	int units;
	float bill;
	//prompt customer to enter units consumed
	printf("Enter water units consumed:\n");
	scanf("%d",& units);
	
	//decision
	if(units <=30){
		bill= units*20;
	}else if (units <=60){
		bill= units*25;
	}else{
		bill=units*30;
	}
	
	//output the water bill
	printf("\nTotal water bill is:\n%.2f KES",bill);
	return 0;
}