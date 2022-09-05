#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.

 1. All grades are 0-100 inclusive 

 2. A grade (g < 40) fails

 3. If the grade - the next multiple of 5 is less than three round to the next multiple of 5, unless the grade is (g < 38)

 */

vector<int> gradingStudents(vector<int> grades) {
	vector<int> newGrades; 
	for(auto iter = grades.begin(); iter != grades.end(); iter++) {
		if(*iter < 38) {
			newGrades.push_back(*iter);
		} else {
			if(3 > (((*iter)/5)*5+5 - *iter)) {
				newGrades.push_back(((*iter)/5)*5+5);
			} else { 
				newGrades.push_back(*iter);
			}
		}
	}
	return newGrades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];
        cout << result[i] << '\n';

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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

