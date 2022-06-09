1// Binary Tree

#include <iostream>
#include <string>
#include <vector>
#include "BinaryTree.h"

using namespace std;

int main()
{
	// Variables
	BinaryTree emp;
	string message;
	int empNumber;

	// Add Employee information to the binary tree
	emp.addEmp(1021, "John Williams");
	emp.addEmp(1057, "Bill Witherspoon");
	emp.addEmp(2487, "Jennifer Twain");
	emp.addEmp(3769, "Sophia Lancaster");
	emp.addEmp(1017, "Debbie Reece");
	emp.addEmp(1275, "George McMullen");
	emp.addEmp(1899, "Ashley Smith");
	emp.addEmp(4218, "Josh Plemmons");

	// Get input to look for employee
	cout << "Please enter the employee ID number:\n";
	cin >> empNumber;

	message = emp.search(empNumber);
	if (message == "Not valid")
	{
		cout << "Employee ID not found.\n";
	}
	else
		cout << "Employee: " << message << endl;

	return 0;
}
