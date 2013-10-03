/*
 * p4.cpp
 *
 *  Created on: Nov 15, 2012
 *      Author: Glen
 */
#include <iostream>
using namespace std;

int reverseInt(const int& n) {
	int i = n;
	int sum = 0;

	while(i != 0)
	{
		int temp = i % 10;
		i = i / 10;
		sum = sum * 10 + temp;
	}
	return sum;
}

bool isPalindrome(const int& n) {

	int reverse = reverseInt(n);

	if(n == reverse)
		return true;
	return false;
}

bool evenLength(const int& n) {

	int i = n;
	int count = 0;
	while(i != 0)
	{
		i = i / 10;
		++count;
	}

	if(count % 2 == 0)
		return true;
	return false;
}

int main()
{
	int num = 0;
	bool palindrome = false;

	int a = 0;
	int b = 0;

	int largest = 0;

	for(int i = 999; i >= 1; --i)
	{
		for(int j = 999; j >= 1; --j)
		{
			num = i * j;
			if(evenLength(num) && isPalindrome(num))
			{
				palindrome = true;
				a = i;
				b = j;

				if(num > largest)
					largest = num;
			}
		}
	}

	cout << largest;
	return 0;
}
