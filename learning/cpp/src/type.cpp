#include <iostream>
#include <string>

using namespace std;

void str(){
	string str1 = "string str1 = \"str1\";";
	string str2 ("string str2 (\"str2\");");
	string str3 {"string str3 {\"str3\"};"};
	decltype(str1) str4 = "decltype(str1) str4 = \"str4\";";
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
}

int main(){
	str();

	return 0;
}
