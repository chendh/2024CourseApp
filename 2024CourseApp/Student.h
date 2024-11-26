#pragma once
#include "Person.h"
#include "Utility.h"

class Student : public Person
{
private:
	string studentId;
	Department department;
	ClassName className;
};

