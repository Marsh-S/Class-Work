/*
Author: Sean Marshall - seanmarshall1999@live.co.uk
Description: Creating object orientated classes based on school 
Date: 09/10/2018
*/

#include <iostream>
#include <string>
#include "Student.h"

int main() {

	Student Jerry{ "Jerry Wilkinson", "B00528256", "ComSci", 3, 76, 46, 79 };
	std::string Grade = Jerry.CalculateClassification(Jerry.moduleOneMark(), Jerry.moduleTwoMark(), Jerry.moduleThreeMark());
	std::cout << Jerry.getName() << " Grade is " << Grade << std::endl;
	return 0;
}

