#include <iostream>
using namespace std;

// 생성자 오버로딩 방식 -> 매개변수가 있는 경우와 없는 경우의 생성자를 따로 만들어 구분
class CircleOver {
public:
    int radius;

    CircleOver() {
        radius = 1;
    }

    CircleOver(int r) {
        radius = r;
    }
};

// 생성자 default parameter 방식 -> 생성자 매개변수에 미리 초기화된 값을 저장하여 매개변수 없을 때 자동으로 저장
class CircleDefault {
public:
    int radius;

    CircleDefault(int r = 1) {
        radius = r;
    }
};