#pragma once
#include <iostream>

using namespace std;

template <class T>
class TreeNode
{
	public:
		T value;
		TreeNode<T>* left;
		TreeNode<T>* right;
};

template <class T>
class BinaryTree
{
	private:
		TreeNode<T>* root;
		void InsertNode(TreeNode<T>* &nodePtr, TreeNode<T>* &newNode);
		void DeleteNode(T value, TreeNode<T>* &nodePtr);
		void DisplayInOrder(TreeNode<T>* nodePtr);
		void DisplayPreOrder(TreeNode<T>* nodePtr);
		void DisplayPostOrder(TreeNode<T>* nodePtr);
		void DestroyNode(TreeNode<T>* &nodePtr);
		void DestroySubTree(TreeNode<T>* nodePtr);
		bool Search(TreeNode<T>* nodePtr, T value);

	public:
		BinaryTree();
		~BinaryTree();
		void Insert(T value);
		void Remove(T value);
		void DisplayInOrder();
		void DisplayPreOrder();
		void DisplayPostOrder();
		bool Search(T value);
};

template <class T>
BinaryTree<T>::BinaryTree()
{
	root = nullptr;
}

template <class T>
BinaryTree<T>::~BinaryTree()
{
	DestroySubTree(root);
}

template<class T>
void BinaryTree<T>::Remove(T value)
{
	DeleteNode(value, root);
}

template<class T>
void BinaryTree<T>::DeleteNode(T value, TreeNode<T>* &nodePtr)
{
	if (nodePtr != nullptr)
	{
		if (value < nodePtr->value)
			DeleteNode(value, nodePtr->left);
		else if (value > nodePtr->value)
			DeleteNode(value, nodePtr->right);
		else
			DestroyNode(nodePtr);
	}
}

template<class T>
void BinaryTree<T>::DestroyNode(TreeNode<T>* &nodePtr)
{
	TreeNode<T>* tempNode = nullptr;

	if (nodePtr != nullptr)
	{
		if (nodePtr->right == nullptr)
		{
			tempNode = nodePtr;
			nodePtr = nodePtr->left;
		}
		else if (nodePtr->left == nullptr)
		{
			tempNode = nodePtr;
			nodePtr = nodePtr->right;
		}
		else
		{
			tempNode = nodePtr->right;

			while (tempNode->left != nullptr)
				tempNode = tempNode->left;

			tempNode->left = nodePtr->left;
			tempNode = nodePtr;

			nodePtr = nodePtr->right;

		}

		delete tempNode;
	}
}

template <class T>
void BinaryTree<T>::DestroySubTree(TreeNode<T>* nodePtr)
{
	if (nodePtr != nullptr)
	{
		if (nodePtr->left)
			DestroySubTree(nodePtr->left);
		if (nodePtr->right)
			DestroySubTree(nodePtr->right);

		delete nodePtr;
	}
}



template <class T>
void BinaryTree<T>::Insert(T value)
{
	TreeNode<T>* newNode = new TreeNode<T>;
	newNode->value = value;
	newNode->left = newNode->right = nullptr;

	InsertNode(root, newNode);
}

template <class T>
void BinaryTree<T>::InsertNode(TreeNode<T>* &nodePtr, TreeNode<T>* &newNode)
{
	if (nodePtr == nullptr)
		nodePtr = newNode;
	else if (newNode->value < nodePtr->value)
		InsertNode(nodePtr->left, newNode);
	else
		InsertNode(nodePtr->right, newNode);
}

template<class T>
void BinaryTree<T>::DisplayInOrder()
{
	DisplayInOrder(root);
}

template<class T>
void BinaryTree<T>::DisplayInOrder(TreeNode<T>* nodePtr)
{
	if (nodePtr != nullptr)
	{
		DisplayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		DisplayInOrder(nodePtr->right);
	}
}

template<class T>
void BinaryTree<T>::DisplayPreOrder()
{
	DisplayPreOrder(root);
}

template<class T>
void BinaryTree<T>::DisplayPreOrder(TreeNode<T>* nodePtr)
{
	if (nodePtr != nullptr)
	{
		cout << nodePtr->value << endl;
		DisplayPreOrder(nodePtr->left);
		DisplayPreOrder(nodePtr->right);
	}
}

template<class T>
void BinaryTree<T>::DisplayPostOrder()
{
	DisplayPostOrder(root);
}

template<class T>
void BinaryTree<T>::DisplayPostOrder(TreeNode<T>* nodePtr)
{
	if (nodePtr != nullptr)
	{
		DisplayPreOrder(nodePtr->left);
		DisplayPreOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}

template <class T>
bool BinaryTree<T>::Search(T value)
{
	return Search(root, value);
}

template <class T>
bool BinaryTree<T>::Search(TreeNode<T>* nodePtr, T value)
{
	bool result = false;
	if (nodePtr != nullptr)
	{
		if (nodePtr->value == value)
			result = true;
		else if (value < nodePtr->value)
			result = Search(nodePtr->left, value);
		else
			result = Search(nodePtr->right, value);
	}

	return result;
}
