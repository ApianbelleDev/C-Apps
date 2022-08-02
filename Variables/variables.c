#include <stdio.h>

int main(){

	int variableInt;
	char variableChar;
	double variableDouble;

	//initialize the 3 variables
	variableInt = 5;
	variableChar = 'C';
	variableDouble = 20.040123;

	//output the three variables
	printf("display an int here: %i\n", variableInt);
	printf("display a character here: %c\n", variableChar);
	printf("display a double with 2 decimal points here: %.2f\n", variableDouble);

}