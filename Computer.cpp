#include "Computer.h"

Computer::Computer()
{
	playerField = new Field();
	computerField = new Field();
	computerField->randomFillField4();
	computerField->randomFillField3();
	computerField->randomFillField2();
	computerField->randomFillField1();
}

bool Computer::attack(Field *enemy)
{
	int x = rand() % 10;
	int y = rand() % 10;
	if (enemy->getCell(x, y, '*'))
	{
		enemy->setCell(x, y, 'x');
		playerField->setCell(x, y, '*');
		return true;
	}
	return false;
}

Field * Computer::getComputerField() const
{
	return this->computerField;
}

bool Computer::checkOnLose() const
{
	if (computerField->checkOnLose())
		cout << "PLAYER WIN!!\n";
	return computerField->checkOnLose();
}
