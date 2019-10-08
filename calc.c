#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[] ) {

double input1;
double input2;
char operation;

operation=(argv[1][0]);
input1=atof(argv[2]);
input2=atof(argv[3]);

char plus='+';
char subtract='-';
char multiply='x';
char divide='/';
double answer=0;

if(operation==plus)
	answer=(input1+input2);

else if (operation==subtract)
	answer=(input1-input2);

else if (operation==multiply)
	answer=(input1*input2);

else if (operation==divide)
	answer=(input1/input2);

else printf("Fix your syntax.\n");

printf("%f\n",answer);

}
