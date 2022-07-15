#pragma once
#include <string>
#include "human.h"
#include "course.h"

using namespace std;

class teacher : public human
{
    // Конструктор класса teacher 
    public:  
        teacher(string lastName, string name, course* courses) : human(lastName, name)
        {   
            this->courses = courses;
        }  
        string GetSt() const
        {
            return "---";
        }
   
        virtual string GetInfo() const
        {
            std::ostringstream full_info;
            full_info << human::GetInfo() << "Курсы: " << courses->getInfocourse() << " ";
            return full_info.str();
        }
        // Запись данных о студенте в файл
        void Save() const
        {
            human::Save();
            ofstream fout("human.txt", ios::app);  
        fout << "Курсы: " << courses->getInfocourse() << " ";
        fout << endl; 
        fout.close();
}
    private:        
        course* courses;
};