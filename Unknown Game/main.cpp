#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <windows.h>
#include "enemy.cpp"
#include "weapon.cpp"
#include "armor.cpp"
#include "material.cpp"
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;
enemy e;
weapon w;
armor a;
material m;


int main(int argc, char** argv) {

	bool game;

	string playerName;
	string questGiver = "Verid";
	int numItems = 0;
	int maxItems = 10;
	string inv[maxItems];
	unsigned int money = 0;
	unsigned int baseHealth = 20;

	//..//

	do {
		//..//
		cout << "Which weapon do you want?\n";
		cout << "1. ";
		w.getWeapon();
		cout << "\n";

		cout << "2. ";
		w.getWeapon();
		cout << "\n";

		cout << "3. ";
		w.getWeapon();
		cout << "\n";

		int choose1;
		cin >> choose1;

		if(choose1 == 1){
			inv[numItems++] = w.getWeapon();
			cout << "\n";
			w.getWeapon();
			cout << " was added to your inventory.\n";
		}

		else if(choose1 == 2){
			inv[numItems++] = w.getWeapon();
			cout << "\n";
			w.getWeapon();
			cout << " was added to your inventory.\n";
		}

		else if(choose1 == 3){
			inv[numItems++] = w.getWeapon();
			cout << "\n";
			w.getWeapon();
			cout << " was added to your inventory.\n";
		}

		cout << "You walk to another side of the room, and see armor.\n\n";

		system("pause");
		system("cls");

		cout << "1. ";
		a.getArmor();
		cout << "\n";

		cout << "2. ";
		a.getArmor();
		cout << "\n";

		cout << "3. ";
		a.getArmor();
		cout << "\n\n";

		int choose2;
		cin >> choose2;

		if(choose2 == 1){
			inv[numItems++] = a.getArmor();
			cout << "\n";
			a.getArmor();
			cout << " was added to your inventory.\n";
		}

		else if(choose2 == 2){
			inv[numItems++] = a.getArmor();
			cout << "\n";
			a.getArmor();
			cout << " was added to your inventory.\n";
		}

		else if(choose2 == 3){
			inv[numItems++] = a.getArmor();
			cout << "\n";
			a.getArmor();
			cout << " was added to your inventory.\n";
		}

		//..//

		string choosePath1;

		do{
		cout << "Which way do you want to go? (right/left)\n";

		cin >> choosePath1;

		if(choosePath1 == "right"){
			//..//

			if(inv[0] == w.weapon_[0]){
				//..//
			}

			if(inv[0] == w.weapon_[1]){
				//..//
			}

			if(inv[0] == w.weapon_[2]){
				//..//
			}

			if(inv[0] == w.weapon_[3]){
				//..//
			}

			if(inv[0] == w.weapon_[4]){
				//..//
			}

			if(inv[0] == w.weapon_[5]){
				//..//
			}

			if(inv[0] == w.weapon_[6]){
				//..//
			}

			//..//

			string lookChest1;
			do{
			cout << "Do you want to look in the chest? (yes/no)\n";
			cin >> lookChest1;
			cout << "\n\n";

			if(lookChest1 == "yes"){
				cout << "You open the chest and find some loot.\n\n";
				money+5;
				cout << "You now have " << money << "coins.\n\n";

				inv[0] = w.getWeapon();
				cout << "You trade your current weapon for a(n) " << inv[0] << ".\n\n";

				inv[1] = a.getArmor();
				cout << "You trade your current armor for " << inv[1] << ".\n\n";
				break;
			}

			else if(lookChest1 == "no"){
				cout << "You decide not to look in the chest, and continue to walk on the path.";
				break;
			}
			else{
				cout << "Illegal answer!\n\n";
			}
		} while(lookChest1 != "yes" || "no");

		//..//

		}

		else if(choosePath1 == "left"){
			//..//
			cout << "You are now dead, laying there, baking in the sun.\n\n";
			cout << "The End.\n\n\n";

			Sleep(5000);
			string again;
			do{
			cout << "Do you want to play again? (yes/no)\n\n";
			cin >> again;
			cout << "\n\n";

			if(again == "yes"){
				cout << "Ok.";
				inv[numItems--];
				money = 0;
				baseHealth = 20;
			}

			else if (again == "no"){
				break;
			}
		} while(again != "yes" || "no");

		}

		else{
			cout << "\n\nNot one of the choices!\n\n";
		}
		} while(choosePath1 != "right" || "left");
		//..//

	} while(game == false);

	return 0;
}
