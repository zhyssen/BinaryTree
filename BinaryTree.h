#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BinaryTree

{
private:
	class EmployeeInfo 
	{
		friend class BinaryTree;
		int idNum;			// Employee ID Number
		string name;	// Employee Name
		EmployeeInfo* left;
		EmployeeInfo* right;

		EmployeeInfo(int idNum1, string name1, EmployeeInfo* left1 = NULL,
			EmployeeInfo* right1 = NULL)
		{
			idNum = idNum1;
			name = name1;
			left = left1;
			right = right1;
		}
	};

	EmployeeInfo* root;
	void addEmp(int, string, EmployeeInfo*&);
	string search(int, EmployeeInfo*);

public:
	// Constructor
	BinaryTree() { root = NULL; }
	void addEmp(int i, string n)
	{
		addEmp(i, n, root);
	}
	string search(int i)
	{
		return search(i, root);
	}
};

