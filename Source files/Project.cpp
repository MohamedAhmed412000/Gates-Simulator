#include"Node.h"
#include"Gate.h"
#include"AndGate.h"
#include"NotGate.h"
#include"OrGate.h"
#include"XorGate.h"
#include"XnorGate.h"
#include"NorGate.h"
#include"NandGate.h"
#include"Simulator.h"
using namespace std;


 int main(int argc,char* argv[]){  //Ïæá ßÏå ÚÔÇä ÇÚÑİ ÇÎáí Çáãáİ Çááí ÈíÊßÊÈ íÊİÊÍ İí Çí ÍÊå æÇáÇãÊÏÇÏ ÈÊÇÚäÇ xxx.crct
	Simulator s;
	s.load(argv[1]);

	int x;
	cin>>x;
	//system("pause");
	return 0;
}
