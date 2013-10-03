/*
 * p7.cpp
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

	int i = 0;
	int j = 0;
	int prime = 0;
	while(j != 10001)
	{
		if(isPrime(i))
		{
			prime = i;
			cout << prime << endl;
			++j;
		}
		++i;
	}


	return 0;
}
