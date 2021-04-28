#ifndef STRUCT_H
#define STRUCT_H

#include <string>
#include "enum.h"

struct Monster
{
	std::string name;
	MonsterType type;
	int hp;
};

#endif