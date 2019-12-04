#include "Aussie.h"

Aussie::Aussie()
{
}


Aussie::~Aussie()
{
}

void Aussie::feedAussie(Aussie& aus)
{
	aus.hunger -= 2;
	aus.happiness++;
	aus.sanity++;
}

void Aussie::waterAussie(Aussie& aus)
{
	aus.thirst -= 2;
	aus.happiness++;
	aus.sanity++;
}

void Aussie::abuseAussie(Aussie& aus)
{
	aus.happiness -= 2;
	aus.sanity--;
}

void Aussie::coddleAussie(Aussie& aus)
{
	aus.happiness += 2;
	aus.sanity--;
}