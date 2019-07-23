#include"Field.h"



Field::Field()
{
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			field[i][j] = ' ';
		}
	}
}

void Field::randomFillField1()
{
	srand(time(0));
	int indexShip = 0;
	int indexX = 0;
	int indexY = 0;
	while (indexShip != 4)
	{
		indexX = rand() % 10;
		indexY = rand() % 10;
		if ((field[indexX][indexY] == ' ')
			&& (indexX + 1 < 10 && field[indexX + 1][indexY] != '*')
			&& (indexX - 1 >= 0 && field[indexX - 1][indexY] != '*')
			&& (indexY + 1 < 10 && field[indexX][indexY + 1] != '*')
			&& (indexY - 1 >= 0 && field[indexX][indexY - 1] != '*')
			&& (indexX - 1 >= 0 && indexY + 1 < 10 && field[indexX - 1][indexY + 1] != '*')
			&& (indexX + 1 < 10 && indexY + 1 < 10 && field[indexX + 1][indexX + 1] != '*')
			&& (indexX + 1 < 10 && indexY - 1 >= 0 && field[indexX + 1][indexY - 1] != '*')
			&& (indexX - 1 >= 0 && indexY - 1 && field[indexX - 1][indexX - 1] != '*')
			|| (indexX == 0 && indexY - 1 >= 0
				&& field[indexX + 1][indexY] != '*'
				&& field[indexX + 1][indexY - 1] != '*'
				&& field[indexX + 1][indexY + 1] != '*'
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX][indexY + 1] != '*')
			|| (indexX == 9 && indexY - 1 >= 0 && indexY + 1 < 10
				&& field[indexX - 1][indexY - 1] != '*'
				&& field[indexX - 1][indexY + 1] != '*'
				&& field[indexX - 1][indexY] != '*'
				&&field[indexX][indexY - 1] != '*'
				&&field[indexX][indexY + 1] != '*')
			|| (indexY == 0 && indexX - 1 >= 0 && indexX + 1 < 10
				&& field[indexX - 1][indexY] != '*'
				&& field[indexX - 1][indexY + 1] != '*'
				&& field[indexX + 1][indexY] != '*'
				&& field[indexX][indexY + 1] != '*')
				&& field[indexX+1][indexY+1] != '*'
			 || (indexY == 9 && indexX - 1 >= 0 && indexX + 1 < 10
				 && field[indexX - 1][indexY] != '*'
				 && field[indexX-1][indexY-1] != '*'
				 && field[indexX + 1][indexY] != '*'
				 && field[indexX][indexY-1]!='*'
				 && field[indexX+1][indexY-1]!= '*')
			||(indexX==0 && indexY==0
				&& field[indexX][indexY+1]!='*'
				&& field[indexX+1][indexY + 1] != '*'
				&& field[indexX][indexY] != '*')
			|| (indexX == 0 && indexY == 9
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX + 1][indexY - 1] != '*'
				&& field[indexX+1][indexY] != '*')
			|| (indexX == 9 && indexY == 0
				&& field[indexX-1][indexY] != '*'
				&& field[indexX -1 ][indexY + 1] != '*'
				&& field[indexX][indexY+1] != '*')
			|| (indexX == 9 && indexY == 9
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX - 1][indexY - 1] != '*'
				&& field[indexX-1][indexY] != '*'))

			{
				field[indexX][indexY] = '*';
				indexShip++;
			}
			
			
		}

	}

