#include <iostream>
#include <set>

using namespace std;

int main() {
	int n;
	cin >> n; 
	set<int, greater<int>> numbers;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		numbers.insert(x); 
	}
	for (int x : numbers) {
		cout << x << " ";
	}
	cout << endl;
	return 0;
}