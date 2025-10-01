/*
Name:Simon muthama Makenzi
Reg no: CT101/G/26522/25
Description:A program to check if a student is eligible for taking final exams
*/
#include <stdio.h>
int main(){
	float Attendance, Average_marks;
	
	//prompt the user to enter Attendance percentage
	printf("Enter Attendance percentage:\n");
	scanf("%f",&Attendance);
	
	//prompt user to enter Average_marks
	printf("Enter Average_marks:\n");
	scanf("%f",& Average_marks);
	
	//Decision
	if (Attendance >=75 && Average_marks >=40){
	printf("Eligible for final exams.");
	}else
	printf("Not eligible for final exams.");
	return 0;
}
	