void Field::randomFillField2()
{
	srand(time(0));
	int indexShip = 0;
	int indexX = 0;
	int indexY = 0;

	while (indexShip <= 3)
	{
		indexX = rand() % 10;
		indexY = rand() % 10;

		if ((indexX == 0 && indexY == 0 && field[indexX][indexY] == ' '
			&& field[indexX + 1][indexY] == ' '
			&& field[indexX][indexY + 1] != '*'
			&& field[indexX + 1][indexY + 1] != '*'
			&& field[indexX + 2][indexY + 1] != '*'
			&& field[indexX + 2][indexY] != '*')
			|| (indexX == 0 && indexY == 9 && field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX + 1][indexY - 1] != '*'
				&& field[indexX + 1][indexY + 1] != '*'
				&& field[indexX + 2][indexY - 1] != '*'
				&& field[indexX + 2][indexY] != '*')
			|| (indexX == 8 && indexY == 0 && field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX - 1][indexY] != '*'
				&& field[indexX - 1][indexY + 1] != '*'
				&& field[indexX][indexY + 1] != '*'
				&& field[indexX + 1][indexY + 1] != '*')
			|| (indexX == 8 && indexY == 9 && field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX - 1][indexY] != '*'
				&& field[indexX - 1][indexY - 1] != '*'
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX + 1][indexY - 1] != '*')

			)
		{
			field[indexX][indexY] = '*';
			field[indexX + 1][indexY] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 3) break;
		}

		if ((indexX == 0 && indexY >= 1 && indexY < 9
			&& field[indexX][indexY] == ' '
			&& field[indexX + 1][indexY] == ' '
			&& field[indexX][indexY - 1] != '*'
			&& field[indexX + 1][indexY - 1] != '*'
			&& field[indexX + 2][indexY - 1] != '*'
			&& field[indexX + 2][indexY] != '*'
			&& field[indexX + 2][indexY + 1] != '*'
			&& field[indexX + 1][indexY + 1] != '*'
			&& field[indexX][indexY + 1] != '*')
			||(indexX>=1 && indexY<9 && indexY == 0
				&& field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX + 2][indexY] != '*'
				&& field[indexX + 2][indexY + 1] != '*'
				&& field[indexX + 1][indexY + 1] != '*'
				&& field[indexX][indexY + 1] != '*'
				&& field[indexX-1][indexY] != '*')
			||(indexX >= 1 && indexX<9 && indexY == 9
				&& field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX + 1][indexY - 1] != '*'
				&& field[indexX + 2][indexY - 1] != '*'
				&& field[indexX + 2][indexY] != '*'
				&& field[indexX-1][indexY] != '*'
				)
			|| (indexX == 8 && indexY >=1 && indexY < 9
				&& field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX + 1][indexY - 1] != '*'
				&& field[indexX + 2][indexY - 1] != '*'
				&& field[indexX + 2][indexY] != '*'
				&& field[indexX + 2][indexY + 1] != '*'
				&& field[indexX + 1][indexY + 1] != '*'
				&& field[indexX][indexY + 1] != '*'
				))
		{

			field[indexX][indexY] = '*';
			field[indexX + 1][indexY] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 3) break;
		}

		if ((indexX == 0 && indexY >= 1 && indexY < 9
			&& field[indexX][indexY] == ' '
			&& field[indexX][indexY + 1] == ' '
			&& field[indexX][indexY - 1] != '*'
			&& field[indexX][indexY + 2] != '*'
			&& field[indexX + 1][indexY - 1] != '*'
			&& field[indexX + 1][indexY] != '*'
			&& field[indexX + 1][indexY + 1] != '*'
			&& field[indexX + 1][indexY + 2] != '*')
			|| (indexX == 9 && indexY >= 1 && indexY < 9
				&& field[indexX][indexY] == ' '
				&& field[indexX][indexY + 1] == ' '
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX][indexY + 2] != '*'
				&& field[indexX + 1][indexY - 1] != '*'
				&& field[indexX + 1][indexY] != '*'
				&& field[indexX + 1][indexY + 1] != '*'
				&& field[indexX + 1][indexY + 2] != '*')
			|| (indexX >=1 && indexX < 9 && indexY == 0
				&& field[indexX][indexY] == ' '
				&& field[indexX][indexY + 1] == ' '
				&& field[indexX][indexY + 2] != '*'
				&& field[indexX + 1][indexY] != '*'
				&& field[indexX + 1][indexY + 1] != '*'
				&& field[indexX + 1][indexY + 2] != '*'
				&& field[indexX - 1][indexY] != '*'
				&& field[indexX - 1][indexY+1] != '*'
				&& field[indexX - 1][indexY+2] != '*')
			|| (indexX >= 1 && indexX < 9 && indexY == 8
				&& field[indexX][indexY] == ' '
				&& field[indexX][indexY + 1] == ' '
				&& field[indexX + 1][indexY] != '*'
				&& field[indexX + 1][indexY+1] != '*'
				&& field[indexX + 1][indexY-1] != '*'
				&& field[indexX][indexY-1] != '*'
				&& field[indexX-1][indexY - 1] != '*')
				&& field[indexX-1][indexY] != '*'
				&& field[indexX - 1][indexY+1] != '*'
			|| (indexY >= 1 && indexY < 9 && indexX == 8
				&& field[indexX][indexY] == ' '
				&& field[indexX][indexY - 1] == ' '
				&& field[indexX - 1][indexY] != '*'
				&& field[indexX - 1][indexY] != '*'
				&& field[indexX-1][indexY - 1] != '*'
				&& field[indexX - 1][indexY - 2] != '*'
				&& field[indexX][indexY-2] != '*'
				&& field[indexX+1][indexY - 2] != '*'
				&& field[indexX+1][indexY - 1] != '*')
			|| (indexY == 0 && indexX == 0
				&& field[indexX][indexY] == ' '
				&& field[indexX][indexY + 1] == ' '
				&& field[indexX][indexY+2]!='*'
				&& field[indexX+1][indexY + 2] != '*'
				&& field[indexX+1][indexY +1] != '*'
				&& field[indexX+1][indexY] != '*'
				)
			|| (indexY == 8 && indexX == 0
				&& field[indexX][indexY] == ' '
				&& field[indexX][indexY + 1] == ' '
				&& field[indexX][indexY -1] != '*'
				&& field[indexX + 1][indexY -1] != '*'
				&& field[indexX + 1][indexY] != '*'
				&& field[indexX + 1][indexY+1] != '*'
				)
			|| (indexY == 0 && indexX == 9
				&& field[indexX][indexY] == ' '
				&& field[indexX][indexY + 1] == ' '
				&& field[indexX-1][indexY] != '*'
				&& field[indexX - 1][indexY + 1] != '*'
				&& field[indexX - 1][indexY+2] != '*'
				&& field[indexX ][indexY + 2] != '*'
				)
			|| (indexY == 8 && indexX == 9
				&& field[indexX][indexY] == ' '
				&& field[indexX][indexY + 1] == ' '
				&& field[indexX-1][indexY + 1] != '*'
				&& field[indexX - 1][indexY] != '*'
				&& field[indexX - 1][indexY-1] != '*'
				&& field[indexX][indexY - 1] != '*'
				)
				)
		{
			field[indexX][indexY] = '*';
			field[indexX][indexY+1] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 3) break;
		}

		if (field[indexX][indexY] == ' '
			&& (indexX+1 < 10 && field[indexX+1][indexY] == ' ')
			&&(indexX+2 < 10 && field[indexX+2][indexY]!='*')
			&&(indexX-1 >=0 && field[indexX - 1][indexY] != '*')
			&&(indexY+1 < 10 && field[indexX][indexY+1] != '*')
			&& ((indexY + 1 < 10)&&(indexX + 1 < 10) && field[indexX+1][indexY+1] != '*')
			&& (indexY - 1 >= 0 && field[indexX][indexY - 1] != '*')
			&& ((indexY - 1 >= 0) && (indexX + 1 < 10) && field[indexX + 1][indexY - 1] != '*')
			&&(indexX-1>=0 && indexY+1 <10 && field[indexX-1][indexY+1]!='*')
			&&(indexX-1>=0 && indexY-1 >= 0 &&field[indexX-1][indexY-1]!='*')
			&&(indexX+2 < 10 && indexY+1 <10 && field[indexX+2][indexY+1]!='*')
			&&(indexX+2 <10 && indexY-1>=0&& field[indexX+2][indexY-1]!='*')
			)
		{
				field[indexX][indexY] = '*';
				field[indexX + 1][indexY] = '*';
				indexShip++;
				indexX = rand() % 10;
				indexY = rand() % 10;
				if (indexShip >= 3) break;
		}

		if (field[indexX][indexY] == ' '
			&& (indexX - 1 >= 0 && field[indexX - 1][indexY] == ' ')
			&& (indexX + 1 < 10 && field[indexX + 1][indexY] != '*')
			&& (indexX - 2 >= 0 && field[indexX - 2][indexY] != '*')
			&& (indexY + 1 < 10 && field[indexX][indexY + 1] != '*')
			&& ((indexY + 1 < 10) && (indexX - 1 >= 0) && field[indexX - 1][indexY + 1] != '*')
			&& (indexY - 1 >= 0 && field[indexX][indexY - 1] != '*')
			&& ((indexY - 1 >= 0) && (indexX - 1 >= 0) && field[indexX - 1][indexY - 1] != '*')
			&&(indexX+1<10 && indexY-1 >=0 && field[indexX+1][indexY-1]!='*')
			&&(indexX+1<10 && indexY+1 <10 && field[indexX+1][indexY+1]!='*')
			&&(indexX-2>=0 && indexY+1 < 10 && field[indexX-2][indexY+1]!='*')
			&&(indexX-2 >=0 && indexY-1 >=0 && field[indexX-2][indexY-1]!='*'))
		{
			field[indexX][indexY] = '*';
			field[indexX - 1][indexY] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 3) break;
		}
		if (field[indexX][indexY] == ' '
			&& (indexY + 1 < 10 && field[indexX ][indexY+1] == ' ')
			&&(indexX-1 >= 0 && field[indexX-1][indexY]!='*')
			&&(indexX-1 >=0 && indexY+1 < 10 && field[indexX-1][indexY+1]!='*')
			&&(indexY+2<10 && field[indexX][indexY+2]!='*')
			&&(indexX+1<10 && indexY+1<10 &&field[indexX+1][indexY+1]!='*')
			&&(indexX+1<10 && field[indexX+1][indexY]!='*')
			&&(indexY-1>=0 && field[indexX][indexY-1]!='*')
			&&(indexX-1>=0 && indexY-1>=0 &&field[indexX-1][indexY-1]!='*')
			&&(indexX-1>=0 && indexY+2<10 && field[indexX-1][indexY+2]!='*')
			&&(indexX+1 <10 &&indexY+2 && field[indexX+1][indexY+2]!='*')
			&&(indexX+1<10 && indexY-1 >=0 && field[indexX+1][indexY-1]!='*'))
		{
			field[indexX][indexY] = '*';
			field[indexX][indexY+1] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 3) break;
		}
		if (field[indexX][indexY] == ' '
			&& (indexY - 1 >= 0 && field[indexX][indexY - 1] == ' ')
			&&(indexY-1 >= 0 && indexX-1 >= 0 && field[indexX-1][indexY-1]!='*')
			&&(indexX-1 >=0 && field[indexX-1][indexY]!='*')
			&&(indexY+1 < 10 && field[indexX][indexY+1]!='*')
			&&(indexX+1 < 10 && indexY+1 <10 && field[indexX+1][indexY+1]!='*')
			&&(indexX+1 <10 && indexY-1 >=0 &&field[indexX+1][indexY-1]!='*')
			&&(indexY-2 >=0 &&field[indexX][indexY-2]!='*')
			&&(indexX-1 >=0 && indexY-2 >=0 && field[indexX-1][indexY-2])
			&&(indexX-1 >=0 && indexY+1 <10 && field[indexX-1][indexY+1]!='*')
			&&(indexX+1 < 10 && indexY+1 <10 && field[indexX+1][indexY+1]!='*')
			&&(indexX + 1 < 10 && indexY - 2 <10 && field[indexX + 1][indexY - 2] != '*'))
		{
			field[indexX][indexY] = '*';
			field[indexX][indexY - 1] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 3) break;
		}

	}

}

