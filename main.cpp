#include "struct.h"

void PrintMonster(Monster m);

int main()
{
	Monster john{"John", MonsterType::HUMAN, 170};
	Monster james = {"James", MonsterType::GOBLIN, 85};

	PrintMonster(john);
	PrintMonster(james);

	return 0;
}