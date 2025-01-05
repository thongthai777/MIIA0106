#include <iostream>
using namespace std;

// �ѧ��ѹ����Ѻ�����Ѻ���������������
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// �ѧ��ѹ����Ѻ������§�ӴѺ���� Bubble Sort
void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			// �� pointer �������º��º�����Ѻ���
			if (*(arr + j) > *(arr + j + 1)) {
				swap((arr + j), (arr + j + 1));
			}
		}
	}
}

int main() {
	// ��˹��������������ҧ
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "���������͹������§�ӴѺ: \n";
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	cout << endl;

	// ���¡��ѧ��ѹ���§�ӴѺ
	bubbleSort(arr, size);

	cout << "\n����������ѧ������§�ӴѺ: \n";
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	cout << endl;

	return 0;
}
