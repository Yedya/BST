#ifndef OrderedMap_H
#define OrderedMap_H
using namespace std;
#include <iostream>
#include <string>
#include <map>
#include<stdio.h>
#include<stdlib.h>

struct node
{
	string key;
	string value;

	node *left;
	node *right;
};


class OrderedMap
{
	public:
		OrderedMap();
		~OrderedMap();
		void Insert(string key,string value);
		string Search(string key);
		string findEntry(string key);
		void insertToMap(string key,string value);

		void InsertRight(node *nodeToInsert,string value,string key);
		void InsertLeft(node *nodeToInsert,string value,string key);
		void InsertNewPlayer(string key,string value);
		void Insert(node *root,string key,string value);
		void PrintInOrder(node *root);
		void Print();
		//void InsertNewPlayer(string key,string value);

	private:
		std::map<string,string> mapOfPlayers;
		node *root;
	

	
};


#endif
