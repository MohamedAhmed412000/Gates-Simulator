#include "NotGate.h"


void NotGate::CalcOut(){
	if(in1->GetValue()==1)
		out1->SetValue(0);
	else if(in1->GetValue()==0)
		out1->SetValue(1);
}