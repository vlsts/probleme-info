/*
    Problem: Make a Circle with OOP
    Author: Alex Golubov
*/

// Given
const float PI_F = 3.14f;

class Circle {
    private:
        double raza;
    public:
        Circle(double);
        double getArea();
        double getPerimeter();
};

Circle::Circle (double r) : raza(r) {};

double Circle::getArea() {
    return PI_F * raza * raza;
}

double Circle::getPerimeter() {
    return 2 * PI_F * raza;
}