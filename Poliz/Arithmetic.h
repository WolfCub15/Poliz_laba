#pragma once
#include"TPoliz.h"
#include"Stack.h"
class Arithmetic {
private:
	std::string str;//������� ������
	TPoliz* poliz;//��������� �� �����
public:
	Arithmetic(std::string _str);
	Arithmetic(const Arithmetic & tmp);
	Arithmetic &operator=(const Arithmetic & tmp);
	~Arithmetic();
	double calculate();//���������� ���������
	TPoliz* get_poliz();//���������� ��������� �� �����
};