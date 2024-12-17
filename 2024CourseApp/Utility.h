#pragma once
#include <string>
using namespace std;

enum class Department {
	ComputerSciece,
	ElectricalEngineering,
	ElectronicEngineering,
	InformationManagement,
	MechanicalEngineering,
	Last
};

enum class ClassName {
	_1A,
	_1B,
	_2A,
	_2B,
	_3A,
	_3B,
	_4A,
	_4B,
	Last
};

class Utility {
public:
	static string toString(Department department);
	static string toString(ClassName className);
};