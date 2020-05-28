#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v) {
	vector<int> temp;

	for (int i = v.size() - 1; i >= 0; --i) {
		temp.push_back(v[i]);
	}
	for (size_t i = 0; i < temp.size(); ++i) {
		v[i] = temp[i];
	}
	temp.clear();
}

int main() {
	vector<int> numbers = {1, 5, 3, 4, 2};
	Reverse(numbers);
	for (auto i : numbers) {
		cout << i << " ";
	}
	return 0;
}
