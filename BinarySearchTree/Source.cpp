#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "BST.h"
#include <algorithm>
#include <functional>
#include <array>
using namespace std;


int main()
{
	BST BS_Tree;
	BS_Tree.Insert(63);
	BS_Tree.Insert(5);
	BS_Tree.Insert(1);
	BS_Tree.Insert(14);
	BS_Tree.Insert(24);

	 BS_Tree.PrintTree();
	



	system("pause");
	return 0;
}

