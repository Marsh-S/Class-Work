//File: MaximumCupcakes
//Date: 02/10/2018
//Description: Finds out what the maximum cupcakes can be gotten based on input values
//Author: Sean Marshall - seanmarshall1999@live.co.uk

#include <iostream>

int maximumCupcakes(int budget, int price, int freebieCost) {

	int cupcakesEnjoyed = 0, wrappers = 0;

	while (budget >= price || wrappers >= freebieCost) {

		if (wrappers >= freebieCost) {
			wrappers--;
			cupcakesEnjoyed++;
		}

		if (budget >= price) {
			wrappers++;
			cupcakesEnjoyed++;
			budget--;
		}
	}
	std::cout << cupcakesEnjoyed;
	return cupcakesEnjoyed;
}