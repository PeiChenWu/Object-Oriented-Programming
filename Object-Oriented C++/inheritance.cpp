#include <iostream>
using namespace std;


class Person {
    private:
        string name;
        int age;
        string occupation;

    public:
        Person(string n, int a, string o){
            name = n;
            age = a;
            occupation = o;
        }

        string GetName() {
            return name;
        }

        void SetName(string new_name) {
            name = new_name;
        }

        int GetAge() {
            return age;
        }

        void SetAge(int new_age) {
            age = new_age;
        }

        string GetOccupation() {
            return occupation;
        }

        void SetOccupation(string new_occupation) {
            occupation = new_occupation;
        }

        void SayHello() {
            cout << "Hello, my name is " << name << '.' << endl;
        }

        void SayAge() {
            cout << "I am " << age << " years old." << endl;
        }
};

class Superhero : public Person {
    private:
        string secret_identity;
        string namesis;

    public:
        Superhero(string n, int a, string o, string s, string ne) : Person(n, a, o) {
            secret_identity = s;
            namesis = ne;
        }

        string GetSecretIdentity() {
            return secret_identity;
        }

        void SetSecretIdentity(string new_secret_identity) {
            secret_identity = new_secret_identity;
        }

        string GetNemesis() {
            return namesis;
        }

        void SetNamesis(string new_namesis) {
            namesis = new_namesis;
        }

        void RevealSecretIdentity() {
            cout << "My real name is " << secret_identity << '.' << endl;
        }

        void SayNamesis() {
            cout << "My namesis is " << namesis << '.' << endl;
        }

};


int main() {
    Superhero hero("Spider-Man", 16, "student", "Peter Parker", "Doc Octopus");
    cout << hero.GetName() << endl;
    cout << hero.GetAge() << endl;
    cout << hero.GetOccupation() << endl;
    cout << hero.GetSecretIdentity() << endl;
    cout << hero.GetNemesis() << endl;
    hero.RevealSecretIdentity();
    hero.SayNamesis();

    return 0;
}
