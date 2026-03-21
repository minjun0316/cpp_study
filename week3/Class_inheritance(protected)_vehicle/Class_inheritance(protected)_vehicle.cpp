#include <iostream>
using namespace std;

class Vehicle { // 부모 클래스
protected:
    int speed;

public:
    Vehicle() {
        speed = 0;
    }

    void accelerate(int s) {
        speed += s;
    }

    void showSpeed() {
        cout << "Speed: " << speed << endl;
    }
};

//자식 클래스1 Car
class Car : public Vehicle {
public:
    void honk() {
        cout << "Beep!\n";
    }
};

//자식 클래스2 Truck
class Truck : public Vehicle {
public:
    void load() {
        cout << "Loading cargo...\n";
    }
};


int main() {
    Car c;
    Truck t;

    c.accelerate(50); // class Car의 객체이지만 Vehicle 클래스를 상속받았기 때문에 speed (pretected)상속받고, accelerate 사용 가능
    c.showSpeed();
    c.honk(); //자식 클래스의 멤버 함수도 사용 가능

    cout << '\n';

    t.accelerate(30);
    t.showSpeed();
    t.load();

    return 0;
}