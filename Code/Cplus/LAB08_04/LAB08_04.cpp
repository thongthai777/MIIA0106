#include <iostream>
#include <cstring> // ����Ѻ strcpy

struct Student {
	char id[15];       // �� char[] �红�ͤ���
	char nickname[20];
};

int main() {
	Student students;

	// �� strcpy �Ѵ�͡��ͤ�������� char[]
	strcpy(students.id, "5411810006");
	strcpy(students.nickname, "Alice");

	// �ʴ���
	std::cout << "ID: " << students.id << std::endl;
	std::cout << "Nickname: " << students.nickname << std::endl;

	return 0;
}
