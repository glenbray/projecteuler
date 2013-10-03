/*
 * p1.cpp
 *
 *  Created on: Nov 12, 2012
 *      Author: Glen
 */


#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	for(int i = 1; i < 1000; i++)
	{
		if((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
			cout << i << " ";
		}
	}
	cout << "\n" << sum;
	return 0;
}


