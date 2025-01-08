#include <iostream>
#include<string>
using namespace std;

// struct
struct Student {
    string idCard; // เลขประจําตัวประชาชน
    string title; // คํานําหน้าชื่อ
    string firstName; // ชื่อ
    string lastName; // นามสกุล
    string mobile; // หมายเลขโทรศัพท์มือถือ
    string homePhone; // หมายเลขโทรศัพท์บ้าน
    string email; // อีเมล
    string grade; // ชั้นที่กําลังศึกษา
    string school; // โรงเรียน
   
};
struct Address {
    int houseNumber;
    int villageNumber; // หมู่ที่
    string alley; // ซอย
    string road; // ถนน
    string province; // จังหวัด
    string district; // อําเภอ
    string subDistrict; // ตําบล
    string postalCode; // รหัสไปรษณีย์
};
struct Guardian {
    string title; // คํานําหน้าชื่อ
    string firstName; // ชื่อ
    string lastName; // นามสกุล
    string mobile; // หมายเลขโทรศัพท์มือถือ
    string homePhone; // หมายเลขโทรศัพท์บ้าน
    string relation; // ความเกี่ยวข้องกับนักเรียน
};

int main() {
    Student student; // ข้อมูลนักเรียน
    Guardian guardian; // ข้อมูลผู้ปกครอง
    Address address;
    // Output
    for (int i = 0; i < 1; i++) {
        cout << "Enter information for student " << ":" << endl;
        cout << "Student ID: ";
        cin >> student.idCard;
        cout << "title: ";
        cin >> student.title;
        cout << "firstName: ";
        cin >> student.firstName;
        cout << "lastName: ";
        cin >> student.lastName;
        cout << "Mobile: ";
        cin >> student.mobile;
        cout << "HomePhone: ";
        cin >> student.homePhone;
        cout << "Email: ";
        cin >> student.email;
        cout << "school: ";
        cin >> student.school;
        cout << "houseNumber: ";
        cin >> address.houseNumber;
        cout << "villageNumber: ";
        cin >> address.villageNumber;
        cout << "alley: ";
        cin >> address.alley;
        cout << "road: ";
        cin >> address.road;
        cout << "province: ";
        cin >> address.province;
        cout << "district: ";
        cin >> address.district;
        cout << "subDistrict: ";
        cin >> address.subDistrict;
        cout << "postalCode: ";
        cin >> address.postalCode;
        cout << endl;
    }
    {
        cout << "Enter information for Guardian " << ":" << endl;
        cout << "title: ";
        cin >> guardian.title;
        cout << "firstName: ";
        cin >> guardian.firstName;
        cout << "lastName: ";
        cin >> guardian.lastName;
        cout << "Mobile: ";
        cin >> guardian.mobile;
        cout << "HomePhone: ";
        cin >> guardian.homePhone;
        cout << "relation: ";
        cin >> guardian.relation;
        cout << endl;

    }
   


    return 0;
}