void Field::randomFillField3()
{
	srand(time(0));
	int indexShip = 0;
	int indexX = 0;
	int indexY = 0;

	while (indexShip <= 2)
	{
		indexX = rand() % 10;
		indexY = rand() % 10;
		if ((indexX == 0 && indexY >= 1 && indexY < 9
				&& field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX + 2][indexY] == ' '
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX + 1][indexY - 1] != '*'
				&& field[indexX + 2][indexY - 1] != '*'
				&& field[indexX + 3][indexY - 1] != '*'
				&& field[indexX + 3][indexY] != '*'
				&& field[indexX + 3][indexY + 1] != '*'
				&& field[indexX + 2][indexY + 1] != '*'
				&& field[indexX + 1][indexY + 1] != '*'
				&& field[indexX][indexY + 1] != '*')
			|| (indexX == 6 && indexY >= 1 && indexY < 9
				&& field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX + 2][indexY] == ' '
				&& field[indexX][indexY - 1] != '*'
				&& field[indexX + 1][indexY - 1] != '*'
				&& field[indexX + 2][indexY - 1] != '*'
				&& field[indexX + 3][indexY - 1] != '*'
				&& field[indexX + 3][indexY] != '*'
				&& field[indexX + 3][indexY + 1] != '*'
				&& field[indexX + 2][indexY + 1] != '*'
				&& field[indexX + 1][indexY + 1] != '*'
				&& field[indexX][indexY + 1] != '*')
			|| (indexY == 0 && indexX >= 1 && indexY < 9
				&& field[indexX][indexY] == ' '
				&& field[indexX + 1][indexY] == ' '
				&& field[indexX + 2][indexY] == ' '
				&& field[indexX-1][indexY]!='*'
				&& field[indexX-1][indexY+1]!='*'
				&& field[indexX][indexY+1]!='*'
				&& field[indexX+1][indexY+1]!='*'
				&& field[indexX+2][indexY+1]!='*'
				&& field[indexX + 3][indexY + 1] != '*'
				&& field[indexX + 3][indexY] != '*')
				|| (indexY == 6 && indexX >= 1 && indexY < 9
					&& field[indexX][indexY] == ' '
					&& field[indexX + 1][indexY] == ' '
					&& field[indexX + 2][indexY] == ' '
					&& field[indexX - 1][indexY] == '*'
					&& field[indexX-1][indexY-1] == '*'
					&& field[indexX][indexY - 1] == '*'
					&& field[indexX + 1][indexY - 1] == '*'
					&& field[indexX +2][indexY - 1] == '*'
					&& field[indexX +3][indexY - 1] == '*'
					&& field[indexX+3][indexY] == '*'))
		{
			field[indexX][indexY] = '*';
			field[indexX + 1][indexY] = '*';
			field[indexX + 2][indexY] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 2) break;
		}

		if (field[indexX][indexY] == ' '
			&& (indexX + 1 < 10 && field[indexX + 1][indexY] == ' ')
				&& (indexX + 2 < 10 && field[indexX + 2][indexY] == ' ')
				&& (indexX-1 >=0 && indexY+1<10 && field[indexX-1][indexY+1]!='*')
				&&(indexY+1 <10 && field[indexX][indexY+1]!='*')
				&&(indexX+1 <10 && indexY+1 < 10 && field[indexX+1][indexY+1]!='*')
				&&(indexX + 2 <10 && indexY + 1 < 10 && field[indexX + 2][indexY + 1] != '*')
				&& (indexX + 3 <10 && indexY + 1 < 10 && field[indexX + 3][indexY + 1] != '*')
				&& (indexX + 3 <10 && indexY < 10 && field[indexX + 3][indexY] != '*')
				&& (indexX + 3 <10 && indexY-1>=0 && field[indexX + 3][indexY - 1] != '*')
				&& (indexX + 2 <10 && indexY - 1 >= 0 && field[indexX + 2][indexY - 1] != '*')
				&& (indexX + 1 <10 && indexY - 1 >= 0 && field[indexX + 1][indexY - 1] != '*')
				&& ( indexY - 1 >= 0 && field[indexX][indexY - 1] != '*')
				&& (indexX -1 >=0 && indexY - 1 >= 0 && field[indexX -1][indexY - 1] != '*')
				&&  (indexX - 1 >= 0  && field[indexX - 1][indexY] != '*'))
			
		{
			field[indexX][indexY] = '*';
			field[indexX + 1][indexY] = '*';
			field[indexX + 2][indexY] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 2) break;
		}

		if (field[indexX][indexY] == ' '
			&& (indexX - 1 >=0 && field[indexX + 1][indexY] == ' ')
			&& (indexX - 2 >=0 && field[indexX + 2][indexY] == ' ')
			&&(indexX+1 <10 && indexY-1 >=0 &&field[indexX+1][indexY-1]!='*')
			&&(indexY-1 >=0 && field[indexX][indexY-1]!='*')
			&&(indexX-1 >=0 && indexY-1 >0 && field[indexX-1][indexY-1]!='*')
			&& (indexX - 2 >= 0 && indexY - 1 >0 && field[indexX - 2][indexY - 1] != '*')
			&& (indexX - 3 >= 0 && indexY - 1 >0 && field[indexX - 3][indexY - 1] != '*')
			&&(indexX - 3 >= 0  && field[indexX - 3][indexY] != '*')
			&&(indexX - 3 >= 0 && indexY+1 < 10 && indexY + 1 <10 && field[indexX - 3][indexY + 1] != '*')
			&&( indexY -2  >=0 && indexY + 1 <10 && field[indexX - 2][indexY + 1] != '*')
			&& (indexX - 1 >= 0 && indexY + 1 <10 && indexY + 1 <10 && field[indexX - 1][indexY + 1] != '*')
			&&(indexY + 1 <10 && indexY + 1 < 10 && field[indexX][indexY + 1] != '*')
			&&(indexX + 1 < 10 && indexY + 1 <10 && indexY + 1 <10 && field[indexX + 1][indexY + 1] != '*')
			&&(indexX + 1 < 10 && indexY + 1 <10 && field[indexX + 1][indexY] != '*'))
		{
			field[indexX][indexY] = '*';
			field[indexX + 1][indexY] = '*';
			field[indexX + 2][indexY] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 2) break;
		}

		if (field[indexX][indexY] == ' '
			&& (indexY + 1 < 10 && field[indexX][indexY+1] == ' ')
			&& (indexY + 2 < 10 && field[indexX][indexY+2] == ' ')
			&&(indexX-1>=0 && field[indexX-1][indexY]!='*')
			&& (indexX - 1 >= 0 && indexY+1 < 10 && field[indexX - 1][indexY+1] != '*')
			&& (indexX - 1 >= 0 && indexY + 2 < 10 && field[indexX - 1][indexY + 2] != '*')
			&& (indexX - 1 >= 0 && indexY + 3 < 10 && field[indexX - 1][indexY + 3] != '*')
			&& ( indexY + 3 < 10 && field[indexX][indexY + 3] != '*')
			&& (indexX + 1 < 10 && indexY + 3 < 10 && field[indexX + 1][indexY + 3] != '*')
			&& (indexX + 1 < 10 && indexY + 2 < 10 && field[indexX + 1][indexY + 2] != '*')
			&& (indexX + 1 < 10 && indexY + 1 < 10 && field[indexX + 1][indexY + 1] != '*')
			&& (indexX + 1 < 10 && field[indexX + 1][indexY] != '*')
			&& (indexX + 1 < 10 && indexY - 1 >= 0 && field[indexX + 1][indexY - 1] != '*')
			&& (indexX + 1 < 10 && indexY - 2 >= 0 && field[indexX + 1][indexY - 2] != '*')
			&& (indexX + 1 < 10 && indexY - 3 >= 0 && field[indexX + 1][indexY - 3] != '*')
			)
		{
			field[indexX][indexY] = '*';
			field[indexX + 1][indexY] = '*';
			field[indexX + 2][indexY] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 2) break;
		}

		if (field[indexX][indexY] == ' '
			&& (indexY - 1 >= 0 && field[indexX][indexY - 1] == ' ')
			&& (indexY - 2 >= 0 && field[indexX][indexY - 2] == ' ')
			&& (indexX + 1 < 10 && indexY + 1 < 10 && field[indexX + 1][indexY + 1] != '*')
			&& (indexX + 1 < 10 && field[indexX + 1][indexY] != '*')
			&& (indexX + 1 < 10 && indexY - 1 >=0 && field[indexX + 1][indexY - 1] != '*')
			&& (indexX + 1 < 10 && indexY - 2 >= 0 && field[indexX + 1][indexY - 2] != '*')
			&& (indexX + 1 < 10 && indexY - 3 >= 0 && field[indexX + 1][indexY - 3] != '*')
			&& ( indexY - 3 >= 0 && field[indexX][indexY - 3] != '*')
			&& (indexY + 1 < 10 && field[indexX][indexY + 1] != '*')
			&& (indexX - 1 >= 0 && indexY - 3 >= 0 && field[indexX - 1][indexY - 3] != '*')
			&& (indexX - 1 >= 0 && indexY - 2 >= 0 && field[indexX - 1][indexY - 2] != '*')
			&& (indexX - 1 >= 0 && indexY - 1 >= 0 && field[indexX - 1][indexY - 1] != '*')
			&&  (indexX - 1 >= 0  && field[indexX - 1][indexY] != '*')
			&& (indexX - 1 >= 0 && indexY + 1 < 10 && field[indexX - 1][indexY + 1] != '*')
			)
		{
			field[indexX][indexY] = '*';
			field[indexX + 1][indexY] = '*';
			field[indexX + 2][indexY] = '*';
			indexShip++;
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (indexShip >= 2) break;
		}
	}
}

