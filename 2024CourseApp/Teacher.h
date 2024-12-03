#pragma once
#include "Person.h"
#include "Utility.h"
#include "Course.h"
#include <string>
#include <vector>
using namespace std;

class Teacher : public Person
{
private:
	string teacherId; // 教師編號
	Department department; // 教師所屬系所
	ClassName className; // 教師所授班級
	vector<Course> courses; // 教師所授課程

public:
	Teacher(const string& id, const string& lastName, const string& firstName, const string& gender, const string birthDate, const string& teacherId, Department department, ClassName, const vector<Course>& courses);

};
