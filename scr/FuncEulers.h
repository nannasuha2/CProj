/*Refer ProjEulers.md*/
#pragma once
#include<iostream>

/*All declares*/
int pEuler_Mul(int);




/*All defines*/
int pEuler_Mul(int var)
{
	//Multiplies of 3 and 5
	int sum = 0;

	for (int x = 0; x < var; x++)
	{
		if(x % 3 == 0 || x % 5 == 0 ) //|| is OR, && is AND
		{
			sum += x;
		}
		
	}

	return sum;

}