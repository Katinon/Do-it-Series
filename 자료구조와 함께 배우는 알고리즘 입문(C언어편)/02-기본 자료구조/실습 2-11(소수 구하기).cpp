#include <iostream>
using namespace std;

//N의 제곱근 이하의 어떤 소수로도 나누어떨어지지 않는다면
//N은 소수라고 판단할 수 있음.

bool ReturnBool(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	//n까지의 소수 구하기
	int n; cin >> n;
	for (int i = 2; i <= n; i++) {
		if (ReturnBool(i)) cout << i << endl;
	}
}