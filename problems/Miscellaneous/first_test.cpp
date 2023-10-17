#include <bits/stdc++.h>;

using namespace std;

int main() {
	int array[] = {1, 2, 3, 4, 4, 5, 7, 9, 10};
	int n = sizeof(array) / sizeof(array[0]);
	printf("The length of array is %d\n", n);
	int x = 3;
	int k = 0;
	for (int b = n /2; b >= 1; b /= 2) {
		while(k+b < n && array[k+b] <= x) k += b;
		printf("Now, b = %d and k = %d and k + b = %d\n", b, k, k + b);
	}
	
	if (array[k] == x) {
		printf("Element x = %d was found at index k = %d\n", x, k);
	}	
	return 0;
}