void Field::randomFillField4()
{
	srand(time(0));
	int indexShip = 0;
	int indexX = 0;
	int indexY = 0;

	while (indexShip != 1)
	{
		
		int choice = rand() % 4;
		switch (choice)
		{
		case 0:
			{
			if (field[indexX][indexY] == ' '
				&& (indexX + 1 < 10 && field[indexX + 1][indexY] == ' ')
				&& (indexX + 1 < 10 && field[indexX + 2][indexY] == ' ')
				&& (indexX + 3 < 10 && field[indexX + 3][indexY] == ' ')
				&& (indexX - 1 >= 0 && indexY - 1 >= 0 && field[indexX - 1][indexY - 1] != '*')
				&& (indexX - 1 >= 0 && field[indexX - 1][indexY] != '*')
				&& (indexX - 1 >= 0 && indexY + 1 < 10 && field[indexX - 1][indexY + 1] != '*')
				&& (indexY + 1 < 10 && field[indexX][indexY + 1] != '*')
				&& (indexX + 1 < 10 && indexY + 1 < 10 && field[indexX + 1][indexY + 1] != '*')
				&& (indexX + 2 < 10 && indexY + 1 < 10 && field[indexX + 2][indexY + 1] != '*')
				&& (indexX + 3 < 10 && indexY + 1 < 10 && field[indexX + 3][indexY + 1] != '*')
				&& (indexX + 4 < 10 && indexY + 1 < 10 && field[indexX + 4][indexY + 1] != '*')
				&& (indexX + 4 < 10 && field[indexX + 4][indexY] != '*')
				&& (indexX + 4 < 10 && indexY - 1 >= 0 && field[indexX + 1][indexY + 1] != '*')
				&& (indexX + 3 < 10 && indexY - 1 >= 0 && field[indexX + 3][indexY - 1] != '*')
				&& (indexX + 2 < 10 && indexY - 1 >= 0 && field[indexX + 2][indexY - 1] != '*')
				&& (indexX + 1 < 10 && indexY - 1 >= 0 && field[indexX + 1][indexY - 1] != '*')
				&& (indexY - 1 >= 0 && field[indexX][indexY - 1] != '*')
				)

			{
				field[indexX][indexY] = '*';
				field[indexX + 1][indexY] = '*';
				field[indexX + 2][indexY] = '*';
				field[indexX + 3][indexY] = '*';
				indexShip++;
				indexX = rand() % 10;
				indexY = rand() % 10;
				if (indexShip >= 1) break;
			}
		}
		break;
		case 1:
			{
			indexX = rand() % 10;
			indexY = rand() % 10;
			if (field[indexX][indexY] == ' '
				&& (indexY + 1 < 10 && field[indexX][indexY + 1] == ' ')
				&& (indexY + 2 < 10 && field[indexX][indexY + 2] == ' ')
				&& (indexY + 3 < 10 && field[indexX][indexY + 3] == ' ')
				&& (indexX - 1 >= 0 && indexY - 1 >= 0 && field[indexX - 1][indexY - 1] != '*')
				&& (indexX - 1 >= 0 && field[indexX - 1][indexY] != '*')
				&& (indexX - 1 >= 0 && indexY + 1 < 10 && field[indexX - 1][indexY + 1] != '*')
				&& (indexX - 1 >= 0 && indexY + 2 < 10 && field[indexX - 1][indexY + 2] != '*')
				&& (indexX - 1 >= 0 && indexY + 3 < 10 && field[indexX - 1][indexY + 3] != '*')
				&& (indexX - 1 >= 0 && indexY + 4 < 10 && field[indexX - 1][indexY + 4] != '*')
				&& (indexY - 1 >= 0 && field[indexX][indexY - 1] != '*')
				&& (indexY + 4 < 10 && field[indexX][indexY + 4] != '*')
				&& (indexX + 1<10 && indexY + 4 && field[indexX + 1][indexY + 4] != '*')
				&& (indexX + 1<10 && indexY + 3  < 10 && field[indexX + 1][indexY + 3] != '*')
				&& (indexX + 1<10 && indexY + 2 <10 && field[indexX + 1][indexY + 2] != '*')
				&& (indexX + 1<10 && indexY + 1 <10 && field[indexX + 1][indexY + 1] != '*')
				&& (indexX + 1<10 && field[indexX + 1][indexY] != '*')
				&& (indexX + 1<10 && indexY - 1 >= 0 && field[indexX + 1][indexY - 1] != '*')
				)

			{
				field[indexX][indexY] = '*';
				field[indexX][indexY + 1] = '*';
				field[indexX][indexY + 2] = '*';
				field[indexX][indexY + 3] = '*';
				indexShip++;
				indexX = rand() % 10;
				indexY = rand() % 10;
				if (indexShip >= 1) break;
			}
			}
			break;
		case 2:
			{
			if (field[indexX][indexY] == ' '
				&& (indexY - 1 >= 0 && field[indexX][indexY - 1] == ' ')
				&& (indexY - 2 >= 0 && field[indexX][indexY - 2] == ' ')
				&& (indexY - 3 >= 0 && field[indexX][indexY - 3] == ' ')
				&& (indexX - 1 >= 0 && indexY + 1 <10 && field[indexX - 1][indexY + 1] != '*')
				&& (indexX - 1 >= 0 && field[indexX - 1][indexY] != '*')
				&& (indexX - 1 >= 0 && indexY - 1 >= 0 && field[indexX - 1][indexY - 1] != '*')
				&& (indexX - 1 >= 0 && indexY - 2 >= 0 && field[indexX - 1][indexY - 2] != '*')
				&& (indexX - 1 >= 0 && indexY - 3 >= 0 && field[indexX - 1][indexY - 3] != '*')
				&& (indexX - 1 >= 0 && indexY - 4 >= 0 && field[indexX - 1][indexY - 4] != '*')
				&& (indexY - 4 >= 0 && field[indexX][indexY - 4] != '*')
				&& (indexY + 1 <10 && field[indexX][indexY + 1] != '*')
				&& (indexX + 1 < 10 && field[indexX + 1][indexY] != '*')
				&& (indexX + 1 < 10 && indexY - 1 >= 0 && field[indexX + 1][indexY - 1] != '*')
				&& (indexX + 1 < 10 && indexY - 2 >= 0 && field[indexX + 1][indexY - 2] != '*')
				&& (indexX + 1 < 10 && indexY - 3 >= 0 && field[indexX + 1][indexY - 3] != '*')
				&& (indexX + 1 < 10 && indexY - 4 >= 0 && field[indexX + 1][indexY - 4] != '*')

				)

			{
				field[indexX][indexY] = '*';
				field[indexX][indexY - 1] = '*';
				field[indexX][indexY - 2] = '*';
				field[indexX][indexY - 3] = '*';
				indexShip++;
				indexX = rand() % 10;
				indexY = rand() % 10;
				if (indexShip >= 1) break;
			}
					}
			break;
		case 3:
			{
			if (field[indexX][indexY] == ' '
				&& (indexX - 1 >= 0 && field[indexX - 1][indexY] == ' ')
				&& (indexX - 1 >= 0 && field[indexX - 2][indexY] == ' ')
				&& (indexX - 3 >= 0 && field[indexX - 3][indexY] == ' ')
				&& (indexX + 1 <10 && indexY - 1 >= 0 && field[indexX + 1][indexY - 1] != '*')
				&& (indexY - 1 >= 0 && field[indexX][indexY - 1] != '*')
				&& (indexX - 1 >= 0 && indexY - 1 >= 0 && field[indexX - 1][indexY - 1] != '*')
				&& (indexX - 2 >= 0 && indexY - 1 >= 0 && field[indexX - 2][indexY - 1] != '*')
				&& (indexX - 3 >= 0 && indexY - 1 >= 0 && field[indexX - 3][indexY - 1] != '*')
				&& (indexX - 4 >= 0 && indexY - 1 >= 0 && field[indexX - 4][indexY - 1] != '*')
				&& (indexX - 4 >= 0 && field[indexX - 4][indexY] != '*')
				&& (indexX - 4 >= 0 && indexY + 1 < 10 && field[indexX - 4][indexY + 1] != '*')
				&& (indexX - 3 >= 0 && indexY + 1 < 10 && field[indexX - 3][indexY + 1] != '*')
				&& (indexX - 2 >= 0 && indexY + 1 < 10 && field[indexX - 2][indexY + 1] != '*')
				&& (indexX - 1 >= 0 && indexY + 1 < 10 && field[indexX - 1][indexY + 1] != '*')
				&& (indexY + 1 < 10 && field[indexX][indexY + 1] != '*')
				&& (indexX + 1 < 10 && indexY + 1 < 10 && field[indexX + 1][indexY + 1] != '*')
				&& (indexX + 1 < 10 && field[indexX + 1][indexY] != '*')
				)

			{
				field[indexX][indexY] = '*';
				field[indexX - 1][indexY] = '*';
				field[indexX - 2][indexY] = '*';
				field[indexX - 3][indexY] = '*';
				indexShip++;
				indexX = rand() % 10;
				indexY = rand() % 10;
				if (indexShip >= 1) break;
			}
		}
		break;
		}


	}
}

bool Field::getCell(int x, int y,char typeCell)const
{
	if (field[x][y] == typeCell)
		return true;
	return false;
}

void Field::setCell(int x, int y, char typeCell)
{
	field[x][y] = typeCell;
}

bool Field::checkOnLose() const
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			if (field[i][j] == '*')
				return false;
		}
	}
	return true;
}



void Field::showField()const
{
	cout << "  0123456789\n"
	<< "  __________"	;
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "\n" << i << '|';
		for (size_t j = 0; j < SIZE; j++)
		{
			cout  << field[i][j];
			if (j == 9) cout << '|';
		}
		
	}
	cout << '\n';
}



