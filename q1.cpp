#include<iostream>
#include <vector>
#include<cmath>


using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//write your code here
	cout << "What is your name?" << endl;
	string s;
	getline(cin, s);
	cout << "Hello, " << s << "!" << endl;
	cout << "What year were you born?" << endl;
	int n;
	cin >> n;
	cout << "Congratulations, you are " << 2021 - n << " old!" << endl;
	return 0;
}