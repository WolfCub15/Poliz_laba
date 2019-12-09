#pragma once
#include <string>
#include"Table.h"
#include"Stack.h"

class TPoliz {
private:
	std::string *poliz;//указатель на строку
	int poliz_size;//размер ПОЛИЗа
	int poliz_count;
	Stack <Line<int> > stack_priority;//стек приоритетов
	Table<double> *tabl_variable;//указатель на таблицу переменных 
	Table<int> *tabl_priority;//указатель на таблицу приоритетов
	void make_tabl_priority();//построить таблицу приоритетов
	void left_bracket();//построение таблицы приоритетов, если встретили левую скобку
	void right_bracket();////построение таблицы приоритетов, если встретили правую скобку
	void operand(const std::string &tmp);//положить операнд в полиз
	void operation(Line<int> tmp);//добавление элементов в полиз, опираясь на стек приоритетов
	void end_of_string();//добавление в полиз конца строки(все, что осталось)
	void make_poliz(std::string &tmp);//построить полиз
	
public:
	TPoliz(std::string str = " ");
	TPoliz(const TPoliz &tmp);
	~TPoliz();
	TPoliz &operator=(const TPoliz &tmp);
	std::string get_poliz();
	std::string operator[](const int k);
	int get_poliz_count();
	Table<double>* get_tabl_variable();
};

