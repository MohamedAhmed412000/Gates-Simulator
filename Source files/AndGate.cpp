#include "AndGate.h"

void AndGate::CalcOut(){
	if(in1->GetValue()==1&&in2->GetValue()==1)
		out1->SetValue(1);
	else
		out1->SetValue(0);
}
	//out1->SetValue(in1->GetValue()&&in2->GetValue());


