#include <iostream>
using namespace std;

// ��˹��ç���ҧ struct
struct Student {
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;
};

int main() {
    Student students[5]; // ���ҧ��������ͧ struct ��Ҵ 5

    // �Ѻ�����Źѡ�֡��
    for (int i = 0; i < 5; i++) {
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "Student ID: ";
        cin >> students[i].studentID;
        cout << "Nickname: ";
        cin >> students[i].nickname;
        cout << "Line ID: ";
        cin >> students[i].lineID;
        cout << "Phone Number: ";
        cin >> students[i].phoneNumber;
        cout << endl;
    }

    // �ʴ������Źѡ�֡��
    cout << "Student Information:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "  Student ID: " << students[i].studentID << endl;
        cout << "  Nickname: " << students[i].nickname << endl;
        cout << "  Line ID: " << students[i].lineID << endl;
        cout << "  Phone Number: " << students[i].phoneNumber << endl;
        cout << endl;
    }

    return 0;
}
