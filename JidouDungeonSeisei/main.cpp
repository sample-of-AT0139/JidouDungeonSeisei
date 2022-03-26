#include <iostream>
#include "DungeonAutoGeneration.h"
#include "DungeonRoom.h"

/*
task 
区画を跨いだ道をつなげる
*/

int main(void)
{
	srand((unsigned int)time(NULL));

	DungeonAutoGeneration dag;

	dag.Init();

	dag.Generate();

	dag.Draw();

	(void)getchar();
	return 0;
}