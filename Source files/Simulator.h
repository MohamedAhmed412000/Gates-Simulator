#ifndef SIMULATOR_H
#define SIMULATOR_H
#include<vector>
#include<string>
#include<fstream>
#include"Gate.h"
class Simulator
{
private:
	vector<Node*> NA;
	vector<Gate*> GA;
public:
	~Simulator();	
	Node* FindNodes(string);
	Node* AddNodes(string);
	Node* FindAndAdd(string);
	Gate* AddGates(string);
	int GetGSize();
	int GetNSize();
	void Simulate();
	void PrintAll();
	void Sort();
	void load(string);
};	

#endif