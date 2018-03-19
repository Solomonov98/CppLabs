#include <iostream>
#include <windows.h>
#include <conio.h>
# include <time.h>
#include <fstream>
#include <cstdlib>

using namespace std;

bool game_over;
const int A = 20, B = 30;
int x, y, fruitX, fruitY, score;
int tail_x[255], tail_y[255];
int tail;
enum movement { stop = 0, LEFT,RIGHT, UP, DOWN};
movement mov;


void setup() {
	game_over = false;
		mov = stop;
		x = rand() % B;
		y = rand() % A;
		fruitX = 1 + rand() % (B - 1);
		fruitY = 1 + rand() % (A - 1);
		score = 0;
	}
	

void card() {
	system("cls");
	for (int i = 0; i < B+1;i++)
		cout<<"$";
	cout << "\n";
	    
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			if (j==0||j==B-1)
				cout << "$";
			if (i == y && j == x)
				cout << "X";
			else if (i == fruitY && j == fruitX)
				cout << "@";
			else {
				bool print= false;
				for (int n = 0; n < tail; n++) {
					if (tail_x[n] == j && tail_y[n] == i) {
						print = true;
						cout << "*";
					}
				}
				if (!print)
			  	cout << " ";
			}
		}
		cout << "\n";

	}

	for (int i = 0; i < B + 1; i++)
		cout << "$";
	cout << endl;

	cout << "СЧЁТ: " << score << " фр."   << endl;
	Sleep(100);
}

void input() {
	
	if (_kbhit()) {
		switch (_getch ())
		{
		case 'w': mov = UP;
			break;
		case 'a': mov = LEFT;
			break;
		case 'd': mov = RIGHT;
			break;
		case 's': mov = DOWN;
			break;
		case 'x': game_over = true;
			break;

		}
	}
}
 
void logic() {
	int x0 = tail_x[0];
	int y0 = tail_y[0];
	int x1, y1;
	tail_x[0] = x;
	tail_y[0] = y;
	for (int i = 1; i < tail; i++) {
		x1 = tail_x[i];
		y1 = tail_y[i];
		tail_x[i] = x0;
		tail_y[i] = y0;
		x0 = x1;
		y0 = y1;
	};

	switch (mov)
	{
	
	case LEFT: if (x != 1 || y != 0)
		x--;
		break;
	case RIGHT: if (x != 0 || y != 1)
		x++; 
		break;
	case UP: if (x != -1 || y != 0)
		y--; 
		break;
	case DOWN: if (x != 0 || y != -1)
		y++;
		break;

	}
	if (x > B-2 || x  < 0 || y > A-1 || y < 0) 
		game_over = true;

	for (int i = 0; i < tail; i++) {
		if (tail_x[i] == x && tail_y[i] == y)
			game_over = true;
	}
	if (x == fruitX && y == fruitY) {
		score += 1;
		fruitX = 1 + rand() % (B - 2);
		fruitY = 1 + rand() % (A - 2);
		tail++;
	}
}
 void records() {
	 cout << "\nТаблица Рекордов: \n";
	 char s[255];
	 ifstream table("Records.txt");
	 for (table >> s; !table.eof(); table >> s)
		 cout << s << endl;
	 table.close();
};
 void GAMEOVER() {
	 char name[255];
	 card();
	 cout << "GAME OVER!\n Твой Счёт: " << score << endl;
	 cout << "Введите ваше имя: ";
	 cin >> name;
	 cout << "Конец игры, " << name << " !" << endl;
	 ofstream record("Records.txt", ios_base::app);
	 record << "\n" << name << " .... " << score << endl;
	 record.close();
	 records();


 }
 int menu()
 {

	 int var;
	 cout << "Выберите пункт:\n" << endl;
	 cout << "1. Начать игру\n"
		 << "2. Выйти из игры\n" << endl;
	 cout << ">>> ";
	 cin >> var;
	 switch (var) {
	 case 1:
	 { cout << "Начать игру" << endl;
	 setup();
	 while (!game_over) {

		 card();
		 input();
		 logic();
	 }

	 break; }
	 case 2:
	 { cout << "Выход из игры..." << endl;
	 exit(EXIT_SUCCESS);
	 break; }
	 default:
	 { exit(EXIT_FAILURE);
	 }
	 }

 }

int main() {
	setlocale(LC_ALL, "Rus");
	
	menu();
	GAMEOVER();

	
	system("pause");
	return 0;
}