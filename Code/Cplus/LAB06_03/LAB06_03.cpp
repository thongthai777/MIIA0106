#include <iostream>
using namespace std;

int main() {
    // ���ҧ Array ����Ѻ�纨ӹǹ�ȹ��� 20 ���
    double numbers[20];
    double subtractionResult = 0;
    double multiplicationResult = 1;

    // �Ѻ�ӹǹ�ҡ�����
    cout << "Enter 20 decimal numbers:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // �ӹǳ����ͧ��ź (��Ƿ�� 1 - ��Ƿ�� 2 - ... - ��Ƿ�� 20)
    subtractionResult = numbers[0]; // ������ҡ����á
    for (int i = 1; i < 20; i++) {
        subtractionResult -= numbers[i];
    }

    // �ӹǳ������ͧ�ٳ (��Ƿ�� 1 * ��Ƿ�� 2 * ... * ��Ƿ�� 20)
    for (int i = 0; i < 20; i++) {
        multiplicationResult *= numbers[i];
    }

    // �ʴ��Ũӹǹ��������͹
    cout << "\nNumbers entered:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Number " << i + 1 << ": " << numbers[i] << endl;
    }

    // �ʴ��š��ź��мš�äٳ
    cout << "\nResult of subtraction: " << subtractionResult << endl;
    cout << "Result of multiplication: " << multiplicationResult << endl;

    return 0;
}
