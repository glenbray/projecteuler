/*
 * p2.cpp
 *
 *  Created on: Nov 12, 2012
 *      Author: Glen
 */


#include <iostream>
using namespace std;

int fib(int n)
{
	if(n <= 0)
		return 0;
	if(n == 1)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int num = 0;
	int i = 0;
	int sum = 0;

	while(num <= 4000000)
	{
		++i;
		num = fib(i);
		if((num % 2) == 0)
		{
			sum += num;
			cout << num << endl;
		}
	}
	cout << "Sum: " << sum;

	return 0;
}
