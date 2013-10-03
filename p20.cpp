/*
 * p20.cpp
 *
 *  Created on: Nov 15, 2012
 *      Author: Glen
 */

#include <iostream>
using namespace std;


int main()
{
	const int fact = 100;
	int array[200];
	array[199] = 1;
	int m = 1;
	int sum = 0;

	for(int i = 0; i <= 198; i++)
		array[i] = 1111;

	while(m != fact + 1)
	{
		int rem = 0;
		for(int i = 199; i >= 0; --i)
		{
			if(array[i] != 1111)
			{
				sum = array[i] * m + rem;
				rem = 0;
			}
			else
			{
				if(rem != 0)
				{
					sum = rem;
					rem = 0;
				}
				else
					sum = 1111;
			}

			if(sum > 9)
			{
				if(sum == 1111)
					break;
				array[i] = sum % 10;
				rem = sum / 10;
			}
			else
			{
				if(sum == 1111)
					break;
				array[i] = sum;
			}
		}
		++m;
	}

	int answer = 0;

	for(int i = 0; i <= 199; ++i)
	{
		if(array[i] == 1111)
			continue;
		else
			answer += array[i];
	}
	cout << "Answer: " << answer;

	return 0;
}


