/*
 * p3.cpp
 *
 *  Created on: Nov 12, 2012
 *      Author: Glen
 */


#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

template <class T>
bool isPrime(const T& n)
{
	if(n == 2)
		return true;
	if(n <= 1 || n % 2 == 0)
		return false;

	T root = sqrt(n);

	for(T i = 3; i < root; i += 2)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	const long long prime = 600851475143ULL;
	const long long sqrtPrime = sqrt(prime);

	for (long long i = sqrtPrime; i >= 1; --i)
	{
		if(prime % i == 0)
		{
			if(isPrime(i))
			{
				cout << "Largest prime factor: " << i << endl;
				break;
			}
		}
	}

	return 0;
}
