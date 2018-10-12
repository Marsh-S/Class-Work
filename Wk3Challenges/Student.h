/*
Author: Sean Marshall - seanmarshall1999@live.co.uk
Description: Header declaration file for Student class
Date: 09/10/2018
*/

#pragma once
#include <iostream>
#include <string>

class Student {

	private:
		std::string name_;
		std::string registrationID_;
		int yearOfStudy_;
		std::string courseName_;
		int courseCode_;
		std::string moduleTitle_;
		int moduleCode_;
		int creditPoints_;
		std::string courseDescription_;
		std::string lecturer_;
		int moduleOneMark_;
		int moduleTwoMark_;
		int moduleThreeMark_;

	public:
		Student();

		Student(std::string name, std::string registrationID, std::string courseName, int yearOfStudy, int moduleOneMark, int moduleTwoMark, int moudleThreeMark);
		std::string CalculateClassification(int mark1, int mark2, int mark3);


		void setName(std::string name);
		std::string getName() const;

		void setRegID(std::string registrationID);
		std::string getRegID() const;

		void SetYearOfStudy(int yearOfStudy);
		int getYearOfStudy() const;

		void courseName(std::string courseName);
		std::string getCourseName() const;

		void setCourseCode(int courseCode);
		int setCourseCode() const;

		void setModuleTitle(std::string moduleTitle);
		std::string getModuleTitle() const;

		void setModuleCode(int moduleCode);
		int getModuleCode() const;

		void setCreditPoints(int creditPoints);
		int getCreditPoints() const;

		void setCourseDescription(std::string courseDescription);
		std::string getCourseDescription() const;

		void setLecturer(std::string lecturer);
		std::string getLecturer() const;

		void setModuleOneMark(int moduleOneMark);
		int moduleOneMark() const;

		void setModuleTwoMark(int moduleTwoMark);
		int moduleTwoMark() const;

		void setModuleThreeMark(int moduleThreeMark);
		int moduleThreeMark() const;

};