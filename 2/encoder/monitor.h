// Hrishikesh Hiraskar - 15CO121
// Gunjan Paliwal      - 15CO134
// 17 September 2016

/*
	Monitor for 4:16 Encoder
*/

#include "systemc.h"

SC_MODULE(monitor){
	sc_in<bool> a, b, c, d, D[16];

	void run(){
		cout<<sc_time_stamp()<<"\t: ";
		for(int i=0;i<16;i++)
			cout<<D[i].read()<<" ";
		cout<<": ";
		cout<<a.read()<<' ';
		cout<<b.read()<<' ';
		cout<<c.read()<<' ';
		cout<<d.read()<<endl;
	}

	SC_CTOR(monitor){
		SC_METHOD(run);
		sensitive<<a<<b<<c<<d;
	}
};
