#include <iostream>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------САМА ПРОГА-------------------------------------

	int x, h;
	char c;

	cout << "Выберите символ , которым будет печататься ромб: " << endl;

	cout << "1)  * " << endl;
	cout << "2)  + " << endl;
	cout << "3)  # " << endl;
	cout << "Выбор:  ";
	cin >> x;

	cout << endl << "Введите высоту ромба : ";
	cin >> h;
	cout << endl;

	if (x == 1 || x == 2 || x == 3)
	{

		switch (x)
		{
		case 1:
			c = '*';
			break;
		case 2:
			c = '+';
			break;
		case 3:
			c = '#';
			break;

		}


		for (int j = 0; j < h; j++)
		{
			for (int i = 0; i < h - j; i++)
			{
				cout << ' ';
			}
			cout << c;
			
			for (int i = 0; i < (j * 2) - 1; i++)
			{
				cout << ' ';
			}
			if (j != 0)
			{
				cout << c << endl;
			}
			else
			{
				cout << endl;
			}
		}


		for (int j = 0; j < h + 1; j++)
		{
			for (int i = 0; i < j; i++)
			{
				cout << ' ';
			}
			cout << c;

			for (int i = 0; i < (h - j) * 2 - 1; i++)
			{
				cout << ' ';
			}

			if (j != h)
			{
				cout << c << endl;
			}
			else
			{
				cout << endl;
			}
		}



	}
	else
	{
		cout << "ОИБКА!! выбран не корректный вариант!" << endl;
	}

	system("pause");

	return 0;
}
