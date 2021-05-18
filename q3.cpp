#include<iostream>
#include <vector>
#include<cmath>


using namespace std;
bool nocheck(string s) {
	int len = s.size();
	for (int i = 0; i < len; i++) {
		if ((s[i] > '9') && (s[i] < '0')) {
			cout << "Incorrect input:enter your expression according to given format.Program terminated, please try again.";
			return 0;
		}

	}
	if (stoi(s) > 1000) {
		cout << "Incorrect input: numbers cannot exceed 1000. Program terminated, please try again.";
		return 0;
	}
	return 1;
}
bool opcheck(string s) {
	int len = s.size();
	if (len != 1) {
		cout << "Incorrect input: invalid operator.Program terminated, please try again.";
		return 0;
	}
	char c = s[0];
	if (!((c == '+') || (c == '-') || (c == '*') || (c == '/'))) {
		cout << "Incorrect input: invalid operator.Program terminated, please try again.1";
		return 0;
	}
	return 1;
}
double solve(double a, string s, double b) {
	if (s[0] == '+')
		return a + b;
	if (s[0] == '-')
		return a - b;
	if (s[0] == '*')
		return a * b;
	else
		return a / b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//write your code here
	string no1, no2, no3, op1, op2;
	cin >> no1 >> op1 >> no2 >> op2 >> no3;

	if (nocheck(no1) && nocheck(no2) && nocheck(no3) && opcheck(op1) && opcheck(op2)) {
		int n1 = stoi(no1), n2 = stoi(no2), n3 = stoi(no3);
		if ((op1[0] == '*') || (op1[0] == '/')) {

			cout << solve(solve(n1, op1, n2), op2, n3);
		}
		else {
			cout << solve(n1, op1, solve(n2, op2, n3));
		}
	}

	return 0;
}