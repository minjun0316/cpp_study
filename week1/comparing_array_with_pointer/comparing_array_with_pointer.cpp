#include <iostream>
using namespace std;

// 함수 원형 선언
bool equalArray(int* p, int* q, int size);

int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 1, 2, 3, 4, 5 };

    if (equalArray(a, b, 5))
        cout << "arrays equal" << "\n";
    else
        cout << "arrays not equal" << "\n";

    return 0;
}

// 함수 정의
bool equalArray(int* p, int* q, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (*p != *q)
            return false;
        p++; // 다음 원소
        q++; // 다음 원소
    }
    return true;
}