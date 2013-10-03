/*
 * p5.cpp
 *
 *  Created on: Nov 15, 2012
 *      Author: Glen
 */


#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	bool exit = false;

	while(!exit)
	{
		bool bad = false;
		for(int j = 2; j <= 20; ++j)
		{
			int mod = num % j;
			if(mod != 0)
			{
				bad = true;
				break;
			}
		}
		if(!bad)
			break;

		num = num + 2;
	}
	cout << num;
	return 0;
}
