#include <iostream>

using namespace std;
struct A{
		int a;
		int b;
	A(): 
		a(4), b(5) {
	
	}
};

int main(){
	struct A *a = new A();
	cout << a->a << endl;
	
	return 0;
}
