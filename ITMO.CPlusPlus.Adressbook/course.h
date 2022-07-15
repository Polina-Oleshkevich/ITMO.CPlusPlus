#pragma once
#include <string>
#include <sstream>

using namespace std;

class course
{
public:
	course(string nameCourse) : 
		nameCourse(nameCourse) {}

	string getInfocourse() const
		{
			std::ostringstream full_info;
			full_info << this->nameCourse << " ";
			return full_info.str();
		}
	private:
		string nameCourse;
};
