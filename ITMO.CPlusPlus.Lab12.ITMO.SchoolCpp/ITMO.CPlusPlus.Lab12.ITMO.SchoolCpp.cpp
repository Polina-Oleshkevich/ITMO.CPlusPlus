// main.cpp  
#include <iostream> 
#include <vector>  
#include "human.h"
#include "student.h"  
#include "teacher.h"


int main()
{ 
	
	// Оценки студента 
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5); 
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4); 
	scores.push_back(5);
	scores.push_back(3); 
	scores.push_back(3); 
	scores.push_back(3);  
	scores.push_back(3); 
	human* humm = new human("Иванов", "Иван", "Иванович");
	std::cout << humm->get_info() << " " << std::endl;
	student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	humm = stud;
	std::cout << humm->get_info() << " " << std::endl;
	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	humm = tch;
	std::cout << humm->get_info() << " " << std::endl;
	delete humm;
	delete stud;
	delete tch;
	return 0;
}
