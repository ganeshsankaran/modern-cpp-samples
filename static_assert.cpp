// assertion at compile time
using namespace std;

int main() {
    const int i {1};
    const int j {-1};

    static_assert(i > 0);
    static_assert(j > 0, "j is not positive.");

    return 0;
}

