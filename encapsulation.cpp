#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    void setName(const std::string& n) {
        name = n;
    }

    std::string getName() const {
        return name;
    }

    void setAge(int a) {
        if (a >= 0) {
            age = a;
        }
    }

    int getAge() const {
        return age;
    }
};

int main() {
    Person person;
    person.setName("Alice");
    person.setAge(30);
    
    std::cout << "Name: " << person.getName() << "\n";
    std::cout << "Age: " << person.getAge() << "\n";

    }
