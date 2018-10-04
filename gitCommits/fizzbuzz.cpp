//File: FizzBuzz
//Date: 02/10/2018
//Description: Asks the user for a integer input and then returns if it is equal to 3 with "fizz", 5 with "buzz" or both
//Author: Sean Marshall - seanmarshall1999@live.co.uk

#include <iostream>
#include <string>

void fizzbuzz() {
	int i;
	std::cout << "Enter a num";
	std::cin >> i;
	if (i % 3 == 0) {
		std::cout << "fizz";
	}
	if (i % 5 == 0) {
		std::cout << "buzz";
	}
	else if (i % 5 != 0)
	{
		std::cout << i;
	}
	std::cout << std::endl;
}