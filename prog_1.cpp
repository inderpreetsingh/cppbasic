#include <iostream>

using namespace std;

int main()
{
	//! new way of initializing with { } (uniform initialization) , has it's own advantages	
	string greeting{"hello world"};
	//! another new feature "auto" to automatically deduce the type from initalization
	auto greeting2 = "I am loving the new c++11";
	//! the brand new c++11 hello world
	cout << greeting << endl <<greeting2 << endl;
}
