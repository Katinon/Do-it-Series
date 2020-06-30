#include <iostream>
using namespace std;

class Stack {
private:
	int m_size, m_count, * mp_data;
public:
	Stack() {
		m_size = m_count = 0;
		mp_data = NULL;
	}
	~Stack() {
		if (mp_data != NULL) delete[] mp_data;
	}
	void Create(int a_size) {
		if (a_size > 0) {
			if (mp_data != NULL) delete[] mp_data;
			m_size = a_size;
			mp_data = new int[m_size];
		}
	}
	void Push(int a_num) {
		if (m_count < m_size) {
			mp_data[m_count] = a_num;
			m_count++;
		}
		else cout << "Stack Overflow.\n";
	}
	void Pop(int *ap_data) {
		if (m_count == 0)
			cout << "There's no STACK!\n";
		m_count--;
		*ap_data = mp_data[m_count];
	}
	void ShowStack() {
		if (m_count > 0) {
			for (int i = 0; i < m_count; i++) {
				cout << mp_data[i] << endl;
			}
		}
		else cout << "No Stack.";
	}
};

int main() {
	Stack stack;
	int temp;
	int a_temp[2];
	stack.Create(5);
	stack.Push(1);
	stack.Push(3);

	stack.Pop(&temp);
	a_temp[0] = temp;

	stack.Push(5);
	stack.Push(7);

	stack.Pop(&temp);
	a_temp[1] = temp;

	stack.Push(9);
	stack.Push(11);
	stack.Push(13);

	cout << a_temp[0] << " " << a_temp[1] << endl;

	stack.ShowStack();
}