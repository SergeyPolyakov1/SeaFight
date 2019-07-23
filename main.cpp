
#include"Field.h"
#include"Player.h"
#include"Computer.h"
#include <windows.h>


void start(Computer *c, Player *p);

void main()
{

	Computer c;
	Player p;

	start(&c, &p);

}

void start(Computer *c, Player *p)
{
	int x, y;
	while (!(c->checkOnLose() || p->checkOnLose()))
	{
		system("cls");
		p->showMyField();
		p->showEnemyField();
		cout << "Enter coordinate: X Y\n";
		//cin >> x >> y;
		x = rand() % 10;
		y = rand() % 10;
		if (p->attack(c->getComputerField(), x, y))
		{
			cout << "you hit the ship!\n";
			Sleep(1500);
			continue;
		}
		else while(c->attack(p->getMyField()))
		{
			cout << "computer hit the ship!\n";
			Sleep(1500);
		}
	}
}
