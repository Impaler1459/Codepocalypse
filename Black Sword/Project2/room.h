#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "player.h"

using namespace std;

/*

**** CREATES ENEMIES, CHANGES PLAYER PARAMETERS, STEP BY STEP COMBAT, HEAVY LIFTING OF GAME ****

enemy room (4/10)
trap room (1/10)
health refill room(1/10)
special item room (1/10)
boss room (1/10)
auto level room (1/10)
empty room (1/10)

*/

int restart;

void NewWeapon()//weapon
{
	srand((unsigned)time(NULL));
	int b = rand() % 5 + 1; // room probabilities

	if (Player.Soul == "Berserker")
	{
		if (b == 1)
		{
			Armor.ItemName = "Shortsword";
			Player.Atk = Player.Atk + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Hatchet";
			Player.Atk = Player.Atk + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Longsword";
			Player.Atk = Player.Atk + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "E-Tool";
			Player.Atk = Player.Atk + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Battle Axe";
			Player.Atk = Player.Atk + RmNum * 1.3;
		}
	}
	if (Player.Soul == "Tactician")
	{
		if (b == 1)
		{
			Armor.ItemName = "Shortbow";
			Player.Atk = Player.Atk + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Crossbow";
			Player.Atk = Player.Atk + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Longbow";
			Player.Atk = Player.Atk + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Compoundbow";
			Player.Atk = Player.Atk + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Warbow";
			Player.Atk = Player.Atk + RmNum * 1.3;
		}
	}
	if (Player.Soul == "Immortal" )
	{
		if (b == 1)
		{
			Armor.ItemName = "Stake";
			Player.Atk = Player.Atk + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Spear";
			Player.Atk = Player.Atk + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Ahlspeiss";
			Player.Atk = Player.Atk + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Glaive";
			Player.Atk = Player.Atk + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Halberd";
			Player.Atk = Player.Atk + RmNum * 1.3;
		}
	}
	if (Player.Soul == "Forsaken" )
	{
		if (b == 1)
		{
			Armor.ItemName = "Cat of Nine Tails";
			Player.Atk = Player.Atk + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Club";
			Player.Atk = Player.Atk + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Mace";
			Player.Atk = Player.Atk + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Flail";
			Player.Atk = Player.Atk + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Morningstar";
			Player.Atk = Player.Atk + RmNum * 1.3;
		}
	}
}
void NewArmor()//armor
{
	srand((unsigned)time(NULL));
	int b = rand() % 5 + 1; // room probabilities

	if (Player.Soul == "Berserker" || Player.Soul == "Xain's Chosen One")
	{
		if (b == 1)
		{
			Armor.ItemName = "Robe";
			Player.Def = Player.Def + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Leathers";
			Player.Def = Player.Def + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Coif";
			Player.Def = Player.Def + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Bear Pelt";
			Player.Def = Player.Def + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Body Paint";
			Player.Def = Player.Def + RmNum * 1.3;
		}
	}
	if (Player.Soul == "Tactician" || Player.Soul == "Fortress of Dalra")
	{
		if (b == 1)
		{
			Armor.ItemName = "Cape";
			Player.Def = Player.Def + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Leathers";
			Player.Def = Player.Def + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Coif";
			Player.Def = Player.Def + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Hauberk";
			Player.Def = Player.Def + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Scalemail";
			Player.Def = Player.Def + RmNum * 1.3;
		}
	}
	if (Player.Soul == "Immortal" || Player.Soul == "Sophera's Undying Guardian")
	{
		if (b == 1)
		{
			Armor.ItemName = "Cloak";
			Player.Def = Player.Def + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Leathers";
			Player.Def = Player.Def + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Chainmail";
			Player.Def = Player.Def + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Cuirass";
			Player.Def = Player.Def + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Platemail";
			Player.Def = Player.Def + RmNum * 1.3;
		}
	}
	if (Player.Soul == "Forsaken" || Player.Soul == "Unholy One")
	{
		if (b == 1)
		{
			Armor.ItemName = "Rags";
			Player.Def = Player.Def + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Leathers";
			Player.Def = Player.Def + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Coif";
			Player.Def = Player.Def + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Huaberk";
			Player.Def = Player.Def + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Platemail";
			Player.Def = Player.Def + RmNum * 1.3;
		}
	}
}

