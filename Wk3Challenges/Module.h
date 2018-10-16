/*
Author: Sean Marshall - seanmarshall1999@live.co.uk
Description: Header declaration file for module class
Date: 15/10/2018
*/
#pragma once

#include <iostream>
#include <string>
class Module{
private:
	std::string moduleTitle_;
	std::string moduleCode_;
	int moduleCreditPoints_;
	int moduleMark_;

public:
	Module();
	Module(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);
	void setModuleTitle(std::string moduleTitle);
	std::string getModuleTitle() const;

	void setModuleCode(std::string moduleCode);
	std::string getModuleCode() const;

	void setModuleCreditPoints(int moduleCreditPoints);
	int getModuleCreditPoints() const;

	void moduleMark(int moduleMark);
	int getModuleMark() const;
};