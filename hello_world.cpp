#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter your name: ";

    string name;
    getline(cin, name);

    cout << "Hello world from @" << name << endl;

    return 0;
}
