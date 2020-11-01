#include <iostream>
#include <optional>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

struct Name {
    Name(initializer_list<string> r) {
        if(r.size() == 2) {
            first = *(r.begin());
            last = *(r.begin() + 1);
        }
        else if(r.size() == 3) {
            first = *(r.begin());
            middle = optional<string>(*(r.begin() + 1));
            last = *(r.begin() + 2);
        }
        else return;
    }

    string first;
    optional<string> middle = nullopt;
    string last;
};

ostream& operator<<(ostream& os, Name& name) {
    if(name.middle) os << name.first << ' ' << name.middle.value() << ' ' << name.last;
    else os << name.first << ' ' << name.last;
    
    return os;
}

int main() {
    int n {1};
    string str {"foo"};

    map<int, string> m {{1, "one"}, {2, "two"}};
    set<int> s {1, 2};
    unordered_map<int, string> um {{1, "one"}, {2, "two"}};
    unordered_set<int> us {1, 2};
    vector<int> v {1, 2, 3};

    Name name {"Ganesh", "Sankaran"};
    cout << name << endl;

    return 0;
}