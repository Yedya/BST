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
		~BST();
		void Insert(int key);
		void insertLeft(treeNode *node,int key);
		void insertRight(treeNode *node,int key);
		void _Insert(struct treeNode* node,int key); 
		struct treeNode* Search(struct treeNode *root, int key);
		void PrintTree();
		void PrintInOrder(treeNode *root);
		void destroy_tree(treeNode *node);

		struct treeNode* getRoot();

	private:
		struct treeNode *root;

	
};


#endif
