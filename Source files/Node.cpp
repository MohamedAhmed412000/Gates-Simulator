#include"Node.h"

Node::Node()
{name="";value=0;}
Node::Node(string x)
{name=x;value=0;}
Node::Node(string x,short v)
{name=x;value=v;}
void Node::SetValue(short v)
{value=v;}
void Node::SetName(string n)
{name=n;}
short Node::GetValue()
{return value;}
string Node::GetName()
{return name;}
void Node::PrintNode()
{cout<<this->GetName()<<" = "<<this->GetValue()<<endl;}
