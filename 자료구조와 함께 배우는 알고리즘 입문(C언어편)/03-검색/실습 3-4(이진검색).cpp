#include <iostream>
using namespace std;
//03-검색
//바이너리 서치: 정렬된 배열에서 요소를 검색하는 알고리즘.
//시간복잡도 O(logN)
int BinarySearch(int arr[], int n, int key) {
	//arr은 정렬된 배열
	//n은 배열의 길이
	//key는 인덱스를 구하고 싶은 값
	int pt1 = 0; int pt2 = n - 1;
	while (pt1 <= pt2) {
		int mid = (pt1 + pt2) / 2;
		if (arr[mid] == key) return mid;
		else if (arr[mid] < key) pt1 = mid+1;
		else pt2 = mid-1;
	}
	return -1;
}

int main() {
	const int NUM = 7;
	int arr[NUM] = { 10,20,30,40,50,60,70 };
	cout << BinarySearch(arr, NUM, 70);
}