void NewWeapon2()//weapon
{
	srand((unsigned)time(NULL));
	int a = rand() % 5 ; // weapon title names
	int b = rand() % 5 + 1; // room probabilities

	if ( Player.Soul == "Xain's Chosen One")
	{
		if (b == 1)
		{
			Armor.ItemName = "Pen";
			Player.Atk = Player.Atk + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Calculator";
			Player.Atk = Player.Atk + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Katana";
			Player.Atk = Player.Atk + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "E-Tool";
			Player.Atk = Player.Atk + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Pole Axe";
			Player.Atk = Player.Atk + RmNum * 1.3;
		}

		vector <string> WpnTtl;
		WpnTtl.push_back("Of Destruction");
		WpnTtl.push_back("Of the Conqueror");
		WpnTtl.push_back("Of Rage");
		WpnTtl.push_back("Of Blood");
		WpnTtl.push_back("Of Ashes");
		Weapon.ItemLegend = WpnTtl.at(a);
		WpnTtl.clear();
	}
	if ( Player.Soul == "Fortress of Dalra")
	{
		if (b == 1)
		{
			Armor.ItemName = "Nail Gun";
			Player.Atk = Player.Atk + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Five-Seven";
			Player.Atk = Player.Atk + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "AK-47";
			Player.Atk = Player.Atk + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "M-60 Machine Gun";
			Player.Atk = Player.Atk + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "M2 Caliber .50";
			Player.Atk = Player.Atk + RmNum * 1.3;
		}

		vector <string> WpnTtl;
		WpnTtl.push_back("Of Reciprocation");
		WpnTtl.push_back("Of Perforation");
		WpnTtl.push_back("Of the Unconquerable");
		WpnTtl.push_back("Of the Penetrator");
		WpnTtl.push_back("Of the Executioner");
		Weapon.ItemLegend = WpnTtl.at(a);
		WpnTtl.clear();
	}
	if ( Player.Soul == "Sophera's Undying Guardian")
	{
		if (b == 1)
		{
			Armor.ItemName = "Harpoon";
			Player.Atk = Player.Atk + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Triangle Sword";
			Player.Atk = Player.Atk + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Flamberge";
			Player.Atk = Player.Atk + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Lance";
			Player.Atk = Player.Atk + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Scythe";
			Player.Atk = Player.Atk + RmNum * 1.3;
		}

		vector <string> WpnTtl;
		WpnTtl.push_back("Of the Sephir");
		WpnTtl.push_back("Of Angels");
		WpnTtl.push_back("Of Immortality");
		WpnTtl.push_back("Of the Persuer");
		WpnTtl.push_back("Of the Chosen");
		Weapon.ItemLegend = WpnTtl.at(a);
		WpnTtl.clear();
	}
	if ( Player.Soul == "Unholy One")
	{
		if (b == 1)
		{
			Armor.ItemName = "Flog";
			Player.Atk = Player.Atk + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Sledge Hammer";
			Player.Atk = Player.Atk + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Stick With a Cat Tied to the End";
			Player.Atk = Player.Atk + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Amputated Leg";
			Player.Atk = Player.Atk + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Skillet";
			Player.Atk = Player.Atk + RmNum * 1.3;
		}

		vector <string> WpnTtl;
		WpnTtl.push_back("Of Dessication");
		WpnTtl.push_back("Of Pestilence");
		WpnTtl.push_back("Of Famine");
		WpnTtl.push_back("Of the Blasphemer");
		WpnTtl.push_back("Of Shadows");
		Weapon.ItemLegend = WpnTtl.at(a);
		WpnTtl.clear();

	}
}
void NewArmor2()//armor
{
	srand((unsigned)time(NULL));
	int a = rand() % 5 ; // weapon title names
	int b = rand() % 5 + 1; // room probabilities

	if (Player.Soul == "Xain's Chosen One")
	{
		if (b == 1)
		{
			Armor.ItemName = "Wolf Pelt";
			Player.Def = Player.Def + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Kilt";
			Player.Def = Player.Def + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Fire Shroud";
			Player.Def = Player.Def + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Lava Carapace";
			Player.Def = Player.Def + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Dragon Pelt";
			Player.Def = Player.Def + RmNum * 1.3;
		}

		vector <string> ArmTtl;
		ArmTtl.push_back("Of the Tyrant");
		ArmTtl.push_back("Of Volcanoes");
		ArmTtl.push_back("Of Destruction");
		ArmTtl.push_back("Of the Warlord");
		ArmTtl.push_back("Of the Emperor");
		Armor.ItemLegend = ArmTtl.at(a);
		ArmTtl.clear();
	}
	if (Player.Soul == "Fortress of Dalra")
	{
		if (b == 1)
		{
			Armor.ItemName = "Lingerie";
			Player.Def = Player.Def + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Parachute Pants";
			Player.Def = Player.Def + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Bikini";
			Player.Def = Player.Def + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Motorcycle Leathers";
			Player.Def = Player.Def + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Bomber Jacket";
			Player.Def = Player.Def + RmNum * 1.3;
		}

		vector <string> ArmTtl;
		ArmTtl.push_back("Of the Serpent");
		ArmTtl.push_back("Of the Voracious");
		ArmTtl.push_back("Of the World Ender");
		ArmTtl.push_back("Of Invisivility");
		ArmTtl.push_back("Of Devouring");
		Armor.ItemLegend = ArmTtl.at(a);
		ArmTtl.clear();
	}
	if (Player.Soul == "Sophera's Undying Guardian")
	{
		if (b == 1)
		{
			Armor.ItemName = "Bath Towel";
			Player.Def = Player.Def + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Skirt";
			Player.Def = Player.Def + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "Toga";
			Player.Def = Player.Def + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Buisness Suit";
			Player.Def = Player.Def + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Starched Buisness Suit";
			Player.Def = Player.Def + RmNum * 1.3;
		}

		vector <string> ArmTtl;
		ArmTtl.push_back("Of the Untainted");
		ArmTtl.push_back("Of the Rake");
		ArmTtl.push_back("Of Forgiveness");
		ArmTtl.push_back("Of Radiation");
		ArmTtl.push_back("Of Bodybuilding");
		Armor.ItemLegend = ArmTtl.at(a);
		ArmTtl.clear();
	}
	if (Player.Soul == "Unholy One")
	{
		if (b == 1)
		{
			Armor.ItemName = "Gauntlets";
			Player.Def = Player.Def + RmNum * 0.8;
		}
		if (b == 2)
		{
			Armor.ItemName = "Turtle Neck and Chain";
			Player.Def = Player.Def + RmNum * 0.9;
		}
		if (b == 3)
		{
			Armor.ItemName = "ACU";
			Player.Def = Player.Def + RmNum * 1.1;
		}
		if (b == 4)
		{
			Armor.ItemName = "Fighter Shorts";
			Player.Def = Player.Def + RmNum * 1.2;
		}
		if (b == 5)
		{
			Armor.ItemName = "Human Pelt";
			Player.Def = Player.Def + RmNum * 1.3;
		}

		vector <string> ArmTtl;
		ArmTtl.push_back("Of Darkness");
		ArmTtl.push_back("Of the Calcified");
		ArmTtl.push_back("Of Masochism");
		ArmTtl.push_back("Of Nudity");
		ArmTtl.push_back("Of the Cavedweller");
		Armor.ItemLegend = ArmTtl.at(a);
		ArmTtl.clear();

	}
}

