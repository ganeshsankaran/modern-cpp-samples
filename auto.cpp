#include <iostream>
#include <map>

using namespace std;

template <class T, class U>
auto& operator<<(ostream& os, map<T, U>& m) {
    for(auto elem : m) {
        os << elem.first << " : " << elem.second << endl;
    }

    return os;
}

int main() {
    map<int, string> m {{1, "one"}, {2, "two"}};
    cout << m << endl;
    
    return 0;
}