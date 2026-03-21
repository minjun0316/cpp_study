#include <iostream>
#include <string>
using namespace std;

class Student {
private: // 멤버 변수를 private으로 정의하여 멤버 변수에는 외부에서 접근 못하도록 캡슐화
    string name;
    int id;
    int score;

public: // 클래스를 만들 때 보통 멤버 변수는 감추고, 멤버 함수(interface)를 이용해 사용할 수 있게끔 하는 것이 원칙이기 때문에
    //멤버 변수 -> private 정의, 멤버 함수 -> public 정의
    Student(string n, int i, int s) { //함수 이름이 class이름과 같으면 생성자로써 객체 생성과 동시에 생성 (여기서 매개변수 받기) -> python에서는 __init__을 사용
        name = n;
        id = i;
        score = s;
    }

    void setScore(int s) { // 멤버 함수. 외부에서 score 멤버 변수에 직접 접근하지 못하므로 object.setScore(10) 멤버 함수를 이용해 score을 10으로 입력
        score = s;
    }

    int getScore() {
        return score;
    }

    void printInfo() {
        cout << "이름: " << name << '\n';
        cout << "학번: " << id << '\n';
        cout << "점수: " << score << '\n';
    }

    bool isPass() {
        return score >= 60;
    }
};

int main() { // main함수에서 객체 멤버 변수 직접 변경 불가 (private이기 때문) -> s1.name = "minjun" 불가능
    Student s1("Minjun", 20230001, 95); // 실제 객체 생성, s1이라는 객체를 생성하며 매개변수 ("Minjun", 20230001, 95)를 입력하고, 생성자가 자동 실행되면서 멤버 변수에 저장
    Student s2("Jisoo", 20230002, 58); // 객체 s2 생성 s2.name = Jisoo, s2.id = 20230002

    s1.printInfo();
    cout << '\n';

    s2.printInfo(); //멤버 함수를 사용할 때는 멤버 변수와 달리 ()를 붙여줘야 함. 매개변수가 있을 수 있기 때문
    cout << '\n';

    if (s1.isPass())
        cout << "s1 합격\n";
    else
        cout << "s1 불합격\n";

    if (s2.isPass())
        cout << "s2 합격\n";
    else
        cout << "s2 불합격\n";

    s2.setScore(75);
    cout << "\n점수 수정 후:\n";
    s2.printInfo();

    return 0;
}