#include <iostream>
using namespace std;

int main() {
    string studentIDs[5], nicknames[5], lineIDs[5], phoneNumbers[5];

    // �Ѻ�����Źѡ�֡��
    for (int i = 0; i < 5; i++) {
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "Student ID: ";
        cin >> studentIDs[i];
        cout << "Nickname: ";
        cin >> nicknames[i];
        cout << "Line ID: ";
        cin >> lineIDs[i];
        cout << "Phone Number: ";
        cin >> phoneNumbers[i];
        cout << endl;
    }

    // �ʴ������Źѡ�֡��
    cout << "Student Information:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "  Student ID: " << studentIDs[i] << endl;
        cout << "  Nickname: " << nicknames[i] << endl;
        cout << "  Line ID: " << lineIDs[i] << endl;
        cout << "  Phone Number: " << phoneNumbers[i] << endl;
        cout << endl;
    }

    return 0;
}
