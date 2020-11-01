// [capture list](parameter list) {body}

#include <algorithm>
#include <iostream>
#include <thread>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    thread t(
        []() {
            vector v {6, 9, 4, 2, 0};
            for_each(begin(v), end(v), [](int& n) { n *= 3; });
            sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
            for_each(begin(v), end(v), [](int n) { cout << n << ' '; });
            
            cout << endl;

            unordered_map<int, string> m;
            for_each(begin(v), end(v), [&m](int n) { 
                if(n % 2 == 0) m.insert(make_pair(n, "even"));
                else m.insert(make_pair(n, "odd"));
            });
            for_each(begin(m), end(m), [](auto elem) {
                cout << elem.first << " : " << elem.second << endl;
            });
        }
    );
    t.join();
    
    return 0;
}