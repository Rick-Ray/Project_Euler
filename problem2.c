/*
 ** Program for problem 2
 ** By: Saptarshi Rick Ray Chaudhuri
 ** Link to problem: https://projecteuler.net/problem=2
 **/

#include <stdio.h>

int main()
{

	int a = 1; // first number in series
	int b = 2; // second number in series
	int c = a+b; // used to generate the next number in series
	int sum = 0; // total sum
	//int i;

	while(b<4000000) //loop to generate numbers in series up to 4000000
	{
		if( b%2==0) sum = sum +b; //sums up the even numbers
		
		a = b;
		b = c;
		c = a+b;
	}
	
	printf("The sum is: %d\n" , sum);
	return 0;
} // end of main
