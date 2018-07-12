
#include "BST.h"
using namespace std;
#include <iostream>
#include <string>
#include <map>




BST::BST(){
	root = NULL;

}

struct treeNode* BST::getRoot()
{
	return root;
}


// Space 0(1)
// Time 0(1)
void BST::newNode(int key){
	if(root != NULL)
	{
		Insert(root, key);
	}
	else
	{
		root = new treeNode;
		root->Key = key;
		root->left = NULL;
		root->right = NULL;
	}
}

// Space 0(N)
// Time 0(log(n))
void BST::Insert(struct treeNode* node,int key)               
{ 
	if(key < node->Key)
	{
		if(node->left != NULL)
		{
			Insert(node->left, key);
		}
		else
		{
			node->left = new treeNode;
			node->left->Key = key;
			node->left->left = NULL;
			node->left->right = NULL;
		}
	}
	else if(key >= node->Key)
	{
		if(node->right != NULL)
		{
			Insert(node->right, key);
		}
		else
		{
			node->right = new treeNode;
			node->right->Key = key;
			node->right->right = NULL;
			node->right->left = NULL;
		}
	}

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
struct treeNode* BST::Search(struct treeNode *root, int key)
{
  if(root!=NULL)
  {
    if(key==root->Key)
      return root;
    if(key<root->Key)
      return Search(root->left,key);
    else
      return Search(root->right,key);
  }
  else return NULL;
  
}