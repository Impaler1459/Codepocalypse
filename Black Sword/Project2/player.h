#pragma once
#pragma once
#include <iostream>
#include <ctime>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;

double RmNum = 0; // increases difficulty, item quality, xp
double Score = 0; // scores player performance, used in xp calculation
double EP = 0;
double Lvl = 1;
double Exp = EP * Score*0.8;
int ExFunc = pow(Lvl, 3);

class Character
{
public:
	string CharFName, CharLName, Soul;
	string PlayerName;
	int Hlth = 100;
	double Atk = rand() % 10 + 1;
	double Def = rand() % 10 + 1;
	int Int = rand() % 10 + 1;
};

Character Enemy;
Character Player;
Character Boss;

class Item
{
public:
	string ItemName, ItemColor, ItemLegend;
};

Item Weapon;
Item Armor;

void ScoreFunc(double EnP)
{
	Score = Score + EnP * Lvl * RmNum + RmNum;
};

void Soul()
{
	if (Player.Soul == "Berserker")
	{
		Player.Atk = Player.Atk + RmNum * 0.8;
	}
	if (Player.Soul == "Tactician")
	{
		Player.Def = Player.Def + RmNum * 0.8;
	}
	if (Player.Soul == "Immortal")
	{
		Player.Hlth = Player.Hlth + RmNum * 0.8;
	}
	if (Player.Soul == "Forsaken")
	{
		Score = Score + RmNum * 0.8;
	}
	if (Player.Soul == "Xain's Chosen One")
	{
		Player.Atk = Player.Atk + RmNum * 2;
		Player.Def = Player.Def + RmNum * 0.8;
		Player.Hlth = Player.Hlth + RmNum * 0.8;
	}
	if (Player.Soul == "Fortress of Dalra")
	{
		Player.Def = Player.Def + RmNum * 2;
		Player.Atk = Player.Atk + RmNum *0.8;
		Player.Hlth = Player.Hlth + RmNum * 0.8;
	}
	if (Player.Soul == "Sophera's Undying Guardian")
	{
		Player.Atk = Player.Atk + RmNum * 0.8;
		Player.Def = Player.Def + RmNum * 0.8;
		Player.Hlth = Player.Hlth + RmNum * 2;
	}
	if (Player.Soul == "Unholy One")
	{
		Player.Atk = Player.Atk + RmNum * 1.5;
		Player.Def = Player.Def + RmNum * 1.5;
		Player.Hlth = Player.Hlth + RmNum * 1.5;
		Score = Score + RmNum * 1.5;
	}
}

void PlrLvl()
{
	int SklPt;
	int XP = RmNum * 1.5 + 10;
	cout << "You have increased in power!" << endl
		<< "You have " << XP << " points to add." << endl
		<< "Increase attack by... ";
	cin >> SklPt;
	if (XP >= SklPt)
	{
		Player.Atk = Player.Atk + SklPt;
		XP = XP - SklPt;
	}
	else
	{
		cout << endl << endl << "You should have entered a number below " << XP << ". The God of Attack has forsaken you this round." << endl << endl;
		system("pause");
	}
	if (XP > 0)
	{
		cout << endl << endl << "You  still have " << XP << " points to add." << endl
			<< "Increase defense by... ";
		cin >> SklPt;
		if (XP >= SklPt)
		{
			Player.Def = Player.Def + SklPt;
			XP = XP - SklPt;
		}
		else
		{
			cout << endl << endl << "You should have entered a number below " << XP << ". The God of Defense has forsaken you this round." << endl << endl;
			system("pause");
		}
	}
	if (XP > 0)
	{
		cout << endl << endl << "The remainder is offered the the Health God." << endl << endl;
		Player.Hlth = Player.Hlth + XP * 15;
		system("pause");
	}
	if (XP == 0)
	{
		cout << endl << endl << "With your new abilites you find the courage to proceed..." << endl << endl;
		system("pause");
	}
	++Lvl;
	ExFunc = pow(Lvl, 3);
};

void XpSys(double EP, int xFunc)
{
	if (xFunc <= EP)
	{
		system("cls");
		cout << Player.PlayerName << "    ||||    No Enemy" << endl
			<< "Health: " << Player.Hlth << "    ||||" << endl
			<< "Attack: " << Player.Atk << "    ||||" << endl
			<< "Defense: " << Player.Def << "    ||||" << endl
			<< "Weapon: " << Weapon.ItemColor << " " << Weapon.ItemName << " " << Weapon.ItemLegend << " | Armor: " << Armor.ItemColor << " " << Armor.ItemName << " " << Armor.ItemLegend << endl
			<< "Score: " << Score << " | Depth: " << RmNum << " | Lvl " << Lvl << " " << Player.Soul << endl
			<< "Xp: " << EP << " | Xp Needed: " << ExFunc << endl << endl << endl;

		PlrLvl();
		Soul();
		system("cls");
	}
};

void HUD() // player stats no enemy
{
	XpSys(EP, pow(Lvl, 3));
	cout << Player.PlayerName << "    ||||    No Enemy" << endl
		<< "Health: " << Player.Hlth << "    ||||" << endl
		<< "Attack: " << Player.Atk << "    ||||" << endl
		<< "Defense: " << Player.Def << "    ||||" << endl
		<< "Weapon: " << Weapon.ItemColor << " " << Weapon.ItemName << " " << Weapon.ItemLegend << " | Armor: " << Armor.ItemColor << " " << Armor.ItemName << " " << Armor.ItemLegend << endl
		<< "Score: " << Score << " | Depth: " << RmNum << " | Lvl " << Lvl << " " << Player.Soul << endl 
		<< "Xp: " << EP << " | Xp Needed: " << pow(Lvl, 3) << endl << endl << endl;
};

