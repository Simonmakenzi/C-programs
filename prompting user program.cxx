/*
Name:Simon Muthama Makenzi
Reg no:CT101/G/26522/25
Program:Prompting the user program to enter their height,Bank balance and phone number.
*/
// Simple c program
#include <stdio.h>
int main(){
	int Height;
printf("Please enter your Height:\n");
scanf("%d",& Height);
	
	int Bank_balance ;
printf("Please enter your Bank_balance:\n");
scanf("%d",& Bank_balance);
	
	int Phone_number;
printf("Please enter your Phone_number:\n");
scanf("%d",& Phone_number);
	
	printf("Your Height is %dCm\n",Height);
	
	printf("Your Bank_balance is Ksh%d\n",Bank_balance);
	
	printf("your Phone_number is %d",Phone_number);
	
	return 0;
}