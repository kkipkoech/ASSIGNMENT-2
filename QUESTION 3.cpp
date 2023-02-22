//ENE211-0046/2020 TITUS KIPKOECH CHEBET
#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int id;
    string contact;
public:
    Student(string n, int i, string c) {
        name = n;
        id = i;
        contact = c;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

// Subclasses
class ICTStudent : public Student {
private:
    string courseType;
    int stage;
public:
    ICTStudent(string n, int i, string c, string t, int s) : Student(n, i, c) {
        courseType = t;
        stage = s;
    }
    void display() {
        cout << "---ICT Student---" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
        cout << "Stage: " << stage << endl;
    }
};

class LawStudent : public Student {
private:
    string courseType;
public:
    LawStudent(string n, int i, string c, string t) : Student(n, i, c) {
        courseType = t;
    }
    void display() {
        cout << "---Law Student---" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
    }
};

class BusinessStudent : public Student {
private:
    string courseType;
public:
    BusinessStudent(string n, int i, string c, string t) : Student(n, i, c) {
        courseType = t;
    }
    void display() {
        cout << "---Business Student---" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
    }
};

int main() {
    // Create some student objects
    ICTStudent s1("Victoria Sigei", 2876, "sigeivictoria@gmail.com", "BSC-IT", 10);
    LawStudent s2("Joshua Tarus", 8163, "joshtarus@gmail.com", "MBA");
    BusinessStudent s3("Gideon Jane", 2296, "bettgideon@gmail.com", "Degree");

    // Display their details
    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();

    return 0;
}
