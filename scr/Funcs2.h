#pragma once
#include<iostream>
#include<cstring>
#include<algorithm> //use max, min function

using namespace std;

bool NotDuplicateChar(string str, int target, int next)
{
	bool notdup = true;
	for (int i = target; i > 0; i--)
	{
		if (str.at(i) == str.at(next))
		{
			notdup = false;
			continue;
		}
	}
	
	return notdup;
}

int LC_longestSubStr(string str)
{
	int ans = 0;
	//extend [i, j] since no need loop int i
	int i, j, len;
	i = 0;
	len = 1;
	
	for (int i = 0,j =i + 1; j< str.length(); i++, j++)
	{
		if (NotDuplicateChar(str, i, j))
		{
			len = len + 1; //same as len++
		}
		else
		{
			len = 1;
		}

		ans = max(ans, len);
	}

	return ans;
}

