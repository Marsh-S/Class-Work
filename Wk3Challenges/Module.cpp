/*
Author: Sean Marshall - seanmarshall1999@live.co.uk
Description: Header declaration file for module class
Date: 15/10/2018
*/


#include "Module.h"

Module::Module(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark)
	:moduleTitle_{ moduleTitle }, moduleCode_{ moduleCode }, moduleCreditPoints_{ moduleCreditPoints }, moduleMark_{ moduleMark } {
}

void Module::setModuleTitle(std::string moduleTitle) {
	moduleTitle_ = moduleTitle;
}
std::string Module::getModuleTitle() const {
	return moduleTitle_;
}

void Module::setModuleCode(std::string moduleCode) {
	moduleCode_ = moduleCode;
}
std::string Module::getModuleCode() const {
	return moduleCode_;
}

void Module::setModuleCreditPoints(int moduleCreditPoints) {
	moduleCreditPoints_ = moduleCreditPoints;
}
int Module::getModuleCreditPoints() const {
	return moduleCreditPoints_;
}

void Module::moduleMark(int moduleMark) {
	moduleMark_ = moduleMark;
}
int Module::getModuleMark() const {
	return moduleMark_;
}