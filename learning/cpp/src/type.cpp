#include <iostream>
#include <string>

using namespace std;

void str(){
	string str1 = "string str1 = \"str1\";";
	string str2 ("string str2 (\"str2\");");
	string str3 {"string str3 {\"str3\"};"};
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
}

int main(){
	str();
}
