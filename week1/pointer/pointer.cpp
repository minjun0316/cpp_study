// pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int g = 20; /*전역 변수*/

int add(int x, int y) {//전역 함수
    return x+y;
}
int main()
{
    int a, b, sum; //지역 변수
    cin >> a >> b; //입력
    sum = a + b;
    cout << sum; //출력
// main 함수 밖에서 변수를 선언하고 초기화 하면 전역 변수
// 함수도 마찬가지
// main 함수 안에서 변수 선언, 초기화하면 지역 변수

    cout << "\n-------------\n";
    cout << "enter two integers : ";
    cin >> a >> b;
    cout << "sum = " << a + b<<"\n";
    cout << "(using fuction) sum = " << add(a, b) << "\n";
    cout << "global variable : " << g;


    return 0;
}

