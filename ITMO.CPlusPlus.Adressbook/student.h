#pragma once
#include <iostream>
#include <string>
#include "human.h"
#include <sstream>
#include <vector>


using namespace std;

class student : public human
{
public:     
   
    student(string lastName, string name, vector<int> scores) :
        human(lastName, name) {      
        this->scores = scores;      
    }  
    string get_full_name()
    {
        ostringstream full_name;
        full_name << human::get_full_name() << " " << get_average_score() << " ";
        return full_name.str();
    }

    // Запись данных в файл
    void Save()
    {
        human::Save();
        ofstream fout("human.txt", ios::app);
        fout << get_average_score() << " ";
        fout << endl;
        fout.close();

        float get_average_score()
        {    
            unsigned int count_scores = this->scores.size();  
            unsigned int sum_scores = 0;
            float average_score;  
        for (unsigned int i = 0; i < count_scores; ++i)
        { 
            sum_scores += this->scores[i]; 
        }
        average_score = (float)sum_scores / (float)count_scores;  
        return average_score;
        }
private:  
    vector<int> scores;
};  
