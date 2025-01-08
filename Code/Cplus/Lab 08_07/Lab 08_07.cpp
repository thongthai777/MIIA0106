#include <iostream>
#include<string>
using namespace std;

// struct
struct Student {
    string studentID;
    string nickname;
    string Branch;
    string GPA;

};

int main() {
    Student students[10]; 

    // Output
    for (int i = 0; i < 10; i++) {
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "Student ID: ";
        cin >> students[i].studentID;
        cout << "Nickname: ";
        cin >> students[i].nickname;
        cout << "Line ID: ";
        cin >> students[i].Branch;
        cout << "GPA: ";
        cin >> students[i].GPA;
        cout << endl;
    }

    // แสดงข้อมูลนักศึกษา
    cout << "Student Information:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "  Student ID: " << students[i].studentID << endl;
        cout << "  Nickname: " << students[i].nickname << endl;
        cout << "  Line ID: " << students[i].Branch << endl;
        cout << "  GPA: " << students[i].GPA << endl;
        cout << endl;
    }

    return 0;
}
