#include <bits/stdc++.h>
using namespace std;

void longestKSubstr(string s, int k)
{

	int n = s.length();
	int answer = -1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			unordered_set<char> distinct(s.begin() + i,
										s.begin() + j);
			if (distinct.size() == k) {
				answer = max(answer, j - i);
			}
		}
	}

	cout << answer;
}

int main()
{
	string s = "aabacbebebe";
	int k = 3;

	// Function Call
	longestKSubstr(s, k);
	return 0;
}