void EHUD() // player stats with enemy
{
	XpSys(EP, pow(Lvl + 1, 3));
	cout << Player.PlayerName << "    ||||    " << Enemy.CharFName << " " << Enemy.CharLName << endl
		<< "Health: " << Player.Hlth << "    ||||    " << "Health: " << Enemy.Hlth << endl
		<< "Attack: " << Player.Atk << "    ||||    " << "Attack: " << Enemy.Atk << endl
		<< "Defnese: " << Player.Def << "    ||||    " << "Defense: " << Enemy.Def << endl
		<< "Weapon: " << Weapon.ItemColor << " " << Weapon.ItemName << " " << Weapon.ItemLegend << " | Armor: " << Armor.ItemColor << " " << Armor.ItemName << " " << Armor.ItemLegend << endl
		<< "Score: " << Score << " | Depth: " << RmNum << " | Lvl " << Lvl << " " << Player.Soul << endl
		<< "Xp: " << EP << " | Xp Needed: " << pow(Lvl, 3) << endl << endl << endl;
};

int Rstrt(int restart)
{
	if (restart == 1)
	{
		system("cls");
		EHUD();
		cout << "Your journey continues in another life..." << endl << endl;
		system("pause");
	}
	if (restart == 0)
	{
		system("cls");
		EHUD();
		cout << "Your journey ends as your soul fades to nothing." << endl << endl;
		system("pause");
	}
	return restart;
}

void EnAtk()
{
	double RDmg = (rand() % 10) * 5;
	if (RDmg >= 40)
	{
		cout << Enemy.CharFName << " landed a critical blow!" << endl;;
	}
	int Dmg = (Enemy.Atk / Player.Def) * RDmg;
	Player.Hlth = Player.Hlth - Dmg;
	cout << Enemy.CharFName << " " << Enemy.CharLName << " " << Enemy.CharFName << " dealt " << Dmg << " damage!" << endl << endl;
};

void PlrAtk()
{
	double RDmg = (rand() % 10) * 5;
	if (RDmg >= 40)
	{
		cout << Player.PlayerName << " landed a critical blow!" << endl;
	}
	int Dmg = (Player.Atk / Enemy.Def) * RDmg;
	Enemy.Hlth = Enemy.Hlth - Dmg;
	cout << Player.PlayerName << " dealt " << Dmg << " damage!" << endl << endl;
};

void loadhs() // loads file to array and prints to start screen
{
	string info;
	cout << "=====High Scores====" << endl << "   NAME || SCORE" << endl << endl;
	vector<string> hslist;
	ifstream fin;
	fin.open("highscores.txt");
	while (fin >> info)
	{
		if (info.size() > 0)
			hslist.push_back(info);
	}
	for (int i = 0; i < hslist.size(); i += 2)
	{
		cout <<"    " << hslist[i] << " || " << hslist[i+1] << endl;
	}
	hslist.clear();
	fin.close();
};

void savehs(string name, int score)
{
	string info;
	vector<string> hsnames;
	vector<int> hsscores;
	ifstream fin;
	ofstream fout;
	int i = 0;
	cout << "begin debug\n"; //first debug
	fin.open("highscores.txt");
	if (!fin.is_open())
	{
		cout << "failed to load file\n";
	}
	cout << "file opened\n"; //sccessfully opened file
	while (i < 21)// loads hs into vectors
	{
		fin >> info;
		cout << "in loop iteration " << i << endl; // started loading vector from file
		if (i % 2 == 0)
		{
			hsnames.push_back(info);
			cout << hsnames[0] << " in vector names\n";
		}
		if (i % 2 == 1 || i == 1)
		{
			cout << "score loop begin\n";
			stringstream temp(info);
			cout << info << " stored as string stream\n";
			int x;
			temp >> x;
			cout << x << " converted to int\n";
			hsscores.push_back(x);
			cout << hsscores[0] << " in vector scores\n";

		}
		i++;
	}
	fin.close();
	cout << "file closed\n";
	for (int j = 0; j < hsscores.size(); j++)
	{
		cout << hsscores[j] << " score in iteration " << j << endl;
		cout << "compare loop begin\n";
		if (hsscores[j] < score)
		{
			
			hsnames.insert(hsnames.begin() + j, name);
			hsscores.insert(hsscores.begin() + j, score);
			hsnames.erase(hsnames.end() - 1);
			hsscores.erase(hsscores.end() - 1);
			j = hsscores.size();
		}
		cout << "test condition finished\n";
	}
	cout << "highscore save begin\n";
	fout.open("highscores.txt");
	if (!fout.is_open())
	{
		cout << "failed to load file\n";
	}
	cout << "file opened\n";
	int k = 0, l = 0;
	for (int q = 0; q < 20; q++)
	{
		cout << "begin save iteration " << q << endl;
		if (q % 2 == 0)
		{
			fout << hsnames[k] << " ";
			k++;
		}
		if (q % 2 == 1)
		{
			fout << hsscores[l] << endl;
			l++;
		}
	}
	fout.close();
	cout << " debug success";
};