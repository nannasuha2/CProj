#pragma once
#include<iostream>
#include<cstring>
#include<algorithm> //use max, min function

using namespace std;

int LC_longestSubStr(string str)
{
	int const n = str.length() + 1; //n+1 to avoid buffer too small/ to add buffer.
	//char input[n]; -->cannot simply do like this for dynamic array allocation
	char* input = NULL; //pointer to char, initialize to nothing.
	input = new char[n]; //Allocate n char save pointer in input.
	//delete [] input;--> can be used to delete pointer.


	//input[] is char array
	// copying the contents of the string to char array 
	strcpy_s(input, n, str.c_str());//cannot use strcpy. for more security use strcpy_s

	//checking next element not equal to previous elements
	int i, k;	
	int maxsublen;
	i = 0;
	k = 0;
	int sublen = 1;
	maxsublen = 0;


	//while (i < n)
	//{
	//	char temp[20];
	//	temp[k] = input[i];

	//	for (int m = k; m < sublen; m++)
	//	{
	//		if (temp[m] == input[i + 1])
	//		{
	//			//i = i +1;
	//			k = 0;
	//			if (maxsublen < sublen)
	//			{
	//				maxsublen = sublen;
	//			}
	//			sublen = 1;

	//		}
	//		else
	//		{
	//			k++;
	//			//i++;
	//			sublen = sublen + 1;
	//		}
	//	}

	//	i++;

	//}

	return maxsublen;
}

int lengthOfLongestStr(string str)
{
	int n = str.length(), ans = 0;
	int* input = new int[128]; //current index of character

	//extend range [i,j]
	for (int j = 0, i = 0; j < n; j++)
	{
		i = max(input[str.At(j)], i);//compare
		ans = max(ans, j - i + 1);
		index[str.strAt(j)] = j + 1;
	}

	return ans;
}