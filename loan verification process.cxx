/*
Name: Simon Muthama Makenzi
Reg number: CT101/G/26522/25
program: Loan verification process
*/

#include <stdio.h>
int main(){
	//prompt the user to enter age
	int age;
	printf("\n please enter your age:");
	scanf("%d",&age);
	
	//prompt the user to enter their income
	float income;
	printf("\n please enter your income:");
	scanf("%f",&income);
	//Desicion
	if (age >= 21 && income >=21000){
	
    printf("Congratulations!, you qualify for a loan.");
}else
    printf("Unfortunately, we are unable to offer you a loan at this time.");
	return 0;
}