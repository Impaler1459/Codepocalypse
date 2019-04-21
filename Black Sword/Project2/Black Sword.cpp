#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>
#include "pch.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

using namespace std;

int main()
{
	
	system("cls");
	int exit = 0; // terminates program when =/= 0
	int x; // player command

	cout << "~~~BLACK || SWORD~~~" << endl
		<< "____________________" << endl << endl;


	vector<vector<string>> scores = createVector("highscores.txt");
	outputScores(scores);

	cout << endl << "====================" << endl
		<< "Enter 1 to begin." << endl
		<< "Enter 0 to exit." << endl << endl;
	cin >> x;
	switch (x)
	{
	case 0:
	{
		system("cls");
		cout << endl << "Your Journey ended before it began and your name fades from memory." << endl;
		++exit;
		break;
	}
	case 1:
	{
		restart = 0;
		srand((unsigned)time(0));
		Player.Hlth = 100;
		Player.Atk = rand() % 10 + 1;
		Player.Def = rand() % 10 + 1;
		Player.Int = rand() % 10 + 1;
		Score = 0;
		Lvl = 1;
		EP = 0;
		Player.Soul = " ";
		Weapon.ItemColor = " ";
		Weapon.ItemLegend = " ";
		Weapon.ItemName = " ";
		Armor.ItemColor = " ";
		Armor.ItemLegend = " ";
		Armor.ItemName = " ";
		system("cls");
		HUD();
		cout << endl << "Old Guard: I am the gate keeper, I see you are wanting to get into the dungeon." << endl
			<< "Old Guard: Well, it's a blessing from the gods that I only have to keep things from getting out." << endl
			<< "Old Guard: Not much comes the other way, you see. Things only go in, but even I, an old man" << endl
			<< "Old Guard: can handle the miscreants that wander the top levels, the bottom ones, not so much, hehe." << endl
			<< "Old Guard: So adventurer, what is your name?" << endl << endl
			<< "My name is... ";
		cin >> Player.PlayerName;

		system("cls");
		HUD();
		cout << "Old Guard: Hello, " << Player.PlayerName << ". You have travelled a long way." << endl
			<< "Old Guard: Before I open the dungeon for you, there is something we must discuss." << endl
			<< "Old Guard: Firstly, what path has the Gods given you?" << endl << endl
			<< "Enter 1 for the Berserker, exceptional skill with weapons. Quick offensive learning ability." << endl
			<< "Enter 2 for the Tactician, a mastermind that forms impenetrable defenses." << endl
			<< "Enter 3 for the Immortal, an undying warrior who can to regenerate his wounds" << endl
			<< "Enter 4 for the Forsaken, whom which the three Dungeon Gods ignore... for the most part." << endl << endl
			<< "The follow the path of the... ";
		cin >> x;
		if (x == 1)
		{
			Player.Soul = "Berserker";
			system("cls");
			HUD();

			cout << "Old Guard: So Xain, the Dungeon God of Attack is letting you take his trial, I'm sure you'll do well, berserker." << endl
				<< "Old Guard: Take my old knife and tunic. I won't be needing them..." << endl << endl;

			Weapon.ItemColor = "Tarnished Grey";
			Weapon.ItemName = "Dirk";
			Player.Atk = Player.Atk + 15;
			Armor.ItemColor = "Tattered Brown";
			Armor.ItemName = "Tunic";
			Player.Def = Player.Def + 10;
			system("pause");

			system("cls");
			HUD();

			cout << "Old Guard: That's everything, on your way, now. " << endl << endl
				<< "The old man opens the dungeon gate for you. Beyond the door is mereley a torchlit stairwell." << endl
				<< "As you enter, the gate is shut behind you and a mechanical lock clicks. You realize that the only" << endl
				<< "direction you will travel for the rest of your life is into the depths of the dungeon." << endl << endl;
			system("pause");
		}
		if (x == 2)
		{
			Player.Soul = "Tactician";
			system("cls");
			HUD();

			cout << "Old Guard: So Dalra, the Dungeon God of Defense is letting you take its trial, I'm sure you'll do well, tactician." << endl
				<< "Old Guard: Take my old sling and tunic. I won't be needing them..." << endl << endl;

			Weapon.ItemColor = "Tarnished Grey";
			Weapon.ItemName = "Sling";
			Player.Atk = Player.Atk + 10;
			Armor.ItemColor = "Tattered Brown";
			Armor.ItemName = "Tunic";
			Player.Def = Player.Def + 15;
			system("pause");

			system("cls");
			HUD();

			cout << "Old Guard: That's everything, on your way, now. " << endl << endl
				<< "The old man opens the dungeon gate for you. Beyond the door is mereley a torchlit stairwell." << endl
				<< "As you enter, the gate is shut behind you and a mechanical lock clicks. You realize that the only" << endl
				<< "direction you will travel for the rest of your life is into the depths of the dungeon.";
			system("pause");
		}
		if (x == 3)
		{
			Player.Soul = "Immortal";
			system("cls");
			HUD();

			cout << "Old Guard: So Sophera, the Dungeon God of Health is letting you take her trial, I'm sure you'll do well, immortal." << endl
				<< "Old Guard: Take my old pick and tunic. I won't be needing them..." << endl << endl;

			Weapon.ItemColor = "Tarnished Grey";
			Weapon.ItemName = "Pick";
			Player.Atk = Player.Atk + 13;
			Armor.ItemColor = "Tattered Brown";
			Armor.ItemName = "Tunic";
			Player.Def = Player.Def + 12;
			system("pause");

			system("cls");
			HUD();

			cout << "Old Guard: That's everything, on your way, now. " << endl << endl
				<< "The old man opens the dungeon gate for you. Beyond the door is mereley a torchlit stairwell." << endl
				<< "As you enter, the gate is shut behind you and a mechanical lock clicks. You realize that the only" << endl
				<< "direction you will travel for the rest of your life is into the depths of the dungeon.";
			system("pause");
		}
		if (x == 4)
		{
			Player.Soul = "Forsaken";
			system("cls");
			HUD();

			cout << "Old Guard: So you follow no path. Interesting to say the least." << endl
				<< "Old Guard: Take my old stick and tunic. I won't be needing them..." << endl << endl;

			Weapon.ItemColor = "Tarnished Grey";
			Weapon.ItemName = "Stick";
			Player.Atk = Player.Atk + 10;
			Armor.ItemColor = "Tattered Brown";
			Armor.ItemName = "Tunic";
			Player.Def = Player.Def + 10;
			system("pause");

			system("cls");
			HUD();

			cout << "Old Guard: That's everything. On your way, now. " << endl << endl
				<< "The old man opens the dungeon gate for you. Beyond the door is mereley a torchlit stairwell." << endl
				<< "As you enter, the gate is shut behind you and a mechanical lock clicks. You realize that the only" << endl
				<< "direction you will travel for the rest of your life is into the depths of the dungeon.";
			system("pause");
		}

		break;
	}
	};
	while (exit == 0)
	{
		system("cls");
		HUD();
		cout << "The chamber you are in has 3 paths." << endl << endl
			<< "Enter 1 to descend the forward stairwell." << endl << "Enter 2 to descend the left stairwell." << endl
			<< "Enter 3 to descend the right stairwell." << endl << endl << "Enter 0 to exit the dungeon." << endl;

		cin >> x;
		system("cls");
		HUD();
		if (x == 0)
		{
			cout << "You have committed suicide and your journey ends." << endl;
			exit = 1;
		}
		if (x == 1)
		{
			cout << "You reach a door in the forward stairwell and enter the chamber beyond." << endl; 
			system("pause");
			RmGen();
		}
		if (x == 2)
		{
			cout << "You reach a door in the left stairwell and enter the chamber beyond." << endl;
			system("pause");
			RmGen();
		}
		if (x == 3)
		{
			cout << "You reach a door in the right stairwell and enter the chamber beyond." << endl;
			system("pause");
			RmGen();
		}
		if (Player.Hlth <= 0|| restart == 2)
		{
			string PlayerScoreRef = Player.PlayerName;
			vector<vector<string>> scores = createVector("highscores.txt");
			outputScores(scores);
			vector<string> newScore{ PlayerScoreRef, to_string(Score) };
			scores = updateVector(scores, newScore);
			outputScores(scores);
			saveToFile(scores, "highscores.txt");
			++exit;
		}
		if (restart == 1)
		{
			string PlayerScoreRef = Player.PlayerName;
			vector<vector<string>> scores = createVector("highscores.txt");
			outputScores(scores);
			vector<string> newScore{ PlayerScoreRef, to_string(Score) };
			scores = updateVector(scores, newScore);
			outputScores(scores);
			saveToFile(scores, "highscores.txt");
			main();
		}
	}
}
