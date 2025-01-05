#include <iostream>
#include <cstring> // ����Ѻ strcpy
using namespace std;

// �ç���ҧ Address
struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
};

// �ç���ҧ Phone
struct Phone {
    char home[10];
    char mobile[10];
};

// �ç���ҧ Student
struct Student {
    char id[9];
    char name[20];
    char surname[20];
    Address addr;
    Phone tel;
};

int main() {
    // ���ҧ����ùѡ�֡��
    Student student;

    // �Ѻ�����Źѡ�֡��
    cout << "Enter Student Information:" << endl;

    cout << "ID: ";
    cin >> student.id;

    cout << "Name: ";
    cin >> student.name;

    cout << "Surname: ";
    cin >> student.surname;

    cout << "Address - House Number: ";
    cin >> student.addr.number;

    cout << "Address - Road: ";
    cin >> student.addr.road;

    cout << "Address - District: ";
    cin >> student.addr.district;

    cout << "Address - Province: ";
    cin >> student.addr.province;

    cout << "Phone - Home: ";
    cin >> student.tel.home;

    cout << "Phone - Mobile: ";
    cin >> student.tel.mobile;

    cout << endl;

    // �ʴ������Źѡ�֡��
    cout << "Student Information:" << endl;
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Surname: " << student.surname << endl;
    cout << "Address: " << student.addr.number << ", " << student.addr.road << ", "
        << student.addr.district << ", " << student.addr.province << endl;
    cout << "Phone (Home): " << student.tel.home << endl;
    cout << "Phone (Mobile): " << student.tel.mobile << endl;

    return 0;
}
