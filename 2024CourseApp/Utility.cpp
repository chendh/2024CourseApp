#include "Utility.h"
#include <string>

string Utility::toString(Department department)
{
    switch (department) {
        case Department::ComputerSciece:
            return "資訊工程";
        case Department::ElectricalEngineering:
            return "電機工程";
        case Department::ElectronicEngineering:
            return "電子工程";
        case Department::InformationManagement:
            return "資訊管理";
        default:
            return "Unknown Department";
    }
}

string Utility::toString(ClassName className)
{
    switch (className) {
	case ClassName::_1A:
		return "一甲";
	case ClassName::_1B:
		return "一乙";
	case ClassName::_2A:
		return "二甲";
	case ClassName::_2B:
		return "二乙";
	case ClassName::_3A:
		return "三甲";
	case ClassName::_3B:
		return "三乙";
	case ClassName::_4A:
		return "四甲";
	case ClassName::_4B:
		return "四乙";
	default:
		return "未知";
    }
}
