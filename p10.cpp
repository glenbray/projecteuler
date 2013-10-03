/*
 * p10.cpp
 *
 *  Created on: Nov 14, 2012
 *      Author: Glen
 */


#include <iostream>
#include <cmath>

using namespace std;

template<class T>
bool isPrime(const T& n)
{
	if(n == 2)
		return true;
	if(n <= 1 || n % 2 == 0)
		return false;

	for(T i = 3; i < n; i += 2)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	unsigned long long sum = 0;

	for(int i = 1; i < 2000000; ++i)
	{
		if(isPrime(i))
		{
			sum += i;
		}
	}
	cout << sum;


	return 0;
}
