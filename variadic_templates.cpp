#include <algorithm>
#include <iostream>

using namespace std;

auto sum() { return 0; } // terminating condition

template <class H, class... T> // head to tail
auto sum(H h, T... t) {
    return h + sum(t...);
}

int main() {
    cout << sum(1, 2.5, 3, 6.25) << endl;
    
    double minimum;
    tie(minimum, ignore) = minmax(1, 0); // returns a pair
    cout << minimum << endl;

    return 0;
}