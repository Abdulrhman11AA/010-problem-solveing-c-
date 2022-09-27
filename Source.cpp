#include <iostream>
using namespace std;
void insertionsort(int[], int);
void print(int [], int );
int main() {
	int arr[] = { 2,8,9,7,0,4,3,1,1,0,1 },
		len = sizeof(arr) / sizeof(*arr);
	insertionsort(arr, len);
	print(arr, len);
	return 0;
}
void insertionsort(int arr[], int len) {
	int key, j;
	for (int i = 1; i < len; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void print(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
}

