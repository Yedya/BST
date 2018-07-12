#ifndef BST_H
#define BST_H
using namespace std;
#include <iostream>
#include <string>
#include <map>
#include<stdio.h>
#include<stdlib.h>

struct treeNode
{
    int      Key;
    treeNode *left;
    treeNode *right;
};

class BST
{
	public:
		BST();
		void newNode(int key);
		void Insert(struct treeNode* node,int key); 
		struct treeNode* BST::Search(struct treeNode *root, int key);
		void PrintTree(treeNode *node);
		struct treeNode* getRoot();

	private:
		struct treeNode *root;

	
};


#endif
