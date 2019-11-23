#include <iostream>

using namespace std;

struct Mystory {
    int useless;
    int operator+(int n) {
        cout << "You call a + function\n";
        return n;
    }
    int operator-(int n) {
        cout << "You call a - function\n";
        return n;
    }
    int operator*(int n) {
        cout  << "You call a * function\n";
        return n;
    }
};
int main() {
    Mystory mystory;
    int k = mystory + 1;
    cout << k << "\n";
    k = mystory - 2;
    cout << k << "\n";
    k = mystory.operator-(2);
    cout << k << "\n";
    return 0;
}
