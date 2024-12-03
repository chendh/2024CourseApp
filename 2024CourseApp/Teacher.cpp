#include "Teacher.h"

Teacher::Teacher(const string& id, const string& lastName, const string& firstName, const string& gender, const string birthDate, const string& teacherId, Department department, ClassName, const vector<Course>& courses) : Person(id, lastName, firstName, gender, birthDate), teacherId(teacherId), department(department), className(className), courses(courses)
{
}
