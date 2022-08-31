#include <iostream>
#include <list>
#include <iterator>
#include <vector>

int main() {
	std::list<int> arr;
	std::list<int> ins;
	int c = 0;
	
	for(int i = 0; i < 10; i++)
		arr.push_back(c++);
	
	for(auto iter = arr.begin(); iter!= arr.end(); iter++) 
		std::cout << *iter << " ";
	std::cout << '\n';

	for(int i = -10; i < -4; i++)
		ins.push_back(i);

	for(auto iter = ins.begin(); iter!= ins.end(); iter++) 
		std::cout << *iter << " ";
	std::cout << '\n';

	for(auto iter = arr.begin(); iter!= arr.end(); iter++) 
		std::cout << *iter << " ";
	std::cout << '\n';

	



	

}
