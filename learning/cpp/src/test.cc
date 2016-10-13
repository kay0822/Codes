#include <iostream>
#include <string>
using namespace std;
//#ifdef __cplusplus
extern "C" {
//#endif

#include <stdio.h>
void cfunc(const char * buf){
	printf("%s\n", buf);
}

//#ifdef __cplusplus
}
//#endif

struct A{
	public:
	int a;
	A(string str) { cout << str << endl; }
	string operator()(string str){return str;}
	private:
	const int& aa (int x) const;
};


const int& A::aa (int x) const {
	return a;
}

int main(){


	string buf = "it's a test";
	cfunc(buf.c_str());

	return 0;
}
