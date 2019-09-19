/*Refer ProjEulers.md*/
#pragma once
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

/*All declares*/
int pEuler_Mul(int);
int pEuler_Fib(int);
long long int pEuler_Fac(long long int);
int pEuler_Pal(int);
unsigned long long int pEuler_5(int);
int pEuler_SumSq(int);


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

int pEuler_Pal(int dig)
{
	int a, b, n, num, rev, temp, maxPal = 0;

	a = 9;
	b = 1;

	for (int x = 1; x < dig; x++)
	{
		a = a * 10;
		b = b * 10;
	}

	b = b * 10;

	for (int i = a; i < b; i++)
	{
		for (int j = a; j < b; j++)
		{
			n = i * j;
			num = n;
			rev = 0;
			do {

				temp = num % 10;
				rev = (rev * 10) + temp;
				num = num / 10;

			} while (num != 0);

			if (rev == n)
			{
				if (n > maxPal)
				{
					maxPal = n;
				}
				
			}
		
		}
	}

	return maxPal;

}

unsigned long long int pEuler_5(int var)
{
	int f;
	unsigned long long int min, n;
	bool flag = true;
	
	n = 12200000;

	do {
		f = 0;
		for (int x = 1; x <= var; x++)
		{
			if (n % x == 0)
			{
				f++;
			}

			if (f == var)
			{
				flag = false;
				min = n;
			}
		}
		
		n++;
	} while (flag);
	
	return min;
}

int pEuler_SumSq(int var)
{
	int sum = 0, sumSq = 0, Dif;

	for (int x = 1; x <= var; x++)
	{
		sum += pow(x, 2);
		sumSq += x;
	}
	Dif = pow(sumSq, 2) - sum;
	return Dif;
}

