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
	BST BS_Tree = BST();
	BS_Tree.newNode(63);
	BS_Tree.newNode(5);
	BS_Tree.newNode(1);
	BS_Tree.newNode(14);
	BS_Tree.newNode(24);


	// Print the tree
	 BS_Tree.PrintTree(BS_Tree.getRoot());


	 // Node not found example
	 if(BS_Tree.Search(BS_Tree.getRoot(),13)!=NULL)
	 {
		  cout << BS_Tree.Search(BS_Tree.getRoot(),14)->Key;
	 }
	 else cout << "Node not found" <<endl;



	system("pause");
	return 0;
}

