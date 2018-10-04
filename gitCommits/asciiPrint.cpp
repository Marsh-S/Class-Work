//File: AsciiPrint
//Date: 02/10/2018
//Description: Prints out the alphabet and each letters corresponding ascii code
//Author: Sean Marshall - seanmarshall1999@live.co.uk

#include <iostream>
#include <string>

int asciiPrint() {

	int lowercaseCalc = 97;
	for (int i = 65; i <= 90; i++) {

		std::cout << char(i) << "/t" << i << "/t";
		std::cout << char(i) << "/t" << (i + 32) << std::endl;
	}
	return 0;
}