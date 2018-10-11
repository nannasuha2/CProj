/*Refer ProjEulers.md*/
#pragma once
#include<iostream>

/*All declares*/
int pEuler_Mul(int);
int pEuler_Fib(int);
long long int pEuler_Fac(long long int);


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

int pEuler_Fib(int var)
{
	int sum = 2;
	int a = 1, b = 2, c;

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

long long int pEuler_Fac(long long int var)
{
	long long int a, b;
	long long int maxFac;

	a = 2;
	do {

		if (var % a == 0)
		{
			b = var / a;
			var = b;
		}
		else
		{
			a++;
		}
		
	} while (a < var);

	maxFac = var;

	return maxFac;
}