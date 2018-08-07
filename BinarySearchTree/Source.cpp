#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "BST.h"
#include "OrderedMap.h"
#include <algorithm>
#include <functional>
#include <array>
#include <vector>
using namespace std;


int main()
{
	BST BS_Tree;
	BS_Tree.Insert(63);
	BS_Tree.Insert(5);
	BS_Tree.Insert(1);
	BS_Tree.Insert(14);
	BS_Tree.Insert(24);
	//BS_Tree.PrintTree();
	
	OrderedMap houseForPlayer;
	houseForPlayer.InsertPlayer("daniel", "slytherin");
	houseForPlayer.InsertPlayer("conor", "gryffindor");
	houseForPlayer.InsertPlayer("greg", "hufflepuff");
	houseForPlayer.InsertPlayer("greg", "slytherin");
	houseForPlayer.Print();
	

	//m.apply([=](const std::string& value){ cout << value << endl; });

	std::string houseForBob = houseForPlayer.FindPlayer("bob");
	if(!houseForBob.empty())
	{
		cout << "Bob's house is: " << houseForBob;
	}
	


	system("pause");
	return 0;
}

