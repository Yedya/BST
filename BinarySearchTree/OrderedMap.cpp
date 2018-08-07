
#include "OrderedMap.h"
using namespace std;
#include <iostream>
#include <string>
#include <map>


OrderedMap::OrderedMap(){
	
	
	std::map<string,string> mapOfPlayers;
	root = nullptr;
}

OrderedMap::~OrderedMap()
{
  destroy_tree(root);
}

void OrderedMap::destroy_tree(node *root)
{
	if(root!=NULL)
	{
		destroy_tree(root->left);
		destroy_tree(root->right);
		delete root;
	}


}

void OrderedMap::InsertRight(node *nodeToInsert,string key,string value)
{
	nodeToInsert->right = new node;
	nodeToInsert->right->key = key;
	nodeToInsert->right->value = value;
	nodeToInsert->right->right = NULL;
	nodeToInsert->right->left = NULL;
}

void OrderedMap::InsertLeft(node *nodeToInsert,string key,string value)
{
	nodeToInsert->left = new node;
	nodeToInsert->left->key = key;
	nodeToInsert->left->value = value;
	nodeToInsert->left->left = NULL;
	nodeToInsert->left->right = NULL;
}

void OrderedMap::InsertPlayer(string key,string value)
{
	if(root!=NULL)
	{
		if(!doesPlayerExist(key))
		{
			Insert(root,key,value);
		}
		else
		{
			// Question_1 is this safe?
			getNode(root,key)->value = value;
			return;
		}
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
	
	if(key < root->key)
	{
		if(root->left != NULL)
		{
			Insert(root->left, key,value);
		}
		else
		{
			InsertLeft(root,key,value);
		}
	}
	else if(key >= root->key)
	{
		if(root->right != NULL)
		{
			Insert(root->left, key,value);
		}
		else
		{
			InsertRight(root,key,value);
		}
	}

}

void OrderedMap::PreOrderTraversal(node *root)
{
	if(root!=NULL)
	{
		cout <<  root->value  <<endl;
		PreOrderTraversal(root->left);
		PreOrderTraversal(root->right);
	}
}

void OrderedMap::Print()
{
	PreOrderTraversal(root);
}

string OrderedMap::Find(node *root,string key)
{
	
  if(root!=NULL)
  {
    if(key == root->key)
		return root->value;
    if(key < root->key)
      return Find(root->left,key);
    else
      return Find(root->right,key);
  }
  else return "Not Found ";


}

string OrderedMap::FindPlayer(string key)
{
	return Find(root,key);
}

struct node* OrderedMap::getNode(node *root,string key)
{

	if(root!=NULL)
	{
		if(key == root->key)
			return root;
		else if(key > root->key)
			return getNode(root->right,key);
		else
			return getNode(root->left,key);
	}
	else return nullptr;

}

bool OrderedMap::doesPlayerExist(string key)
{
	if(FindPlayer(key)== "Not Found ") return false;

	return true;
}

