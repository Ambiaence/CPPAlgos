#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'arrayManipulation' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

long arrayManipulation(int n, vector<vector<int>> queries) {
    #define a (*row)[0]
    #define b (*row)[1]
    #define k (*row)[2]

    #define first (*sec)[0]
    #define last (*sec)[1]
    #define val (*sec)[2]

    typedef list<int> SECTION;
    list<vector<int>> arr; 
    list<vector<int>>::iterator firstSec;
    list<vector<int>>::iterator lastSec;

    arr.push_back({1,n,0});

    for(auto row = queries.begin(); row != queries.end(); row++) {
        for(auto sec = arr.begin(); sec != arr.end(); sec++) { //Find section that point a occupies
			if(a <= first) {
				firstSec = sec;
				break;
			}
        }

        for(auto sec = firstSec; sec != arr.end(); sec++) { //Find section that point b occupies
			if(b <= first) {
				lastSec = sec;
				break;
				}
			}

			


		////	bool isInside = false;
		//	for (auto sec = firstSec; sec != lastSec+1; sec++) {
		//		if(isInside) {
		//			if( b >= last) { //Definately in a middle section or just at the end of the for loop(It will end regardless)
		//				val = val + k;
		//			} else if (b < last) { //B is on the inside
		//				arr.insert(sec {first, b, val + k});
		//				sec++;
		//				first = b+1;							
		//			}
		//		} else {
		//					
		//		}
		//	}

        //if(firstSec == lastSec) {
        //    if(a == fa and b == fb) { //both are equal
        //            (*firstSec)[2] = fk + k;
        //    } else if(a != fa and b == fb) { // only b border {
        //        firstSec = arr.insert(firstSec, {a, b, fk + k});//
        //        firstSec = arr.insert(firstSec, {fa, a-1, fk});//
        //        firstSec++; //erase old section now contigious with 
        //        arr.erase(firstSec);
        //    } else if(a == fa and b != fb)//only a border {
        //        firstSec = arr.insert(firstSec, {b+1, fb, fk});
        //        firstSec = arr.insert(firstSec, {a, b, fk + k});
        //        firstSec++; //erase old section now contigious with 
        //        arr.erase(firstSec);
        //    } else { //neither border
        //        firstSec = arr.insert(firstSec, {b+1, b, fk}); //not changed
        //        firstSec = arr.insert(firstSec, {a, b, fk + k});//Changed section
        //        firstSec = arr.insert(firstSec, {a, a+1, fk}); //not changed
        //        firstSec++; //erase old section now contigious with 
        //        arr.erase(firstSec);
        //    }
        //}
    return -1;
    #undef a 
    #undef b 
    #undef k 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    vector<vector<int>> queries(m);

    for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

    fout.close();

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

