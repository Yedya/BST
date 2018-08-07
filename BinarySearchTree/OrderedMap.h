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

		string Search(string key);
		string findEntry(string key);
		string Find(node *root,string key);
		string FindPlayer(string key);
		bool doesPlayerExist(string key);
		struct node* getNode(node *root,string key);

		void Insert(string key,string value);
		void insertToMap(string key,string value);
		void destroy_tree(node *root);
		void InsertRight(node *nodeToInsert,string value,string key);
		void InsertLeft(node *nodeToInsert,string value,string key);
		void InsertPlayer(string key,string value);
		void Insert(node *root,string key,string value);


		void PreOrderTraversal(node *root);
		void Print();


	private:
		node *root;
	

	
};


#endif
