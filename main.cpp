#include <iostream>
using namespace std;

class Car {
	private:
    int x;
    int y;
	public:
    Car(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void move() {
        x++;
        y++;
        y++;
    }
	int getX() {
        return x;
    }
    int getY() {
        return y;
    }
};

int main() {
	setlocale(LC_ALL, "ru");
    Car car(0, 0);
    for (int i = 0; i < 9; i++) {
        car.move();
        cout << "Координата X: " << car.getX() << "    Координа Y: " << car.getY() << endl;
    }
    return 0;
}