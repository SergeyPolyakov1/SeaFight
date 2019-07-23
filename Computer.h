#pragma once
#include"Field.h"
class Computer
{
public:
	Computer();
	bool attack(Field *enemy);
	Field*getComputerField()const;
	bool checkOnLose()const;
private:
	Field *computerField;
	Field *playerField;
};