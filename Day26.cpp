/*
Question : Design a system to calculate the area of different 
shapes using runtime polymorphism.
*/

#include <iostream>
using namespace std;

class Shape {
public:  
    virtual void area() {               // virtual function for runtime polymorphism
        cout << "Area not defined" << endl;
    }
};

class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int r) {
        radius = r;
    }

    void area() override {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* s;

    Rectangle r(12, 5);       // (length, breadth)
    Circle c(5);             // (radius)

    s = &r;
    s->area();   

    s = &c;
    s->area();   

    return 0;
}
// Output:
// Rectangle Area: 60
// Circle Area: 78.5