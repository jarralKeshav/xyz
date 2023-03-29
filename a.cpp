
#include <bits/stdc++.h>
using namespace std;


string convert(string s)
{
	int n = s.length();

	int res_ind = 0;

	for (int i = 0; i < n; i++) {

		if (s[i] == ' ') {

			// s[i + 1] = toupper(s[i + 1]);
			s[i + 1] -=32;
			continue;
		}

		else
			s[res_ind++] = s[i];		
	}

	return s.substr(0, res_ind);
}

int main()
{
	string str = "I live in india";
	cout << convert(str)<<endl;
	return 0;
}
