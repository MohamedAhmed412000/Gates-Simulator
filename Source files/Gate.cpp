#include"Gate.h"
void Gate::SetInput1(Node* input)
{in1=input;}
Node* Gate::GetInput1()
{return in1;}
void Gate::SetInput2(Node* input)
{in2=input;}
Node* Gate::GetInput2()
{return in2;}
void Gate::SetOutput(Node* output)
{out1=output;}
Node* Gate::GetOutput()
{return out1;}