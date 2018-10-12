/*
Author: Sean Marshall
Date: 09/10/2018
Desc: Class delcarition header file for the Person class
*/

#pragma once

#include <iostream>
#include <string>

class Person {
	private:
		std::string name_;
		int age_;

	public:
		void Person::SetName(std::string name);
		std::string GetName() const;

		void Person::SetAge(int age);
		int GetAge() const;

		void PrintName() const;


}; 

