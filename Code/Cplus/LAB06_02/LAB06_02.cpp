#include <iostream>
using namespace std;

int main() {
    // ���ҧ Array ����Ѻ�纤�ṹ
    int scores[10];
    int totalScore = 0;
    double averageScore;

    // �Ѻ��ṹ�ͧ�ѡ���¹ 10 ��
    cout << "Enter the scores for 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> scores[i];
        totalScore += scores[i]; // ������ṹ����������
    }

    // �ӹǳ��������
    averageScore = static_cast<double>(totalScore) / 10;

    // �ʴ��Ť�ṹ�ͧ�ѡ���¹���Ф�
    cout << "\nScores of Students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << scores[i] << endl;
    }

    // �ʴ��������ṹ��Ф�������
    cout << "\nTotal Score: " << totalScore << endl;
    cout << "Average Score: " << averageScore << endl;

    return 0;
}
