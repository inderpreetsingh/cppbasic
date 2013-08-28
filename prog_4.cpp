#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	
	vector<int> v;
	cout << "enter 5 elements"<< endl;
	for(auto i=0; i <5; ++i)
	{
		int num;
		cin >> num;
	        v.push_back(num);
	}
        //! used the lambda functions in std::find_if to find the first odd number	
	auto oddNo = find_if(begin(v),
			     end(v),
                             [=](int k) {return ((k%2) == 1);});
	//! Know more about lambda functions at http://www.cprogramming.com/c++11/c++11-lambda-closures.html
	cout << "The first odd number in given elements is" << *oddNo << endl;
}	
