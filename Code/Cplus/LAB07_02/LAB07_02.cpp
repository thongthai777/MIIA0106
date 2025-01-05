#include <iostream>
using namespace std;

// �ѧ��ѹ����Ѻ�Ҥ���ҡ����ش���������
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// �ѧ��ѹ����Ѻ�Ҥ�ҹ��·���ش���������
int findMin(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int size;

    // �Ѻ��Ҵ�ͧ��������ҡ�����
    cout << "Enter the size of the array: ";
    cin >> size;

    // ���ҧ��������Ẻ䴹��ԡ
    int* arr = new int[size];

    // �Ѻ��Ңͧ��������
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // ���¡�ѧ��ѹ�����Ҥ���ҡ����ش��й��·���ش
    int maxVal = findMax(arr, size);
    int minVal = findMin(arr, size);

    // �ʴ����Ѿ��
    cout << "\nMaximum value in the array: " << maxVal << endl;
    cout << "Minimum value in the array: " << minVal << endl;

    // �׹˹��¤����ӷ��Ѵ���
    delete[] arr;

    return 0;
}
