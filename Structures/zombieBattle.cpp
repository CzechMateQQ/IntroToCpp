#include "zombieBattle.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

void battle(player _player, zombie _zombie)
{
	cout << "Player stats:" << endl <<
			"Health: " << _player.health << endl <<
			"Attack: " << _player.attack << endl <<
			"Defense: " << _player.defense << endl;
	cout << "\nZombie stats: " << endl <<
			"Health: " << _zombie.health << endl <<
			"Attack: " << _zombie.attack << endl <<
			"Defense: " << _zombie.defense << endl;

	cout << "\nLet the battle begin!\n" << endl;

	system("pause");
	system("CLS");
	
	while (_player.health > 0 && _zombie.health > 0)
	{
		cout << "Player attacks Zombie for " << _player.attack - _zombie.defense << " damage." << endl;
		_zombie.health -= _player.attack - _zombie.defense;
		cout << "Zombie has " << _zombie.health << " remaining." << endl;
		cout << "\nZombie attacks Player for " << _zombie.attack - _player.defense << " damage." << endl;
		_player.health -= _zombie.attack - _player.defense;
		cout << "Player has " << _player.health << " remaining." << endl;

		system("pause");
		system("CLS");
	}

	if (_zombie.health <= 0)
	{
		cout << "Player wins!" << endl;
	}
	else
	{
		cout << "Zombie wins..." << endl;
	}
}