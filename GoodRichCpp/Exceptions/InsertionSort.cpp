#include <std/libc++.h>

using namespace std;

void insertionSort(int[] array) {
	int len = sizeof(myNumbers) / sizeof(int);
	for (int i = 1; i < len; i++) {
		int curr = array[i];
		j = i - 1;
		while (j >= 0  && curr < array[j]) {
			array[j + 1] = array[j];
			j--;
		}
		A[j + 1] = curr;
	}
}

int main() {
	
}