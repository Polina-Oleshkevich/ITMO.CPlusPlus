#pragma once
#include <string>
#include <sstream>

using namespace std;

class course
{
public:
	course(string nameCourse) : nameCourse(nameCourse) {}

	string getInfocourse()
		{
			ostringstream full_name;
			full_name << this->nameCourse << " ";
			return full_name.str();
		}
	private:
		string nameCourse;
	
};
