#include<iostream>
#include<vector>

using namespace std;

void bubblesort(std::vector<int>& arr) {
	int n = arr.size();
	for (int i = 0; i<n-1;++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
		
}
int main() {
	std::vector<int> numbres = { 374,3,7,4,47 };
	for (int num : numbres) {
		std::cout << num <<" ";
	}
	std::cout << std::endl;
	bubblesort(numbres);
	for (int num : numbres) {
		std::cout << num <<" ";
	}
}