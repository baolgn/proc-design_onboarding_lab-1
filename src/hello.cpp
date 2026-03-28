#include <iostream>
#include "../include/name.hpp"
using namespace std;

int main() {
    string name = getName();
    cout << "Hello, " << name << "!" << endl;
}
