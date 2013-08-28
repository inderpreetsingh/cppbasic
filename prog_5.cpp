#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std; 

template <class T>
struct TheList
{
	vector<T> listVector;
	TheList(intializer_list<T> myList) : listVector(myList)
	{
		for (auto i: listVector)
		{
			cout << i << endl;
		}
	}
};

int main()
{
	TheList<string> toDoList {"start cpp-tricks.com", 
				    "make brl-cad website mockup",
                                    "work on FLAT, PEEMT, SLLP",	
				    "Major Project",
				    "Mathematics"};
	
}
