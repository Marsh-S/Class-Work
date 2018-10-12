/*
Author: Sean Marshall
Date: 09/10/2018
Desc: Learning objects and classes 
*/

#include <iostream>
#include <string>
#include "Person.h"

int main() {

	Person Jim;
	//Jim.name_ = "Jim harkin";
	//Jim.age_ = 40;

	Jim.SetName("Jim harkin");
	Jim.SetAge(40);

	std::string name = Jim.GetName();
	int age = Jim.GetAge();

	Jim.PrintName();
	
	return 0;
}