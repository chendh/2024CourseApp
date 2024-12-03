#pragma once
#include <string>
using namespace std;

class Course
{
private:
	string courseId;
	string courseName;
	string courseDescription;

public:
	Course(const string& courseId, const string& courseName, const string& courseDescription);
	Course();

	// getter
	string getCourseId() const;
	string getCourseName() const;
	string getCourseDescription() const;

	// setter
	void setCourseId(const string& courseId);
	void setCourseName(const string& courseName);
	void setCourseDescription(const string& courseDescription);
	void display() const;
};

