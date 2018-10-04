//File: CamelCase
//Date: 02/10/2018
//Description: Counts the number of words in a camelCase string by counting the upper case letters 
//Author: Sean Marshall - seanmarshall1999@live.co.uk

#include <iostream>
#include <string>


int camelCase() {

	std::string camelCaseWord = "saveChangesInTheEditor";
	int wordCount = 1;

	for (int i = 0; i < camelCaseWord.length(); i++) {

		if (camelCaseWord[i] < 91) {
			wordCount++;
		}
	}
	std::cout << wordCount << std::endl;

	system("pause");
	return 0;
}
