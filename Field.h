#pragma once
#include<ctime>
#include<iostream>
using namespace std;

class Field 
{
public:
	Field();
	//SET SHIPS FUN
	void randomFillField1();
	void randomFillField2();
	void randomFillField3();
	void randomFillField4();
	bool getCell(int x, int y,char typeCell)const;
	void setCell(int x, int y, char typeCell);
	//
	bool checkOnLose()const;

	void showField()const;
	
private:
	static const int SIZE = 10;
	char field[SIZE][SIZE];

};