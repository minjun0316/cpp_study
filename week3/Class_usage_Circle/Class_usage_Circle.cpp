#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    double getArea(); // 클래스 멤버 함수를 선언만 함
};

double Circle::getArea() { //이런식으로 클래스 밖에서 클래스의 함수를 정의할 수도 있음 문법 기억 해두기 float 반환하고, Circle::은 Circle 소속의 함수라는 것을 명시
    return 3.14 * radius * radius; // ::는 소속을 명확히 하는 연산자
}

int main() {
    Circle donut;
    donut.radius = 1; // donut 객체의 반지름을 1로 설정
    double area = donut.getArea(); // donut 객체의 면적 알아내기
    cout << "donut 면적은 " << area << endl;

    Circle pizza;
    pizza.radius = 30; // pizza 객체의 반지름을 30으로 설정
    area = pizza.getArea(); // pizza 객체의 면적 알아내기
    cout << "pizza 면적은 " << area << endl;

    return 0;
}