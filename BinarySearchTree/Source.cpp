#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "BST.h"
#include <algorithm>
#include <functional>
#include <array>
using namespace std;

void swapChars(char *x,char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;

}

char* revStr(char const* str)
{
	int n = strlen(str);

	char *rev = new char[n+1];

	strcpy(rev,str);

	for(int i =0,j=n-1;i<j;i++,j--)
	{
		swapChars(&rev[i],&rev[j]);
	}
	return rev;

}

string revS(string str)
{
	for(int i = 0;i<str.length()/2;i++)
	{
		swapChars(&str[i],&str[str.length()-i-1]);

	}

	return str;
}


int compareNames(string a,string b)
{

	if ((strcmp(a.c_str(),b.c_str()) > 0))
    {
        //swap(a, b);
		cout << "A " << a <<endl;
    }
	else{
		cout << "B " << b <<endl;
	}
	return -1;
}


void bubbleSort(string list[], int size) 
{ 
    for (int i=0; i<size; i++)
    {
        for (int j=0; j < size-i; j++)
        {
			
			if ((int)list[j][0]>(int)list[j+1][0])   //   if ((strcmp(list[j].c_str(),list[j+1].c_str()) > 0))
            {
            	swap(list[j], list[j + 1]);
            }
        }
    }
}




int main()
{
	BST BS_Tree;
	BS_Tree.Insert(63);
	BS_Tree.Insert(5);
	BS_Tree.Insert(1);
	BS_Tree.Insert(14);
	BS_Tree.Insert(24);
	



	string B = "amy";
	string C = "heraldo";
	string D = "david";



	 const char *s = "Conor";
	


	 string c  = "Green";
	 cout << revS(c);

	 BS_Tree.PrintTree();
	



	system("pause");
	return 0;
}

