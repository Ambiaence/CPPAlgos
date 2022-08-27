#include <iostream>
#include <list>
#include <iterator>
#include <vector>

void printVec(std::vector<int> arr) {
	for(auto iter = arr.begin(); iter != arr.end(); iter++) {
		std::cout << *iter << ' ';
	} 
	std::cout << '\n';
}

int main() {
	std::vector<int> arr;
	std::vector<int>::iterator far;
	std::vector<int>::iterator close;
	
	for(int i = 0; i < 10; i++) {
		arr.push_back(i);		
	}
	
	printVec(arr);

	far = arr.begin() + 8;
	close = arr.begin() + 0;

	std::cout << *far << '\n';
	std::cout << *close << '\n';

	std::cout << "Inserting at b+3\n";
	arr.insert(far, -9);
	arr.erase(far);

	printVec(arr);
	std::cout << *far << '\n';
	std::cout << *close << '\n';
}
