#include <iostream>
#include <list>
#include <iterator>
#include <vector>

int main() {
	std::vector<std::vector<int>> ls;
	ls.push_back({1,2,3});
	for (auto iter = ls.begin(); iter != ls.end(); iter++) {
		for (auto it = iter->begin(); it != iter->end(); it++) {
			std::cout << *it << " ";
		}; std::cout << '\n';
	}; 		
}
