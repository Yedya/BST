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
		struct treeNode* newNode(int key);
		struct treeNode* Insert(treeNode *node,int key);
		void Search(struct treeNode *node, int key);
		void PrintTree(treeNode *node);

	private:


	
};


#endif
