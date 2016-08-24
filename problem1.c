/*
 * Program for problem 1
 * By: Saptarshi Rick Ray Chaudhuri
 * Link to problem: https://projecteuler.net/problem=1
 */
#include <stdio.h>

int main()
{
	int store[1000]; 
	int sum = 0; // stores total sum
	int length = 0; //length of the array with numbers
	int i; // i for loops

	for(i = 1; i<1000; i++) // loop to find multiples of 3 and 5
	{
		if(i%5==0) // multiples of 5
		{
			store[length] = i;
			length++;
			continue;// prevent double counting
		}

		if(i%3==0) // multiples of 3
		{
			store[length] = i;
			length++;
		}
	} // end of loop


	for(i = 0; i<length ; i++) // sum for loop
			sum = sum + store[i]; 

	printf("The total sum is: %d\n", sum );

	return 0;

} // end of main
