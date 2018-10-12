/*
Author: Sean Marshall - seanmarshall1999@live.co.uk
Description: Class definition header file for student class
Date: 09/10/2018
*/

#include "Student.h"

//Default Constructor 

Student::Student() {}
// NonDefault constutors

Student::Student(std::string name, std::string registrationID, std::string courseName, int yearOfStudy, int moduleOneMark, int moduleTwoMark, int moduleThreeMark)
	:name_{ name }, registrationID_{ registrationID }, courseName_{ courseName }, yearOfStudy_{ yearOfStudy }, moduleOneMark_{ moduleOneMark }, moduleTwoMark_{ moduleTwoMark }, moduleThreeMark_{ moduleThreeMark } {
	std::cout << name_ << " is on course " << courseName_ << " Year " << yearOfStudy_ << std::endl;
	std::cout << name_ << " has the module scores of " << moduleOneMark_ << " " << moduleTwoMark_ << " " << moduleThreeMark_ << std::endl;
}

std::string Student::CalculateClassification(int mark1, int mark2, int mark3) {
	int result = (mark1 + mark2 + mark3) / 3;

	if (result >= 0 && result <= 40)
		return "Fail";
	else if (result <= 49)
		return "3rd Class";
	else if (result <= 59)
		return "2nd Class";
	else if (result <= 69)
		return "2-1";
	else if (result >= 70)
		return "1st Class";
}

void Student::setName(std::string name) {
	name_ = name;
}
std::string Student::getName() const {
	return name_;
}

void Student::setRegID(std::string registrationID) {
	registrationID_ = registrationID;
}
std::string Student::getRegID() const {
	return name_;
}

void Student::SetYearOfStudy(int yearOfStudy) {
	if (yearOfStudy > 0 && yearOfStudy < 6)
		yearOfStudy_ = yearOfStudy;
	else
		std::cout << "Year of study not valid for " << name_ << std::endl;
}
int Student::getYearOfStudy() const {
	return yearOfStudy_;
}

void Student::courseName(std::string courseName) {
	courseName_ = courseName;
}
std::string Student::getCourseName() const {
	return courseName_;
}

void Student::setCourseCode(int courseCode) {
	courseCode_ = courseCode;
}
int Student::setCourseCode() const {
	return courseCode_;
}

void Student::setModuleTitle(std::string moduleTitle) {
	moduleTitle_ = moduleTitle;
}
std::string Student::getModuleTitle() const {
	return moduleTitle_;
}

void Student::setModuleCode(int moduleCode) {
	moduleCode_ = moduleCode;
}
int Student::getModuleCode() const {
	return moduleCode_;
}

void Student::setCreditPoints(int creditPoints) {
	creditPoints_ = creditPoints;
}
int Student::getCreditPoints() const {
	return creditPoints_;
}

void Student::setCourseDescription(std::string courseDescription) {
	courseDescription_ = courseDescription;
}
std::string Student::getCourseDescription() const {
	return courseDescription_;
}

void Student::setLecturer(std::string lecturer) {
	lecturer_ = lecturer;
}
std::string Student::getLecturer() const {
	return lecturer_;
}

void Student::setModuleOneMark(int moduleOneMark) {
	if (moduleOneMark > -1 && moduleOneMark < 101)
		moduleOneMark_ = moduleOneMark;
	else
		std::cout << "Module one mark value not valid for " << name_ << std::endl;
}
int Student::moduleOneMark() const {
	return moduleOneMark_;
}

void Student::setModuleTwoMark(int moduleTwoMark) {
	if (moduleTwoMark > -1 && moduleTwoMark < 101)
		moduleTwoMark_ = moduleTwoMark;
	else
		std::cout << "Module two mark value not valid for " << name_ << std::endl;
}
int Student::moduleTwoMark() const {
	return moduleTwoMark_;
}

void Student::setModuleThreeMark(int moduleThreeMark) {
	if (moduleThreeMark > -1 && moduleThreeMark < 101)
		moduleThreeMark_ = moduleThreeMark;
	else
		std::cout << "Module one mark value not valid for " << name_ << std::endl;
}
int Student::moduleThreeMark() const {
	return moduleThreeMark_;
}