solution to multiply replace question 

https://leetcode.com/problems/product-of-array-except-self/submissions/


#include <iostream>
#include <vector>
using namespace std;

//i was able to solve this problem using bruteforce, but also keeping the time complexity limited to 0
//however there were some cheeky test cases that were just not passing
//and then i found this actual solution which outsmarts the enitire question 

vector <int> productExcpetSelf(vector<int>&nums)
{
	int n = nums.size();
	vector<int>result(n,1);
	
	int leftSide = 1;
	int rightSide = 1;
	
	for(int i =0;i<n;i++)
	{
		result[i] *= left;
		left *= nums[i];
	}
	
	for(int i=n-1;i>=0;i--)
	{
		result[i] *= right;
		right *= nums[i];
	}
	
	return result;

}

