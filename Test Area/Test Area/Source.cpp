#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

int counter = 0;

int main()
{
	system("cls");
	int x;
	int b;
	int a;
	int s;
	int d;
	int f;

	srand((unsigned)time(0));
	x = rand() % 10;
	b = rand() % 10;
	a = rand() % 10;
	s = rand() % 10;
	d = rand() % 10;
	f = rand() % 10;
	counter++;
	cout << x << endl << b << endl << a << endl << s << endl << d << endl << f << endl << endl << counter << endl << endl;
	main();
	
}