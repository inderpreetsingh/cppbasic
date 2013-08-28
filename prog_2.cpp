#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//! using new way of initializing with uniform initialization 
	vector<string> colors {"Red","Green","Blue","Yellow", "Black", "White ","Orange"};
	//! Using new keyword auto to deduce type from intialization
	auto i =0;
	//! using new and better forms of begin and end functions and auto in a for loop 
	for (auto j = begin(colors); j != end(colors); ++j)
	{
		cout<<*j<<endl;
	}
	
}
