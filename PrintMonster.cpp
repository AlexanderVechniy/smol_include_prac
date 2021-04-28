#include "struct.h"
#include <iostream>

std::string GetMonsterType(MonsterType m);

void PrintMonster(Monster m)
{
	std::cout << "This " << GetMonsterType(m.type) << " is named";
	std::cout << " " << m.name << " and has " << m.hp << " health." << std::endl;
}
