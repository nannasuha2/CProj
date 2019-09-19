#pragma once
#include<iostream>
#include<cstring>
#include<algorithm> //use max, min function
#include<cmath>
#include<vector>

using namespace std;



//longest substring
bool NotDuplicateChar(string str, int target, int next)
{
	bool notdup = true;
	for (int k = target; k >= 0; k--)
	{
		if (str.at(k) == str.at(next))
		{
			notdup = false;
			continue;
		}
	}
	
	return notdup;
}

int LC_longestSubStr(string str)
{
	int ans, len; 
	ans = 0;
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

void selectionSort(vector<int>a) 
{

	int n = a.size();
	int i, j, min, temp;
	//initially set min to the first unsorted element
	//lets the initial min stop iterate at n-1
	for (i = 0; i < n - 1; i++) {
		min = i;
		//select/find the min by comparing to next other unsorted elements
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j; //keep the min value along the iteration
			}
		}
		//swapping with min value from unsorted
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;		
	}
}

//Meanfunction
double mean(vector<int>a)
{
	int n = a.size();
	double m;
	m = 0;

	for (int i = 0; i < n; i++)
	{
		m += a[i];
	}

	return m / n;
}

//Median of two sorted array
double LC_MedianTwoSortedArray(vector<int>nums1, vector<int>nums2)
{
	vector<int>a;
	double ans = 0;

	//check both array is not empty
	if (nums1.empty() == false && nums2.empty() == false)
	{
		//put two array elements into one array. 
		for (int i = 0; i < nums1.size(); i++)
		{
			a.push_back(nums1[i]);
		}

		for (int i = 0; i < nums2.size(); i++)
		{
			a.push_back(nums2[i]);
		}

		//assure array element in ascending order
		//sort all the elements in the array (calling a function)
		selectionSort(a);
		//calculate & return mean value (calling a function)
		return ans = mean(a);
	}
	
}