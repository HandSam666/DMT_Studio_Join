#include <iostream>
#include<vector>
#include<algorithm>
int main() {
	std::vector<int> v = { 8, 3, 6, 2, 7, 1 };
	std::sort(v.begin(), v.end());
	for (int x : v) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
	return 0;
}