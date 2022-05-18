#include <iostream>
using namespace std;
void ShowArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
}

int GetAmount(int* ptr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(ptr + i);
	}
	return sum;
}
int GetAmount2(int* ptr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += ((*ptr) * i);
	}
	return sum;
}
int main()
{
	const int size = 5;
	int arr[size] = { 33, 44, 7, 8, 9 };


	ShowArray(arr, size);
	cout << endl << endl;

	cout << "Amount of array elements: " <<
		GetAmount(arr, size) << endl << endl;

	cout << "Amount of array elements: " <<
		GetAmount2(arr, size) << endl << endl;

	return 0;
}
