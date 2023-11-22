#include <iostream>

class MyClass {
private:
    int data;

public:
    void setData(int value) {
        this->data = value;
    }

    void display() {
        std::cout << "Data: " << this->data << std::endl;
    }
};

int main() {
    MyClass obj1, obj2;

    obj1.setData(72);
    obj1.display();

    obj2.setData(9);
    obj2.display();

    return 0;
}
