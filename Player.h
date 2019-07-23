#pragma once
#include"Field.h"

class Player
{
public:
	Player();
	bool attack(Field *enemy, int x, int y);
	void showEnemyField()const;
	void showMyField()const;
	Field * getMyField()const;
	bool checkOnLose()const;

private:
	Field *myField;
	Field *enemyField;
};