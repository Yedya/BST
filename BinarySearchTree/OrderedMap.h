#ifndef OrderedMap_H
#define OrderedMap_H
using namespace std;
#include <iostream>
#include <string>
#include <map>
#include<stdio.h>
#include<stdlib.h>

struct node{

	node *left;
	node *right;

	string key;
	string value;

};


class OrderedMap
{
	public:
		OrderedMap();
		~OrderedMap();
		void InsertLeft(node *nodeToInsert,string value,string key);
		void InsertRight(node *nodeToInsert,string value,string key);
		void Insert(node *root,string key,string value);
		void InsertNewPlayer(string key,string value);

	private:
		node *root;
	

	
};


#endif
