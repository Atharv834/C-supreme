#include <iostream>
#include <string>
using namespace std;

class Student {

public:
    int id;
    int age;
    string name;
    string branch;

private:
    string gfname;

public:
    Student() {
        cout << "Default constructor called as ctor \n";
    }

    Student(int id, int age, string name, string branch, string gfname) {
        this->id = id;
        this->age = age;
        this->name = name;
        this->branch = branch;
        this->gfname = gfname;
    }

    void sleep() {
        cout << this->name << " is sleeping \n";
    }

    void study() {
        cout << this->name << " is coding \n";
    }

    ~Student() {
        cout << "Default destructor \n";
    }

    string getGfname() const {  //private atributes cannot be directly accessible so wriitng a fucntion to accessit 
        return this->gfname;
    }

    void gfchat() const {    
        chatting();
    }

private:
    void chatting() const {
        cout << this->name << " is chatting with his gf " << this->gfname << endl;
    }
};

int main() {
    Student A(1, 21, "Atharv", "Computer", "A");
    cout << "Girlfriend's name: " << A.getGfname() << endl;
    A.gfchat();
    return 0;
}
