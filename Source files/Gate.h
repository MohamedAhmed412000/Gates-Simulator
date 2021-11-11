#ifndef GATE_H
#define GATE_H

#include"Node.h"
class Gate{
protected:
	Node* in1;
	Node* in2;
	Node* out1;
public:
	void SetInput1(Node*);
	Node* GetInput1();
	void SetInput2(Node*);
	Node* GetInput2();
	void SetOutput(Node*);
	Node* GetOutput();
	virtual void CalcOut()=0;
};

#endif