#include <iostream>

using namespace std;

struct int_container {
    int num;
    void incre() {
        ++num;
    }
};

void add(int_container cont) {
    ++cont.num;
}

void add(int_container* cont) {
    ++(cont->num);
}

int main() {
    int_container cont1;
    cont1.num = 0;
    cout << cont1.num << "\n";
    add(cont1);
    cout << cont1.num << "\n";
    cont1.incre();
    cout << cont1.num << "\n";
    add(&cont1);
    cout << cont1.num << "\n";
    return 0;
}
