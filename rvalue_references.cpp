#include <string>

using namespace std;

string foo() {
    return "foo";
}

int main() {
    string foo1 = foo();
    // string& foo2 = foo();
    const string& foo2 = foo();
    string&& foo3 = foo();
}