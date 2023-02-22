#include <iostream>
#include <string>
//TITUS KIPKOECH CHEBET ;REGISTRATION NUMBER ENE211-0046/2020;
/*Qustion 1
Demonstrate how hierarchical inheritance can be implemented with the following class design computer - server + client.
NB. Include class members (data and functions of your choice). Ensure you implement the classes
using an object in the main() function.*/
class COMPUTER {
public:
    COMPUTER(const std::string& brand, const std::string& model)
        : brand_(brand), model_(model) {}

    void print() const {
        std::cout << "Brand: " << brand_ << ", Model: " << model_ << '\n';
    }

private:
    std::string brand_;
    std::string model_;
};

class CLIENT : public COMPUTER {
public:
    CLIENT(const std::string& brand, const std::string& model, const std::string& username)
        : COMPUTER(brand, model), username_(username) {}

    void print() const {
        COMPUTER::print();
        std::cout << "Username: " << username_ << '\n';
    }

private:
    std::string username_;
};

class SERVER : public COMPUTER {
public:
    SERVER(const std::string& brand, const std::string& model, int num_cores)
        : COMPUTER(brand, model), num_cores_(num_cores) {}

    void print() const {
        COMPUTER::print();
        std::cout << "Num cores: " << num_cores_ << '\n';
    }

private:
    int num_cores_;
}

int main() {
    CLIENT client("Dell", "Latitude", "jdoe");
    SERVER server("HP", "ProLiant", 8);

    std::cout << "Client:\n";
    client.print();

    std::cout << "\nServer:\n";
    server.print();

    return 0;
}





