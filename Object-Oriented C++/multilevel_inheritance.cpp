#include <iostream>
using namespace std;

class Carnivore {

    private:
        string diet;
    
    public:
        Carnivore(string d) {
            diet = d;
        }

        string GetDiet() {
            return diet;
        }

};

class Dinosaur : public Carnivore {

    private:
        double size;
        double weight;

    public:
        Dinosaur(string d, double s, double w) : Carnivore(d) {
            size = s;
            weight = w;
        }

        double GetSize() {
            return size;
        }

        void SetSize(double new_size) {
            size = new_size;
        }

        double GetWeight() {
            return weight;
        }

        void SetWeight(double new_weight) {
            weight = new_weight;
        }
};

class Tyrannosaurus : public Dinosaur {
    public:
        Tyrannosaurus(string d, double s, double w) : Dinosaur(d, s, w) {}
};

class ClassA {
  public:
    void Hello() {
      cout << "Hello from Class A" << endl;
    }
};

class ClassB : public ClassA {
  public:
    void Hello() {
      cout << "Hello from Class B" << endl;
    }
};

class ClassC : public ClassB {
    public:
        void Bonjour() {
            cout << "Bonjour" << endl;
        }

        void AuRevoir() {
            cout << "AuRevoir" << endl;
        }
        
        void Hello() {
            cout << "Hello from Class C" << endl;
        }
};

int main() {

    Tyrannosaurus tiny("whatever it wants", 12, 14);
    cout << tiny.GetSize() << endl;

    cout << tiny.GetWeight() << endl;
    cout << tiny.GetDiet() << endl;

    ClassC c;

    c.Bonjour();
    c.ClassB::Hello();
    c.ClassA::Hello();
    c.AuRevoir();
    c.Hello();

    return 0;
}