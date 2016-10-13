#include <iostream>
#include <string>
using namespace std;
class Parent{
	private:
		int age;
		string first_name;
	protected:
	   	string last_name;
	public:
		Parent(){
			cout << "Parent()" << endl;
		}
		Parent(string first_name, int age){
			cout << "Parent(" <<  first_name << ", " << age << ")" << endl;
		}
};

class Son : Parent{
	public:
		Son(string first_name, int age){
			cout << "Son(" <<  first_name << ", " << age << ")" << endl;
		}
	
};

class Daughter : Parent{
	public:
		Daughter(string first_name, int age): Parent(first_name, age){
			cout << "Daughter(" <<  first_name << ", " << age << ")" << endl;
		}
	
};

int main(){

	Daughter d("girl", 3);
	Son s("boy", 23);
	return 0;

}

