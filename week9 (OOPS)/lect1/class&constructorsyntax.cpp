#include <iostream>
#include <string>
using namespace std;

class Student {

public:
    // CONSTRUCTOR
    Student() { // name same as class name
        cout << "Default constructor called as ctor \n";
    }

    Student(int id, int age, string name, string branch) {
        this->id = id; // paramter ka value leke isme daldo 
        this->age = age;
        this->name = name;
        this->branch = branch;
    }

    Student(const Student &srcobj) { // copy karne ke liye 
        cout << "Copying the object \n";
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->branch = srcobj.branch;
    }

    // ATTRIBUTES DECLARE KARENGE
    int id;
    int age;
    string name;
    string branch;

    // BEHAVIOUR /FUNCTION /YA METHOD
    void sleep() {
        cout << this->name << " is sleeping \n";
    }

    void study() {
        cout << this->name << " is coding \n";
    }

    ~Student() { // no need to make this but as a good coder we have to write it
        cout << "Default destructor \n";
    } // usually written as exit from the program
};

int main() {

    // Default constructor
    Student A;
    A.id = 1;
    A.age = 20;
    A.name = "Roman";
    A.branch = "IT";
    A.sleep();

    // Parameterized constructor
    Student B(2, 22, "Maharaj", "nsj"); // 1 liner direct 

    // Copy constructor
    Student C = A; // copying object 
    cout << C.name << " " << A.name << endl;

    // USING dynamic allocation 
    Student *D = new Student(5, 25, "nssndj", "cscc");
    cout << D->name << endl;
    delete D; // De-allocating memory
}
