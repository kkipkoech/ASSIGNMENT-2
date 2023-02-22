#include <iostream>
#include<string>
//REGISTRATION NUMBER -ENE211-0046/2020;NAME TITUS KIPKOECH CHEBET;
using namespace std;
int main ()
//Class person defined
class Person {
  private:
    int age;
    std::string firstname;
    std::string lastname;

  public:
    Person(int a, std::string f, std::string l) {
      age = a;
      firstname = f;
      lastname = l;
    }
//two member methods getvalues and setvalues
    void getValues() {
      std::cout << "Age: " << age << std::endl;
      std::cout << "First name: " << firstname << std::endl;
      std::cout << "Last name: " << lastname << std::endl;
    }

    void setValues(int a, std::string f, std::string l) {
      age = a;
      firstname = f;
      lastname = l;
    }
    return to 0;
};
