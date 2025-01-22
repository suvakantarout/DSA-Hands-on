//Friend keyword

#include <iostream>
using namespace std;

class ClassA {
private:
    int privateMember;

public:
    ClassA() : privateMember(42) {} // Initialize private member

    // Declare ClassB as a friend of ClassA
    friend class ClassB;
};

class ClassB {
public:
    void accessClassA(ClassA& a) {
        // Accessing private member of ClassA because ClassB is a friend
        cout << "Private member of ClassA is: " << a.privateMember << endl;
    }
};

int main() {
    ClassA objA;
    ClassB objB;
    objB.accessClassA(objA); // Accessing private member of objA

    return 0;
}

