#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
		
	if (n == 0) {
		std::cout << "zero";
	} else if ( n == 1 ) {
		std::cout << "one";
	} else if ( n == 2 ) {
		std::cout << "two";
	} else if ( n == 3 ) {
		std::cout << "three";
	} else if ( n == 4 ) {
		std::cout << "four";
	} else if ( n == 5 ) {
		std::cout << "five";
	} else if ( n == 6 ) {
		std::cout << "six";
	} else if ( n == 7 ) {
		std::cout << "seven";
	} else if ( n == 8 ) {
		std::cout << "eight";
	} else if ( n == 9 ) {
		std::cout << "nine";
	} else if ( n > 9 ) {
		std::cout << "Greater than 9";
	}

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
