#include <iostream>

using namespace std;

struct Counter {
    int count;
    void increase(void) {
        ++count;
    }
};

Counter counter1, counter2;
void show() {
    cout << counter1.count << ", " << counter2.count << "\n";
}

int main() {
    counter1.count = 0;
    counter2.count = 0;
    show();
    counter1.increase();
    show();
    for(int i = 0; i < 10; ++i) {
        counter2.increase();
    }
    show();
    return 0;
}
