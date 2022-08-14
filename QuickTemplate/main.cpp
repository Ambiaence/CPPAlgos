#include <iostream>
#include <string>

int main() {

	bool run = true;
	int count = 0;
	std::string inputTest;

	std::cin >> inputTest;
	std::cout << inputTest;

	if (true) {
		std::cout << "This I expect to happen\n";
	} else while(run) { //maybe I don't understand this gimmick aswell as I thought
		std::cout << run << "This not so much ";
		count++;
		if(count ==  3) {
			run = false;
		}
	}
	return 0;
}
