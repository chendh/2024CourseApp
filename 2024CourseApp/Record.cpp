#include "Record.h"
#include <iostream>
#include <iomanip>
using namespace std;

int Record::nextId = 1;
Record::Record(const string& studentId, const string& courseId) : recordId(nextId++), studentId(studentId), courseId(courseId), recordDate(time(0))
{
}

int Record::getRecordId() const
{
	return recordId;
}

string Record::getStudentId() const
{
	return studentId;
}

string Record::getCourseId() const
{
	return courseId;
}

string Record::getRecordDate() const
{
    char buffer[20];
    struct tm timeinfo;
    localtime_s(&timeinfo, &recordDate);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeinfo);
    return string(buffer);
}

void Record::display()
{
	cout << "選課序號： " << getRecordId() << endl;
	cout << "學號： " << getStudentId() << endl;
	cout << "課程代碼： " << getCourseId() << endl;
	cout << "選課日期：" << getRecordDate() << endl;
	cout << "----------------" << endl;
}

