#pragma once
#include <iostream>
#include <string>
#include "human.h"
#include "course.h"
#include <sstream>
using namespace std;

class teacher : public human
{
    // ����������� ������ teacher 
    public:  
        teacher(string lastName, string name, unsigned int work_time, course* course) : human(lastName, name)
        {   
            this->work_time = work_time; 
            this->course = course;
        }  
           // ��������� ���������� ������� �����  
        unsigned int get_work_time()     
        {         
            return this->work_time;      
        }  

        string get_full_name() 
        {
            ostringstream full_name;
            full_name << human::get_full_name() << "�����: " << course->getInfocourse() << " ";
            return full_name.str();
        }
        // ������ ������ � �������� � ����
        void Save()
        {
            human::Save();
            ofstream fout("human.txt", ios::app);  
        fout << "������� ����: " << get_work_time() << " ";
        fout << endl; 
        fout.close();
}
    private:         // ������� ����   
        unsigned int work_time; 
        course* course;
};