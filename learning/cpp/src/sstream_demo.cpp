#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(){

	string mystr;
	float price;
	cout << "Enter price: ";
	getline (cin,mystr);
	stringstream(mystr) >> price;
	cout << price << endl;
	
	return 0;
}
