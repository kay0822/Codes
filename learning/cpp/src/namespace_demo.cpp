#include <iostream>


namespace n1{
	int a = 1;	
}
namespace n2{
	//int a = 2; //cannot declare variable in both n1 and n2;
	int b = 10;
}

int main(){
	using namespace n1;
	using namespace n2;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	return 0;
}
