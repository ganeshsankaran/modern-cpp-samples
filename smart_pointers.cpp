#include <iostream>
#include <memory>

using namespace std;

struct Name {
    Name(string first, string last) : first(first), last(last) { cout << "Constructor" << endl; }
    ~Name() { cout << "Destructor" << endl; }
    string first;
    string last;
};

int main() {
    auto up = make_unique<Name>("Ganesh", "Sankaran");
    //auto uq = up;

    auto sp = make_shared<Name>("Ganesh", "Sankaran");
    auto sq = sp;

    return 0;
}