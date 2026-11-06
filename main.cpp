#include <iostream>

using namespace std;

void foo();

int main() {
    cout << "Greeting...\n";
    cout << "I am also conflicting\n";
    cout << "Hello world!\n";
    return 0;
}

void foo() {
    cout << "foo.. fooo\n";
}