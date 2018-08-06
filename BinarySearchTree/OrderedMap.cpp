
#include "OrderedMap.h"
using namespace std;
#include <iostream>
#include <string>
#include <map>




OrderedMap::OrderedMap(){
	
	
	std::map<string,string> mapOfPlayers;
}

OrderedMap::~OrderedMap()
{
  
}

void OrderedMap::InsertRight(node *nodeToInsert,string value,string key)
{
	nodeToInsert->right = new node;
	nodeToInsert->right->key = key;
	nodeToInsert->right->value = value;
	nodeToInsert->right->right = NULL;
	nodeToInsert->right->left = NULL;
}


void OrderedMap::InsertLeft(node *nodeToInsert,string value,string key)
{
	nodeToInsert->left = new node;
	nodeToInsert->left->key = key;
	nodeToInsert->left->value = value;
	nodeToInsert->left->left = NULL;
	nodeToInsert->left->right = NULL;
}

void OrderedMap::InsertNewPlayer(string key,string value)
{

	if(root!=NULL)
	{
		Insert(root,key,value);
	}
	else
	{
		root = new node;
		root->key = key;
		root->value = value;
		root->left = NULL;
		root->right = NULL;

	}


}

void OrderedMap::Insert(node *root,string key,string value)
{
	if(value>=root->value)
	{
		if(root->right!=NULL)
		{
			Insert(root->right,key,value);
		}
		else
		{
			InsertRight(root,key,value);
		}
	}
	else if(value<root->value)
	{
		if(root->left!=NULL)
		{
			Insert(root->left,key,value);
		}
		else
		{
			InsertLeft(root,key,value);
		}
	}
}


