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
	
}