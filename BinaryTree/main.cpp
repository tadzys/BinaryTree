#include <iostream>


#include "BinaryTree.hpp"

int main(int argc, char **argv)
{
	using namespace std;

	cout << "Hello world from binary tree" << endl;

	BT::BinaryTree<int> test;

	test.add(4);
	test.add(1);
	test.add(5);
	test.add(17);
	test.add(2);
	test.add(3);


	test.print();
	test.printNice();

	cout << "Tree depth: " << test.treeDepth() << endl;

	cout << "Tree average: " << test.treeAverage() << endl;

}