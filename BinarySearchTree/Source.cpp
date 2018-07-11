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
	BST *BS_Tree = new BST();
	

	//Root
	struct treeNode *root = NULL;
	root = BS_Tree->Insert(root,30);
	BS_Tree->Insert(root,54);
	BS_Tree->Insert(root,22);
	BS_Tree->Insert(root,35);
	BS_Tree->Insert(root,61);
	BS_Tree->Insert(root,52);

   // Print the tree
    BS_Tree->PrintTree(root);

	
	BS_Tree->Search(root,22);




	system("pause");
	return 0;
}

