#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "�ô���͡���ٷ���ͧ���:\n";
    cout << "1. ������Ҿ�鹷��ͧ�����������׹���\n";
    cout << "2. ������һ���ҵâͧ�����������׹���\n";
    cout << "3. ������ӹǳ�Թ��͹�ͧ��ѡ�ҹ\n";
    cout << "���͡: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "�س���͡: ������Ҿ�鹷��ͧ�����������׹���\n";
        break;
    case 2:
        cout << "�س���͡: ������һ���ҵâͧ�����������׹���\n";
        break;
    case 3:
        cout << "�س���͡: ������ӹǳ�Թ��͹�ͧ��ѡ�ҹ\n";
        break;
    default:
        cout << "������͡���١��ͧ\n";
        break;
    }
    return 0;
}
