//#include <iostream>
//
//// ���ҧ�����������Ѻ unsigned int
//typedef unsigned int uint;
//
//int main() {
//	uint age = 25;  // uint ᷹ unsigned int
//	std::cout << "Age: " << age << std::endl;
//	return 0;
//}
//
//
//#include <iostream>
//
//// ���ҧ����������� pointer
//typedef int* IntPointer;
//
//int main() {
//	int a = 10;
//	IntPointer ptr = &a;  // ptr ᷹ int*
//	std::cout << "Value: " << *ptr << std::endl;
//	return 0;
//}
//
//#include <iostream>
//
//// ���ҧ struct ��� typedef ����ѹ
//typedef struct {
//	int x;
//	int y;
//} Point;
//
//int main() {
//	Point p1 = { 10, 20 };
//	std::cout << "Point: (" << p1.x << ", " << p1.y << ")" << std::endl;
//	return 0;
//}


#include <iostream>

enum class Color {
	RED,
	GREEN,
	BLUE
};

int main() {
	Color favorite = Color::GREEN;

	if (favorite == Color::GREEN) {
		std::cout << "Your favorite color is green!" << std::endl;
	}
	return 0;
}
