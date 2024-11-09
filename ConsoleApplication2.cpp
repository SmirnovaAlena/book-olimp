#include<iostream>
using namespace std;
void count(int k,int** array) {
	cout << "count()" << endl;
	int count = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			
		}
	}
}
void array_2d(int** array, int k) {
	cout << "array_2d()"<<endl;
	for (int i = 0; i < k; i++) {
		array[i] = new int[k];
	}
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++){
			array[i][j] = 0;
			cout << array[i][j];
		}
		cout << endl;
	}
}
int main() {
	int n,k;
	cin >> n>>k;
	int count = 0;
	int** array = new int* [k];
	array_2d(array,k);

	return 0;
}