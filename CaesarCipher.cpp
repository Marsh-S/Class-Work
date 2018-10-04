//File: CaesarCipher
//Date: 02/10/2018
//Description: takes a string and uses a cipher on it that consists of adding an integer to each char in the string
//Author: Sean Marshall - seanmarshall1999@live.co.uk

#include <iostream>
#include <string>

int main() {

	int ciperNum = 2;
	std::string cipherWord = "middle-Outz";

	for (int i = 0; i < cipherWord.length(); i++) {

		if (cipherWord[i] > 65 && cipherWord[i] < 90 || cipherWord[i] > 90 && cipherWord[i] < 122) {
			cipherWord[i] += ciperNum;
		}
	}
	std::cout << cipherWord << std::endl;
	system("pause");
}
