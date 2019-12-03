#pragma once
struct player
{
public:
	int health;
	int attack;
	int defense;
};

struct zombie
{
public:
	int health;
	int attack;
	int defense;
};

void battle(player _player, zombie _zombie);