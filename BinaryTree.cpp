#include "BinaryTree.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function adds employee info to binary tree
void BinaryTree::addEmp(int i, string n, EmployeeInfo*& p)
{
	if (!p)
	{
		p = new EmployeeInfo(i, n);
		return;
	}
	if (i == p->idNum)
		return;
	else if (i < p->idNum)
		addEmp(i, n, p->left);
	else
		addEmp(i, n, p->right);
}

// Function to search for employee
string BinaryTree::search(int i, EmployeeInfo* e)
{
	if (e)
	{
		if (i == e->idNum)
			return e->name;
		else if (i < e->idNum)
			return search(i, e->left);
		else
			return search(i, e->right);
	}
	return "Not valid";
}