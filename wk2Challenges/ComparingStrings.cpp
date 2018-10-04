//File: ComparingStrings
//Date: 02/10/2018
//Description: Ensures two strings are in lower case and checks if they are the same 
//Author: Sean Marshall - seanmarshall1999@live.co.uk

#include <iostream>
#include <string>

std::string toLowerCase(std::string);


int comparingStrings(std::string s1, std::string s2) {

	s1 = toLowerCase(s1);
	s2 = toLowerCase(s2);

	if (s1 == s2) {
		std::cout << "pleases Chuck Norris!" << std::endl;
	}
	else {
		std::cout << "I pity the fool" << std::endl;
	}
	system("pause");
	return 0;
}


std::string toLowerCase(std::string s1) {

	for (int i = 0; i < s1.length(); i++) {

		if (s1[i] < 91) {
			s1[i] += 32;
		}
	}

	return s1;
}

