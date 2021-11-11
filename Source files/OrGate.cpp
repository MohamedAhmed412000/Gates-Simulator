#include "OrGate.h"


void OrGate::CalcOut(){
	if(in1->GetValue()==0&&in2->GetValue()==0)
		out1->SetValue(0);
	else
		out1->SetValue(1);
}
	//out1->SetValue(in1->GetValue()||in2->GetValue());