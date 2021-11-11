#ifndef NODE_H
#define NODE_H

#include<string>
#include<iostream>
using namespace std;
class Node{
private:
	short value;
	string name;
public:
	Node();
	Node(string);
	Node(string,short);
	void PrintNode();
	void SetValue(short);
	void SetName(string);
	short GetValue();
	string GetName();
};

#endif
