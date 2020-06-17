#include <iostream>
#include <time.h>
#define swap(type, x, y) do{type t = x; x=y; y=t;} while(0)
using namespace std;

//배열의 모든 요소를 뒤섞는 shuffle 함수

void Shuffle(int a[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		int j = rand() % n;
		if (i != j) swap(int, a[i], a[j]);
	}
}

int main() {
	const int num = 5;
	int arr[num] = { 1,2,3,4,5 };
	Shuffle(arr, num);
	for (int i = 0; i < num; i++) {
		cout << arr[i] << " ";
	}
}