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
int ExFunc = pow(Lvl + 1, 3);

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
	Score = Score + EnP * Lvl * RmNum * 0.0216;
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
	ExFunc = pow(Lvl + 1, 3);
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
	XpSys(EP, pow(Lvl + 1, 3));
	cout << Player.PlayerName << "    ||||    No Enemy" << endl
		<< "Health: " << Player.Hlth << "    ||||" << endl
		<< "Attack: " << Player.Atk << "    ||||" << endl
		<< "Defense: " << Player.Def << "    ||||" << endl
		<< "Weapon: " << Weapon.ItemColor << " " << Weapon.ItemName << " " << Weapon.ItemLegend << " | Armor: " << Armor.ItemColor << " " << Armor.ItemName << " " << Armor.ItemLegend << endl
		<< "Score: " << Score << " | Depth: " << RmNum << " | Lvl " << Lvl << " " << Player.Soul << endl 
		<< "Xp: " << EP << " | Xp Needed: " << ExFunc << endl << endl << endl;
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
		<< "Xp: " << EP << " | Xp Needed: " << ExFunc << endl << endl << endl;
};

int Rstrt(int restart)
{
	if (restart == 1)
	{
		system("cls");
		EHUD();
		cout << "Your journey continues in another life..." << endl << endl;
		system("pause");
		restart = 1;
	}
	if (restart == 0)
	{
		system("cls");
		EHUD();
		cout << "Your journey ends as your soul fades to nothing." << endl << endl;
		system("pause");
		restart = 2;
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

vector<string> split(string str, char delimiter) {
	vector<string> internal;
	stringstream ss(str); // Turn the string into a stream.
	string tok;
	while (getline(ss, tok, delimiter)) {
		internal.push_back(tok); //Loops and adds each element to vector
	}
	return internal;
};

//Returns new sorted vector of vectors (2 dimensional array)
//Input old score vector of vectors, and new score vector
vector< vector<string> > updateVector(vector< vector<string> > oldVector, vector<string> row) {
	vector< vector<string> > newVector;
	bool pushed = false; //Check if row has been inserted
	for (int i = 0; i < oldVector.size(); i++) {
		//Iterate through high scores vector
		if (stoi(row[1]) > stoi(oldVector[i][1]) && pushed == false) {
			//Check if row's score element is larger than the current high score element
			//Must convert string to int using stoi to perform check
			newVector.push_back(row);
			pushed = true;
		}
		newVector.push_back(oldVector[i]);
	}
	return newVector;
};

vector< vector<string> > createVector(std::string file) {
	vector<vector<string>> fileVector;
	ifstream fin(file);
	if (fin.fail()) {
		cerr << "Failed to open file";
		return fileVector;
	}
	std::string line;
	while (std::getline(fin, line)) {
		vector<string> sline = split(line, ' ');
		if (line.size() > 1) {
			fileVector.push_back(sline);
		}
	}
	fin.close();
	return fileVector;
};

void saveToFile(vector< vector<string>> inputVector, std::string file) {
	ofstream fout(file);
	for (int i = 0; inputVector.size(); i++) {
		fout << inputVector[i][0] << " " << inputVector[i][1] << endl;
	}
	fout.close();
};

void outputScores(vector<vector<string>> scores) {
	cout << "===== HIGH SCORES =====" << endl;
	for (int i = 0; i < scores.size(); i++) {
		string name = scores[i][0];
		int score = stoi(scores[i][1]);
		cout << "Player: " << name << " Score: " << score << endl;
	}
	cout << "=======================" << endl;
};
