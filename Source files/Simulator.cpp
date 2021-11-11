#include "Simulator.h"
#include"Node.h"
#include"AndGate.h"
#include"NotGate.h"
#include"OrGate.h"
#include"XorGate.h"
#include"XnorGate.h"
#include"NorGate.h"
#include"NandGate.h"


Simulator::~Simulator()
{
	for (int i = 0; i < GA.size() ; i++)
	{
		delete GA[i];
	}
	for (int i = 0; i < NA.size() ; i++)
	{
		delete NA[i];
	}
}

Node* Simulator::FindNodes(string n){
	for (int i = 0; i < NA.size() ; i++)
	{
		if (NA[i]->GetName()==n)
		{
			return NA[i];
		}
	}
	return NULL;
}

Node* Simulator::AddNodes(string n){
	Node* p=new Node();
	NA.push_back(p);	
	p->SetName(n);
	return p;
}

Node* Simulator::FindAndAdd(string n){
	Node* p=FindNodes(n);
	if (p==NULL)
		{return AddNodes(n);}
	else
		{return p;}
}

Gate* Simulator::AddGates(string n){
	Gate* p=NULL;
	if (n=="AND"||n=="And"||n=="and")
		p=new AndGate();
	else if(n=="OR"||n=="Or"||n=="or")
		p=new OrGate();
	else if(n=="NOT"||n=="Not"||n=="not")
		p=new NotGate();
	else if(n=="NOR"||n=="Nor"||n=="nor")
		p=new NorGate();
	else if(n=="NAND"||n=="Nand"||n=="nand")
		p=new NandGate();
	else if(n=="XOR"||n=="Xor"||n=="xor")
		p=new XorGate();
	else if(n=="XNOR"||n=="Xnor"||n=="xnor")
		p=new XnorGate();
	GA.push_back(p);
	return p;
}

int Simulator::GetGSize()
{return GA.size();}

int Simulator::GetNSize()
{return NA.size();}

void Simulator::Simulate(){
	for (int i = 0; i < GA.size() ; i++)
	{
		GA[i]->CalcOut();
	}
}

void Simulator::PrintAll(){
	for (int i = 0; i < NA.size() ; i++)
	{
		cout<<NA[i]->GetName()<<" = "<<NA[i]->GetValue()<<endl;
	}
}

void Simulator::Sort(){
	for (int i = 0; i < GA.size() ; i++)
	{
		for (int j = i+1; j < GA.size() ; j++)
		{
			if (GA[j]->GetOutput()->GetName()==GA[i]->GetInput1()->GetName()||GA[j]->GetOutput()->GetName()==GA[i]->GetInput2()->GetName())
			{
				Gate* temp=GA[i];
				GA[i]=GA[j];
				GA[j]=temp;
			}
		}
	}
}

void Simulator::load(string F1name)
{
	ifstream f1;
	f1.open(F1name);
	while (!f1.eof())
	{
		string s;
		f1>>s;
		if (s=="SET"||s=="Set"||s=="set")
		{
			Sort();
			string n;
			short v;
			f1>>n>>v;
			FindAndAdd(n)->SetValue(v);
		}
		else if (s=="OUT"||s=="Out"||s=="out")
		{
			string n;
			f1>>n;
			if (n=="ALL"||n=="All"||n=="all")
			{
				PrintAll();
			}
			else
			{
				Node* p=FindNodes(n);
				p->PrintNode();
			}
		}
		else if (s=="SIM"||s=="Sim"||s=="sim")
		{
			Simulate();
		}
		else if (s=="NOT"||s=="Not"||s=="not")
		{
			string n1,n2;
			f1>>n1>>n2;
			Gate* p=AddGates(s);
			p->SetInput1(FindAndAdd(n1));
			p->SetOutput(FindAndAdd(n2));
		}
		else
		{
			string n1,n2,n3;
			f1>>n1>>n2>>n3;
			Gate* p=AddGates(s);
			p->SetInput1(FindAndAdd(n1));
			p->SetInput2(FindAndAdd(n2));
			p->SetOutput(FindAndAdd(n3));
		}
	}
	f1.close();
}
