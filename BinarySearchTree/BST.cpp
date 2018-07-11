
#include "BST.h"
using namespace std;
#include <iostream>
#include <string>
#include <map>




BST::BST(){
	

}

// Space 0(1)
// Time 0(1)
struct treeNode* BST::newNode(int key)
{
	struct treeNode *new_Node = new treeNode;
	new_Node->Key = key;
	new_Node->left = new_Node->right=NULL;
	return new_Node;
}


// Space 0(N)
// Time 0(log(n))
struct treeNode* BST::Insert(struct treeNode* node,int key)
{

    if (node == NULL) return newNode(key);
     
    if (key < node->Key)
        node->left  = Insert(node->left, key);
    else if (key > node->Key)
        node->right = Insert(node->right, key);   
 
    return node;
}


//Priniting in order   left<-root->right 
// Space 0(N)
// Time 0(N)
void BST::PrintTree(struct treeNode *root)
{
	
	if(root!=NULL)
	{
		PrintTree(root->left);
		printf("%d \n", root->Key);
		PrintTree(root->right);
	}

}


// Space 0(N)
// Time 0(log(n))
void BST::Search(struct treeNode *root, int data)
{
	int depth = 0;

	//Create a temp node pointer
	treeNode *temp = new treeNode;
	//Point to the root
	temp = root;


	// Run the loop untill temp points to a NULL pointer.
	while(temp != NULL)
	{
		depth++;
		if(temp->Key == data)
		{
			cout<<"Node found :   " << temp->Key <<endl;
			cout<<"\nData found at depth:  "<<depth <<endl;
			return;
		}
		// Move the  pointer to left child.
		else if(temp->Key > data)
			temp = temp->left;
		// Move the pointer to right child.
		else
			temp = temp->right;
	}
 
	cout<<"\n Data not found";
	return;
}