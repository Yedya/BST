
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
void OrderedMap::PrintInOrder(node *root)
{

	if(root!=NULL)
	{
		PrintInOrder(root->left);
		cout <<  root->value  <<endl;
		PrintInOrder(root->right);

	}
}

void OrderedMap::Print()
{
	PrintInOrder(root);
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

void OrderedMap::Insert(string key,string value)
{
	std::map<string,string>::iterator playerIter = mapOfPlayers.begin();
	//map->apply([=](const std::string& value){ cout << value; })
	mapOfPlayers.insert(pair<string,string>(key,value));


	while(playerIter!=mapOfPlayers.end())
	{
		cout <<  playerIter->second <<endl;
		playerIter++;
	}
	


}

string OrderedMap::Search(string key)
{
	std::map<string,string>::iterator playerIter = mapOfPlayers.begin();
	if (mapOfPlayers.find(key) != mapOfPlayers.end() )
	{
		playerIter = mapOfPlayers.find(key);
		return playerIter->first;
	} 

	return "Not Found";
}

string OrderedMap::findEntry(string key)
{

	node *curr = root;
	node *prev = root;

	while(curr!=NULL)
	{
		if(key.compare(curr->key)< 0 )
		{
			prev = curr;
			curr = curr->left; // Continue search in left subtree
		}
		else if(key.compare(curr->key) >  0 )
		{
			prev = curr;
			curr = curr->right; // Continue search in right subtree
		}
		else
		{
			return curr->key;
		}

	}
	return "Not Found";

}

void OrderedMap::insertToMap(string key,string value)
{
	node *curr = root;
	map<string,string>::iterator itr  = mapOfPlayers.begin();
	

	//If Tree is empty
	if(root==NULL)
	{
		InsertNewPlayer(key,value);
		return;
	}

	itr = mapOfPlayers.find(key);

	if(key==itr->first)
	{
		itr->second = value;
		return;

	}


}
