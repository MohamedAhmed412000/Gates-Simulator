#include "XorGate.h"



void XorGate::CalcOut(){
	if(in1->GetValue()==in2->GetValue())
		out1->SetValue(0);
	else
		out1->SetValue(1);
}