#include "enum.h"
#include <string>

std::string GetMonsterType(MonsterType mt)
{
	if (mt == MonsterType::ORC)
		return "orc";
	if (mt == MonsterType::GOBLIN)
		return "goblin";
	if (mt == MonsterType::HUMAN)
		return "human";
}