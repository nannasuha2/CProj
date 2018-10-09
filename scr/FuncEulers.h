/*Refer ProjEulers.md*/
#pragma once
#include<iostream>

/*All declares*/
int pEuler_Mul(int);
long long int pEuler_Fib(long long int);




/*All defines*/
int pEuler_Mul(int var)
{
	//Multiplies of 3 and 5
	int sum = 0;

	for(int x = 0; x < var; x++)
	{
		if(x % 3 == 0 || x % 5 == 0 ) //|| is OR, && is AND
		{
			sum += x;
		}
		
	}

	return sum;

}

long long int pEuler_Fib(long long int var)
{
	long int sum = 2;
	long long int a = 1, b = 2, c;

	c = 0;
	while(c < var)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
		a = b;
		b = c;
	} 
	
	return sum;
}