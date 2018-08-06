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

	BS_Tree.PrintTree();
	
	vector<int> v;

	v.push_back(4);
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);

	OrderedMap houseForPlayer;

	houseForPlayer.InsertNewPlayer("daniel", "slytherin");
	houseForPlayer.InsertNewPlayer("conor", "gryffindor");
	houseForPlayer.InsertNewPlayer("greg", "hufflepuff");




	system("pause");
	return 0;
}