inline void RmGen()
{

	srand((unsigned)time(NULL));
	int x = rand() % 10 + 1; // room spawn chance
	int a = rand() % 9 + 5; // enemy taunts/health room chance
	int b = rand() % 5 + 1; // room probabilities
	int o = rand() % 10; //special item/class chances
	int r = rand() % 5; // lazy vector fix
	int RmCbt = 0;

	

	if (x <= 4)//enemy room
	{
		srand((unsigned)time(0));
		int num1 = rand() % 5 + 1;
		int num2 = rand() % 5 + 1;
		int RA = (rand() % 10 + RmNum);
		int RD = (rand() % 10 + RmNum);

		Enemy.Hlth = 100 + RmNum * 10;
		Enemy.Atk = RA + RmNum * 1.2;
		Enemy.Def = RD + RmNum * 1.2;

		// FIRST NAME MODIFIERS ~~~~~~~
		if (num1 == 1)
		{
			Enemy.CharFName = "Logan";
			Enemy.Atk = Enemy.Atk + 1;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num1 == 2)
		{
			Enemy.CharFName = "Nathan";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 1;
		}
		if (num1 == 3)
		{
			Enemy.CharFName = "Jacob";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num1 == 4)
		{
			Enemy.CharFName = "Amy";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num1 == 5)
		{
			Enemy.CharFName = "Saoirse";
			Enemy.Atk = Enemy.Atk + 1;
			Enemy.Def = Enemy.Def + 1;
		}

		//******* LAST NAME MODIFIERS ~~~~~~~~
		if (num2 == 1)
		{
			Enemy.CharLName = "Aurelius";
			Enemy.Atk = Enemy.Atk + 0;
			Enemy.Def = Enemy.Def + 3;
		}
		if (num2 == 2)
		{
			Enemy.CharLName = "Purcell";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num2 == 3)
		{
			Enemy.CharLName = "Pixler";
			Enemy.Atk = Enemy.Atk + 1;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num2 == 4)
		{
			Enemy.CharLName = "Rawlins";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 1;
		}
		if (num2 == 5)
		{
			Enemy.CharLName = "Guiness";
			Enemy.Atk = Enemy.Atk + 1;
			Enemy.Def = Enemy.Def + 1;
		}

		system("cls");
		EHUD();
		cout << "You are confronted by " << Enemy.CharFName << " " << Enemy.CharLName << "!" << endl;

		//******** ENEMY TAUNTS ~~~~~~~
		if (a == 5)
		{
			cout << Enemy.CharFName << ": Prepare to die!" << endl << endl;
		}
		if (a == 6)
		{
			cout << Enemy.CharFName << ": I will wear you like a cloak!" << endl << endl;
		}
		if (a == 7)
		{
			cout << Enemy.CharFName << ": Fancy meeting you here." << endl << endl;
		}
		if (a == 8)
		{
			cout << Enemy.CharFName << ": You look lost, let me show you the exit..." << endl << endl;
		}
		if (a == 9)
		{
			cout << Enemy.CharFName << ": You have some nice thing, mind if I tske them?" << endl << endl;
		}

		system("pause");

		while (RmCbt == 0)
		{

			system("cls");
			EHUD();

			EnAtk();
			PlrAtk();

			system("pause");

			if (Enemy.Hlth < 1 && Player.Hlth > 0)
			{
				double EnP = (100 + RmNum * 10) * 0.05; // enemy exp value
					EP = EP + EnP; // accumulates enemy exp 
					ScoreFunc(EnP);
				
				cout << Enemy.CharFName << " " << Enemy.CharLName << " is dead!" << endl
					<< "You gained " << EnP << " experience points!" << endl << endl
					<< "Victorious, you continue your descent." << endl << endl;

				system("pause");

				system("cls");
				HUD();
					
				++RmNum;
				++RmCbt;
			}
			if (Player.Hlth < 1)
			{
				Player.Hlth = 0;
				system("cls");
				EHUD();
				cout << Enemy.CharFName << " " << Enemy.CharLName << " has slain you." << endl
					<< "Your score is " << Score << endl << endl
					<< "Enter 1 to accept reincarnation. " << endl << "Enter 0 to accep death." << endl << endl;
					cin >> restart;
					Rstrt(restart);
					++RmCbt;
			}
		}
	}
	if (x == 5) // trap room, ready for beta debug
	{
		int TrpDmg = Player.Hlth * 0.65;
		Player.Hlth = Player.Hlth - TrpDmg;
		system("cls");
		HUD();

		if (a == 5)
		{
			cout << "As you descend the steps, a spike shoots out of the wall and impales your forearm." << endl
				<< "Determined to continue, you remove the spike and staunch your wound." << endl << endl
				<< "You have taken " << TrpDmg << " damage from your injury." << endl << endl;
		}
		if (a == 6)
		{
			cout << "You enter an empty room and suddenly feel a chill through your body." << endl
				<< "Your mind is overtaken with visions of death. During a tyrade of self inflicted wounds, " << endl
				<< "you regain your sanity and spot a cackling skull that disappears into blue flames." << endl
				<< "Mentally exhausted and physically mutilated, you are compelled to further descend." << endl << endl
				<< "You have taken " << TrpDmg << " damage from your injuries and you have become insane." << endl << endl;
			Player.Atk = Player.Atk * 2;
			Player.Def = Player.Def * 0.5;
		}
		if (a == 7)
		{
			cout << "In the dark dungeon, a wellspring glows." << endl
				<< "While bathing, you are visited by a mermaid and suddenly you feel very tired." << endl
				<< "Just before you fall asleep, you see the mermaid turn into a horrible creature that begins to" << endl 
				<< "devour your flesh. You awaken in red water with no sign of the mermaid but the wounds left behind." << endl << endl
				<< "You have taken " << TrpDmg << " damage from your injuries." << endl << endl;
		}
		if (a == 8)
		{
			cout << "You are confronted by an old man. He tells you tales of glorious battle and beautiful women. " << endl
				<< "While listening to his story you are struck from behing and are knocked unconsious." << endl
				<< "You awaken with your feet bound and you are hung by your arms to the cieling. You can hear uncountable" << endl
				<< "howls of pain echo from the halls. A large man in an executioner's mask approches you and informs you" << endl
				<< "that you are admitted into an underground prison and that you will soon be released..." << endl
				<< "On the condition that the executioner has his way with you. Unable to resist, the executioner carves at" << endl
				<< "your flesh and devours the peices. You drift into a dissociative trance as the executioner abuses you" << endl
				<< "for several weeks. Upon release you are emaciated." << endl << endl
				<< "You have taken " << TrpDmg << " damage from your injuries and have gained the tolerance for great pain." << endl << endl;
			Player.Atk = Player.Atk * 0.5;
			Player.Def = Player.Def * 2;
		}
		if (a == 9)
		{
			
			Player.Hlth = 0;
			system("cls");
			HUD();
			cout << "While descending, you are visited by Xain, the Dungeon God of Attack." << endl
				<< "He tells you that your end has come. Before you have the opportunity to protest, you are engulfed in" << endl
				<< "a spiral of fire and the floor falls away. Your flesh burns as you fall for sevaral minutes." << endl
				<< "You collide with the ground and your body is crushed. After several seconds you reform as you were before you fell." << endl
				<< "You are in a vast wasteland of desert with wailing heads strewn across the sand. As far as you can see there are" << endl
				<< "columns of screaming adventurers, unable to die, impaled together with spikes intruding every joint and orifice." << endl
				<< "The columns merge into a ceiling of boiling lava that never falls. A red haze taints the air. " << endl
				<< "Before you is a dragon that informs you that you have been damned to an eternity in Xains pleasure chamber." << endl
				<< "Several spikes impale you and pin you to a column where you spend the rest of time screaming in pain." << endl << endl
				<< "Your journey has ended." << endl << endl;
			system("pause");
				cout << endl << endl<< "Your score is " << Score << endl << endl
				<< "Enter 1 to reincarnate. " << endl << "Enter 0 to accep death." << endl << endl;
			cin >> restart;
			Rstrt(restart);
		}
		system("pause");
	}
	if (x == 6) // health room
	{
		system("cls");
		HUD();

		vector <string> HlthRm; 
		HlthRm.push_back("In the dark dungeon, a wellspring glows. \nWhile bathing, you are visited by a beautiful mermaid who restores your body and mind. \nRefreshed, you continue your advance.");
		HlthRm.push_back("Sophera, the Dungeon God of Health, has given you a kiss.");
		HlthRm.push_back("You enter a chamber full of naked beautiful women who show you the path to the holy grail.");
		HlthRm.push_back("The chamber you enter has a fountain of beer. \nWithin the fountain, voluptuous women drink and converse. You join them and are revitalized. ");
		HlthRm.push_back("This chamber contains a skeleton wearing a cloak. It tells you it is tired of living and gives you its life force.");

		cout << HlthRm.at(r) << endl 
			<< "You gained " << RmNum*15 << " health." << endl << endl;

		HlthRm.clear();
		Player.Hlth = Player.Hlth + RmNum*15;
		++RmNum;
		system("pause");
		//refills health
	}
	if (x == 7) //boss room ready for debug
	{
		srand((unsigned)time(0));
		int num1 = rand() % 5 + 1;
		int num2 = rand() % 5 + 1;

		int RA = (rand() % 10 + RmNum);
		int RD = (rand() % 10 + RmNum);

		Enemy.Hlth = 100 + RmNum * 20;
		Enemy.Atk = RA + RmNum * 2;
		Enemy.Def = RD + RmNum * 2;

		// FIRST NAME MODIFIERS ~~~~~~~
		if (num1 == 1)
		{
			Enemy.CharFName = "Jormungandr";
			Enemy.Atk = Enemy.Atk + 1;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num1 == 2)
		{
			Enemy.CharFName = "Bandit";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 1;
		}
		if (num1 == 3)
		{
			Enemy.CharFName = "Bones";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num1 == 4)
		{
			Enemy.CharFName = "Bloodhound";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num1 == 5)
		{
			Enemy.CharFName = "Stalker";
			Enemy.Atk = Enemy.Atk + 1;
			Enemy.Def = Enemy.Def + 1;
		}

		//******* LAST NAME MODIFIERS ~~~~~~~~
		if (num2 == 1)
		{
			Enemy.CharLName = "Bathory";
			Enemy.Atk = Enemy.Atk + 0;
			Enemy.Def = Enemy.Def + 3;
		}
		if (num2 == 2)
		{
			Enemy.CharLName = "Tepes";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num2 == 3)
		{
			Enemy.CharLName = "Hitler";
			Enemy.Atk = Enemy.Atk + 1;
			Enemy.Def = Enemy.Def + 2;
		}
		if (num2 == 4)
		{
			Enemy.CharLName = "Stalin";
			Enemy.Atk = Enemy.Atk + 2;
			Enemy.Def = Enemy.Def + 1;
		}
		if (num2 == 5)
		{
			Enemy.CharLName = "Mattis";
			Enemy.Atk = Enemy.Atk + 1;
			Enemy.Def = Enemy.Def + 1;
		}

		system("cls");
		EHUD();
		cout << "boss2" << endl << endl; // bug identifier
		cout << "You enter the chamber of the Warlord " << Enemy.CharFName << " " << Enemy.CharLName << "!" << endl;

		//******** ENEMY TAUNTS ~~~~~~~
		if (a == 5)
		{
			cout << Enemy.CharFName << ": I will drink your blood for nourishment." << endl << endl;
		}
		if (a == 6)
		{
			cout << Enemy.CharFName << ": Your soul belongs to me." << endl << endl;
		}
		if (a == 7)
		{
			cout << Enemy.CharFName << ": I hope you enjoy pain." << endl << endl;
		}
		if (a == 8)
		{
			cout << Enemy.CharFName << ": Prepare to be my sacrifice." << endl << endl;
		}
		if (a == 9)
		{
			cout << Enemy.CharFName << ": You will be a fine addition to my trophy collection." << endl << endl;
		}

		system("pause");

		while (RmCbt == 0)
		{

			system("cls");
			EHUD();
			cout << "boss3" << endl << endl; // bug identifier
			EnAtk();
			PlrAtk();

			system("pause");

			if (Enemy.Hlth < 1 && Player.Hlth > 0)
			{
				double EnP = (100 + RmNum * (rand()%11+6)) * 0.1; // enemy exp value
				EP = EP + EnP; // accumulates enemy exp 
				++RmNum;
				ScoreFunc(EnP);
				
				system("cls");
				HUD();
				cout << Enemy.CharFName << " " << Enemy.CharLName << " is dead!" << endl
					<< "You gained " << EnP << " experience points!" << endl
					<< "Victorious, you continue your descent." << endl;
				++RmCbt;
				system("pause");
			}
			if (Player.Hlth < 1)
			{
				Player.Hlth = 0;
				system("cls");
				EHUD();
				cout << Enemy.CharFName << " " << Enemy.CharLName << " has slain you." << endl
					<< "Your score is " << Score << endl << endl
					<< "Enter 1 to accept reincarnation. " << endl << "Enter 0 to accep death." << endl << endl;
				cin >> restart;
				Rstrt(restart);
				++RmCbt;
			}
		}
	}
	if (x == 8)// level up room, ready for beta debug
	{
		system("cls");
		HUD();
		cout << "lvl" << endl << endl; // bug identifier
		if (Player.Soul == "Berserker")
		{
			cout << "You enter a warm chamber. Xain appears and gives you a gift of fire." << endl << endl;
		}
		if (Player.Soul == "Tactician")
		{
			cout << "You enter a dirty chamber. Dalra appears and gives you a gift of earth." << endl << endl;
		}
		if (Player.Soul == "Immortal")
		{
			cout << "You enter a cool chamber. Sephera appears and gives you a gift of light." << endl << endl;
		}
		if (Player.Soul == "Forsaken")
		{
			cout << "You enter a dim chamber and rest." << endl << endl;
		}
		if (Player.Soul == "Xain's Chosen One")
		{
			cout << "You enter a glowing hot chamber. Xain appears and gives you a gift of fire." << endl << endl;
		}
		if (Player.Soul == "Fortress of Dalra")
		{
			cout << "You enter a chamber full of rocks. Dalra appears and gives you a gift of earth." << endl << endl;
		}
		if (Player.Soul == "Sophera's Undying Guardian")
		{
			cout << "You enter a freezing cold chamber. Sophera appears and gives you a gift of light." << endl << endl;
		}
		if (Player.Soul == "Unholy One")
		{
			cout << "You enter a dark chamber and meditate." << endl << endl;
		}
		system("pause");
		PlrLvl();
		++RmNum;
	}
	if (x == 9)		// empty room
	{
		system("cls");
		HUD();

		vector <string> NullRm;
		NullRm.push_back("There is nothing of interest in this chamber.");
		NullRm.push_back("This chamber is empty.");
		NullRm.push_back("You only see a scurrying rat in this chamber.");
		NullRm.push_back("Nothing is in this chamber.");
		NullRm.push_back("This chamber holds nothing of interest to you.");

		cout << NullRm.at(r) << endl << endl;
		NullRm.clear();

		++RmNum;
		system("pause");
	}
	if (x == 10) // special item room
	{
		system("cls");
		HUD();
		if (a >= 5 && a <=6)//slight increase in stats
		{
			if (Player.Soul ==  "Berserker" || Player.Soul == "Tactician" || Player.Soul == "Immortal" || Player.Soul == "Forsaken" )
			{
				if (o == 0)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Shining";
					NewWeapon();
					Player.Atk = Player.Atk + RmNum * 0.8;
				}
				if (o == 1)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Steel";
					NewWeapon();
					Player.Atk = Player.Atk + RmNum * 0.9;
				}
				if (o == 2)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Sharp";
					NewWeapon();
					Player.Atk = Player.Atk + RmNum * 1.1;
				}
				if (o == 3)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Anodized";
					NewWeapon();
					Player.Atk = Player.Atk + RmNum * 1.2;
				}
				if (o == 4)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Heavy";
					NewWeapon();
					Player.Atk = Player.Atk + RmNum * 1.3;
				}
				if (o == 5)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Armor.ItemColor = "Shining";
					NewArmor();
					Player.Def = Player.Def + RmNum * 0.8;
				}
				if (o == 6)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Armor.ItemColor = "Anodized";
					NewArmor();
					Player.Def = Player.Def + RmNum * 1.2;
				}
				if (o == 7)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Weapon.ItemColor = "Hardened";
					NewArmor();
					Player.Def = Player.Def + RmNum * 1.1;
				}
				if (o == 8)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Weapon.ItemColor = "Unbreakable";
					NewArmor();
					Player.Def = Player.Def + RmNum * 1.3;
				}
				if (o == 9)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Weapon.ItemColor = "Forged";
					NewArmor();
					Player.Def = Player.Def + RmNum * 0.9;
				}
			}
			if (Player.Soul == "Xain's Chosen One" || Player.Soul == "Fortress of Dalra" || Player.Soul == "Sophera's Undying Guardian" || Player.Soul == "Unholy One" ) // update for secondary classes
			{
				if (o == 0)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Obsidian";
					NewWeapon2();
					Player.Atk = Player.Atk + RmNum * 0.8;
				}
				if (o == 1)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Mythril";
					NewWeapon2();
					Player.Atk = Player.Atk + RmNum * 0.9;
				}
				if (o == 2)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Frost";
					NewWeapon2();
					Player.Atk = Player.Atk + RmNum * 1.1;
				}
				if (o == 3)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Lighting";
					NewWeapon2();
					Player.Atk = Player.Atk + RmNum * 1.2;
				}
				if (o == 4)
				{
					cout << "You stumble across a corpse and take its weapon." << endl;
					Weapon.ItemColor = "Flaming";
					NewWeapon2();
					Player.Atk = Player.Atk + RmNum * 1.3;
				}
				if (o == 5)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Armor.ItemColor = "Stone";
					NewArmor2();
					Player.Def = Player.Def + RmNum * 0.8;
				}
				if (o == 6)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Armor.ItemColor = "Bladed";
					NewArmor2();
					Player.Def = Player.Def + RmNum * 1.2;
				}
				if (o == 7)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Weapon.ItemColor = "Mythril";
					NewArmor2();
					Player.Def = Player.Def + RmNum * 1.1;
				}
				if (o == 8)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Weapon.ItemColor = "Radiant";
					NewArmor2();
					Player.Def = Player.Def + RmNum * 1.3;
				}
				if (o == 9)
				{
					cout << "You stumble across a corpse and take its armor." << endl;
					Weapon.ItemColor = "Tempered";
					NewArmor2();
					Player.Def = Player.Def + RmNum * 0.9;
				}
			}
		}
		if (a >= 7 && a <=8 && Lvl > 25)//unique class
		{
			if (Player.Soul == "Berserker")
			{
				cout << "The chamber you enter is a whirlwind of fire but you are not burned." << endl
					<< "A lone figure of shadows calls at you from the middle of the vortex." << endl
					<< "He identifies himself as Xain, God of Attack, extends his hand and offers his blessing." << endl << endl
					<< "You have received the Boon of Fire." << endl << endl;
				Player.Soul = "Xain's Chosen One";
			}
			if (Player.Soul == "Tactician")
			{
				cout << "The chamber you enter is shining with walls of iron. The floor and walls are cluttered with broken" << endl
					<< "armor fragments. You notice a serpent the size of ten men with scales of rock peering at you" << endl
					<< "from within the clutter. It speaks its name. Dalra, the God of Defense offers its power to you." << endl << endl
					<< "You have received the Boon of Earth." << endl << endl;

					Player.Soul = "Fortress of Dalra";
			}
			if (Player.Soul == "Immortal")
			{
				cout << "The chamber you enter is shining with walls of ice, but you are not cold. An angelic figure emerges" << endl
					<< "from a door of light. It is a woman wearing a white waistcloth, her skin eminates gold light." << endl
					<< "She lets herself be known as Sephera, Goddess of Health. She offers you her light" << endl
					<< "and accepts you into her bosom." << endl << endl
					<< "You have recieved the Boon of Light." << endl << endl;

				Player.Soul = "Sophera's Undying Guardian";
			}
			if (Player.Soul == "Forsaken")
			{
				cout << "The chamber you enter is dark and empty. The light from the entrance fades and you are engulfed" << endl
					<< "in darkness. Alone, tired, and cold you sit against the wall and accept death. You fall asleep" << endl
					<< "and dream of the three Dungeon Gods. They are murdering innocents and copulating on top of the remains." << endl
					<< "Your purpose becomes clear, the Dungeon Gods must die. When you awaken, the room is illuminated." << endl << endl
					<< "You have received the Boon of Darkness." << endl << endl;

				Player.Soul = "Unholy One";
			}
			if (Player.Soul == "Xain's Chosen One")
			{
				cout << "As you advance, you consume the fire from a nearby torch." << endl << endl;
				Player.Atk = Player.Atk + RmNum * 1.5;
				Player.Def = Player.Def + RmNum * 0.5;
				Player.Hlth = Player.Hlth + RmNum * 0.5;
			}
			if (Player.Soul == "Fortress of Dalra")
			{
				cout << "The next chamber is strewn with corpses. You absorb them, leaving only the armor, and continue your journey." << endl << endl;
				Player.Def = Player.Def + RmNum * 1.5;
				Player.Atk = Player.Atk + RmNum * 0.5;
				Player.Hlth = Player.Hlth + RmNum * 0.5;
			}
			if (Player.Soul == "Sophera's Undying Guardian")
			{
				cout << "As you enter the next chamber your skin temporarily glows." << endl << endl;
				Player.Atk = Player.Atk + RmNum * 0.5;
				Player.Def = Player.Def + RmNum * 0.5;
				Player.Hlth = Player.Hlth + RmNum * 1.5;
			}
			if (Player.Soul == "Unholy One")
			{
				cout << "In the next chamber, you are confronted by an enemy and devour his soul." << endl << endl;
				Player.Atk = Player.Atk + RmNum * 1.2;
				Player.Def = Player.Def + RmNum * 1.2;
				Player.Hlth = Player.Hlth + RmNum * 1.2;
				Score = Score + RmNum * 1.2;
			}
		}
		if (a == 9 && Lvl > 30)// unique weapon and class
		{
			if (Player.Soul == "Berserker")
			{
				cout << "The chamber you enter is a whirlwind of fire but you are not burned." << endl
					<< "A lone figure of shadows calls at you from the middle of the vortex." << endl
					<< "He identifies himself as Xain, God of Attack. Xain points to equipment filled with" << endl
					<< "the ashes of his fallen champion and instructs you to arm yourself." << endl << endl
					<< "You have received the Boon of Immolation." << endl << endl;

				Player.Soul = "Xain's Chosen One";
				Weapon.ItemColor = "Black";
				Weapon.ItemName = "Sword";
				Weapon.ItemLegend = "Of Death";
				Armor.ItemColor = "Bloody";
				Armor.ItemName = "Platemail";
				Armor.ItemLegend = "Of the Impaler";
				Player.Atk = Player.Atk * 2;
				Player.Def = Player.Def * 2;
			}
			if (Player.Soul == "Tactician")
			{
				cout << "The chamber you enter is shining with walls of iron. The floor and walls are cluttered with broken" << endl
					<< "armor fragments. You notice a serpent the size of ten men with scales of rock peering at you" << endl
					<< "from within the clutter. It speaks its name. Dalra, the God of Defense instructs you to take the" << endl
					<< "place of its dead champion and points you to a set of unbroken equipment in a nearby heap." << endl << endl
					<< "You have received the Boon of Apocalypse." << endl << endl;

				Player.Soul = "Fortress of Dalra";
				Weapon.ItemColor = "Olive Drab";
				Weapon.ItemName = "PKM";
				Weapon.ItemLegend = "Of Singularity";
				Armor.ItemColor = "Stone";
				Armor.ItemName = "Scalemail";
				Armor.ItemLegend = "Of the Defender";
				Player.Atk = Player.Atk * 2;
				Player.Def = Player.Def * 2;
			}
			if (Player.Soul == "Immortal")
			{
				cout << "The chamber you enter is shining with walls of ice, but you are not cold. An angelic figure emerges" << endl
					<< "from a door of light. It is a woman wearing a white waistcloth, her skin eminates gold light." << endl
					<< "She lets herself be known as Sephera, Goddess of Health. She appoints you as her champion" << endl
					<< "and gives her body to empower your being." << endl << endl
					<< "You have recieved the Boon of Heavans." << endl << endl;

				Player.Soul = "Sophera's Undying Guardian";
				Weapon.ItemColor = "Rainbow";
				Weapon.ItemName = "War Scythe";
				Weapon.ItemLegend = "Of Light";
				Armor.ItemColor = "Guilded";
				Armor.ItemName = "Scalemail";
				Armor.ItemLegend = "Of the Champion";
				Player.Atk = Player.Atk * 2;
				Player.Def = Player.Def * 2;
			}
			if (Player.Soul == "Forsaken")
			{
				cout << "The chamber you enter is dark and empty. The light from the entrance fades and you are engulfed" << endl
					<< "in darkness. Alone, tired, and cold you sit against the wall and accept death. You fall asleep" << endl
					<< "and dream of the three Dungeon Gods. They are murdering innocents and copulating on top of the remains." << endl
					<< "Your purpose becomes clear, the Dungeon Gods must die. When you awaken, the darkness enshrouds" << endl
					<< "your body. Slowly it turns to liquid, then hardens. You can no longer see or hear, you are forver" << endl
					<< "trapped in the dark room. Guided by shadows to wander and kill." << endl << endl
					<< "You have received the Boon of Choas." << endl << endl;

				Player.Soul = "Unholy One";
				Weapon.ItemColor = "Flaming";
				Weapon.ItemName = "Axe";
				Weapon.ItemLegend = "Of Hatred";
				Armor.ItemColor = "Obsidian";
				Armor.ItemName = "Scalemail";
				Armor.ItemLegend = "Of the Leviathan";
				Player.Atk = Player.Atk * 2;
				Player.Def = Player.Def * 2;
			}
			if (Player.Soul == "Xain's Chosen One")
			{
				cout << "Xain channels more of his power into you." << endl << endl;
				Player.Atk = Player.Atk + RmNum * 2;
				Player.Def = Player.Def + RmNum * 0.8;
				Player.Hlth = Player.Hlth + RmNum * 0.8;
			}
			if (Player.Soul == "Fortress of Dalra")
			{
				cout << "Dalra channels more of its power into you." << endl << endl;
				Player.Def = Player.Def + RmNum * 2;
				Player.Atk = Player.Atk + RmNum * 0.8;
				Player.Hlth = Player.Hlth + RmNum * 0.8;
			}
			if (Player.Soul == "Sophera's Undying Guardian")
			{
				cout << "Sophera channels more of her power into you." << endl << endl;
				Player.Atk = Player.Atk + RmNum * 0.8;
				Player.Def = Player.Def + RmNum * 0.8;
				Player.Hlth = Player.Hlth + RmNum * 2;
			}
			if (Player.Soul == "Unholy One")
			{
				cout << "You are blinded by darkness and feel stronger when you regain your sight." << endl << endl;
				Player.Atk = Player.Atk + RmNum * 1.5;
				Player.Def = Player.Def + RmNum * 1.5;
				Player.Hlth = Player.Hlth + RmNum * 1.5;
				Score = Score + RmNum * 1.5;
			}
		}

		++RmNum;
		system("pause");
		
	}
}
