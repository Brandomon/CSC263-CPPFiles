#include "BinaryTreeTemplate.h"
#include "EmployeeEmp.h"
#include <iostream>
using namespace std;

int main()
{
	BinaryTree<int>* myTree = new BinaryTree<int>;

	myTree->Insert(10);
	myTree->Insert(15);
	myTree->Insert(5);
	myTree->Insert(7);
	myTree->Insert(4);
	myTree->Insert(6);
	myTree->Insert(9);
	myTree->Insert(8);

	myTree->Remove(100);

	cout << "In Order" << endl;
	myTree->DisplayInOrder();

	cout << endl << "Pre Order" << endl;
	myTree->DisplayPreOrder();

	cout << endl << "Post Order" << endl;
	myTree->DisplayPostOrder();


	if (myTree->Search(4))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;

	if (myTree->Search(44))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;

	delete myTree;

	BinaryTree<EmployeeEmp>* myEmps = new BinaryTree<EmployeeEmp>;
	EmployeeEmp temp(1234, "Jimmy Jones");

	myEmps->Insert(temp);
	myEmps->Insert(EmployeeEmp(1234, "Tom Jones"));
	myEmps->Insert(EmployeeEmp(5678, "James Brown"));
	myEmps->Insert(EmployeeEmp(1357, "Rick Smith"));
	myEmps->Insert(EmployeeEmp(2468, "Mary Poppins"));

	cout << "In Order" << endl;
	myEmps->DisplayInOrder();

	EmployeeEmp temp2(1234, "Jimmya Jones");
	if (myEmps->Search(temp2))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;

	delete myEmps;


	return 0;
}
