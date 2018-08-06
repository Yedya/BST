
#include "BST.h"
using namespace std;
#include <iostream>
#include <string>
#include <map>




BST::BST(){
	root = nullptr;

}

BST::~BST()
{
  destroy_tree(root);
}


void BST::destroy_tree(treeNode *root)
{
	if(root!=NULL)
	{
		destroy_tree(root->left);
		destroy_tree(root->right);
		delete root;
	}


}

struct treeNode* BST::getRoot()
{
	return root;
}

// Space 0(1)
// Time 0(1)
void BST::Insert(int key){
	if(root != NULL)
	{
		_Insert(root, key);
	}
	else
	{
		root = new treeNode;
		root->Key = key;
		root->left = NULL;
		root->right = NULL;
	}
}


// Space 0(1)
// Time 0(1)
void BST::insertLeft(treeNode *node,int key)
{
	node->left = new treeNode;
	node->left->Key = key;
	node->left->left = NULL;
	node->left->right = NULL;

}

// Space 0(1)
// Time 0(1)
void BST::insertRight(treeNode *node,int key)
{
	node->right = new treeNode;
	node->right->Key = key;
	node->right->right = NULL;
	node->right->left = NULL;

}

// Space 0(N)
// Time 0(log(n))
void BST::_Insert(struct treeNode* node,int key)               
{ 
	if(key < node->Key)
	{
		if(node->left != NULL)
		{
			_Insert(node->left, key);
		}
		else
		{
			insertLeft(node,key);
		}
	}
	else if(key >= node->Key)
	{
		if(node->right != NULL)
		{
			_Insert(node->right, key);
		}
		else
		{
			insertRight(node,key);
		}
	}

}

//Priniting in order   left<-root->right 
// Space 0(N)
// Time 0(N)
void BST::PrintInOrder(treeNode *root)
{
	
	if(root!=NULL)
	{
		PrintInOrder(root->left);
		printf("%d \n", root->Key);
		PrintInOrder(root->right);
	}

}

void BST::PrintTree()
{
	
	PrintInOrder(root);

}

// Space 0(N)
// Time 0(log(n))
struct treeNode* BST::Search(struct treeNode *root, int key)
{
  if(root!=NULL)
  {
    if(key == root->Key)
      return root;
    if(key < root->Key)
      return Search(root->left,key);
    else
      return Search(root->right,key);
  }
  else return NULL;
  
}