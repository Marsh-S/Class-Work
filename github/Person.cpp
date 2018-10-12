/*
Author: Sean Marshall
Date: 09/10/2018
Desc: Class defintion header file for the Person class
*/

#include "Person.h"

void Person::PrintName() const {
	std::cout << name_ << std::endl;
}

void Person::SetName(std::string name) {
	name_ = name;
}

std::string Person::GetName() const {
	return name_;
}

void Person::SetAge(int age) {
	age_ = age;
}

int Person::GetAge() const {
	return age_;
}