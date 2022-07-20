#include <iostream>
using namespace std;

// Overriding
class Alpha {
    public:
        void Show() {
            cout <<  "I am from class Alpha" << endl;
        }
};

class Bravo : public Alpha {
    public:
        void Show() {
            cout << "I am from class Bravo" << endl;
        }
};

// Overloading
class TestClass {
    public:
        int Sum(int n1, int n2, int n3) {
            return n1 + n2 + n3;
        }

        int Sum(int n1, int n2) {
            return n1 + n2;
        }
};

// Overloading Constructor
class Person {
    private:
        string name;
        int number;
        string street;

    public:
        Person() {}

        Person(string na, int nu, string s) {
            name = na;
            number = nu;
            street = s;
        }

        string Info() {
            return (name + "lives at " + to_string(number) + ' ' + street + '.');
        }
};


//Abstract Function
class Shape {
    protected:
        double base;
        double height;

    public:
        virtual double Area() = 0;

        double GetBase() {
            return base;
        }

        void SetBase(double new_base) {
            base = new_base;
        }

        double GetHeight() {
            return height;
        }

        double SetHieght(double new_height) {
            height = new_height;
        }
};

class Triangle : public Shape {
    public:
        Triangle(double b, double h) {
            base = b;
            height = h;
        }

        double Area() {
            return base * height / 2;
        }
};

class Rectangle : public Shape {
    public:
        Rectangle(double b, double h) {
            base = b;
            height = h;
        }

        double Area() {
            return base * height;
        }

};


int main() {

    int a = 5;
    int b = 10;

    cout << (a+b) << endl;

    string c = "5";
    string d = "10";

    cout << (c+d) << endl;

    bool e = true;
    bool f = false;

    cout << (e+f) << endl;


    Bravo test_object;
    test_object.Show();

    TestClass tc;
    cout << tc.Sum(1,2,3) << endl;
    cout << tc.Sum(1,2) << endl;

    Person p1;
    Person p2("Calvin", 37, "Main Street");

    cout << p1.Info() << endl;
    cout << p2.Info() << endl;

    Triangle t(4,4);
    cout << t.Area() << endl;

    Rectangle r(4,4);
    cout << r.Area() << endl;

    return 0;
}