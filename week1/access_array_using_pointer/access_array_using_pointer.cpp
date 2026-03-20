#include <iostream>
using namespace std;

int main() {
    int n[10];
    int i;
    int* p;

    // 배열을 3의 배수로 채우기
    for (i = 0; i < 10; i++)
        *(n + i) = i * 3;

    // 포인터에 배열 시작 주소 할당
    p = n;

    // 포인터로 배열 출력
    for (i = 0; i < 10; i++)
        cout << *(p + i) << ' ';
    cout << "\n";

    // 각 원소에 2씩 더하기
    for (i = 0; i < 10; i++) {
        *p = *p + 2;
        p++; // 다음 요소로 이동
    }

    // 결과 출력
    for (i = 0; i < 10; i++)
        cout << n[i] << ' ';
    cout << "\n";

    return 0;
}