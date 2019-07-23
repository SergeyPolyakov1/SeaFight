#include "Player.h"

Player::Player()
{
	enemyField = new Field();
	myField = new Field();
	myField->randomFillField4();
	myField->randomFillField3();
	myField->randomFillField2();
	myField->randomFillField1();


}

bool Player::attack(Field *enemy, int x, int y)
{
	if (enemy->getCell(x, y, '*'))
	{
		enemy->setCell(x, y, 'x');
		enemyField->setCell(x, y, '*');
		return true;
	}
	return false;
}

void Player::showEnemyField() const
{
	enemyField->showField();
}

void Player::showMyField() const
{
	myField->showField();
}

Field * Player::getMyField() const
{
	return this->myField;
}

bool Player::checkOnLose() const
{
	if (myField->checkOnLose())
		cout << "COMPUTER WIN!!\n";
	return myField->checkOnLose();
}
