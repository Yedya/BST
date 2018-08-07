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


// Function to print vector
void printVector(vector<int> v)
{
    // lambda expression to print vector
    for_each(v.begin(), v.end(), [](int i)
    {
        std::cout << i << " ";
    });
    cout << endl;
}
 



int main()
{
	BST BS_Tree;
	BS_Tree.Insert(63);
	BS_Tree.Insert(5);
	BS_Tree.Insert(1);
	BS_Tree.Insert(14);
	BS_Tree.Insert(24);

	//BS_Tree.PrintTree();
	
	vector<int> v;

	v.push_back(4);
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);

	OrderedMap houseForPlayer;

	houseForPlayer.InsertNewPlayer("greg", "Griffin");
	houseForPlayer.InsertNewPlayer("daniel", "slytherin");
	//houseForPlayer.InsertNewPlayer("conor", "hufflepuff");
	houseForPlayer.Print();
	//cout << houseForPlayer.findEntry("greg");


	//houseForPlayer.Insert("daniel", "slytherin");
	//houseForPlayer.Insert("conor", "gryffindor");
	//houseForPlayer.Insert("greg", "hufflepuff");
	//
	//cout << houseForPlayer.Search("greg");
	//std::string houseForBob = m.find("bob");
	//if(!houseForBob.empty()) {
	//	cout << "Bob's house is: " << houseForBob;
	//}


	system("pause");
	return 0;
}

