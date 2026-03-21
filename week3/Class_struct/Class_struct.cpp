#include <iostream>
using namespace std;

// C++ 구조체 선언 (struct도 class처럼 사용 가능)
// struct와 class의 차이:
// - struct: 기본 접근 지정자가 public
// - class: 기본 접근 지정자가 private
struct StructCircle {
private:
    int radius;  // 멤버 변수 (외부에서 직접 접근 불가)

public:
    // 생성자 (Constructor)
    // 객체가 생성될 때 자동으로 호출됨
    // radius를 전달받은 값으로 초기화
    StructCircle(int r) { radius = r; }

    // 멤버 함수 선언 (구현은 밖에서)
    double getArea();
};

// 멤버 함수 정의 (클래스 외부)
// StructCircle:: 의미:
// → "StructCircle 클래스에 속한 함수"라는 뜻
// → namespace랑 비슷하지만, 클래스 소속을 나타냄
double StructCircle::getArea() {
    // 원의 넓이 계산
    return 3.14 * radius * radius;
}

int main() {
    // 객체 생성
    // 생성자가 호출되면서 radius = 3으로 초기화됨
    StructCircle waffle(3);

    // 객체를 통해 멤버 함수 호출
    // 객체.함수() 형태
    cout << "면적은 " << waffle.getArea();

    return 0;
}