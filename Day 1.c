//Write a program to input two numbers and display their sum.
#include <stdio.h>
int main() {
	int num1, num2, sum;
	printf("Name - SUDHANSHU SHEKHAR \nSAP ID - 590021525 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------\n");
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("The sum of %d and %d is %d\n", num1, num2, sum);
	return 0;
}
