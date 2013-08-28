#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> colors   {"Red",
				 "Green",
                                 "Blue",
                                 "Yellow",
                                 "Black",
                                 "White"};
	//! Using more cleaner, faster and better range-for to traverse through a STL collection 
	for (auto i:colors)
	{
		cout << i << endl;
	}
}
