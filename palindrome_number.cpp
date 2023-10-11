#include <iostream>
using namespace std;

//this conspet uses a very easy yet intresting algorithm to find out the answer
//if you look carfeully youll realize that this is a method to separate out numbers from an 
//int and not use the array DT to reverse and compare, saves alot ou our time.

bool isPalindrome(int x)

{
	if(x<0)
	{
		return false;
	}
	int number = x;
	long reverse = 0;
	
	while(number!=0)
	{
		reverse = reverse*10 + number%10;
		number/=10;
	}
	if(reverse == x)
	{
		return true;
	}
	return false;
}


int main()
{
	
}



